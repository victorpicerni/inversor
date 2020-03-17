/* Data de submissao:
 * Nome:Victor Hugo Picerni
 * RA:187930
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


const int tam_buffer=100;

/*funcao para inverter as palavras a partir de um espaco*/
void inverte(char *buffer, int *k, int *j){
	char tmp;
        tmp = buffer[*j];
	buffer[*j] = buffer[*k];
	buffer[*k] = tmp;
	
}

/*funcao para encontrar, separar e inverter as palavras*/
void palavra(char *buffer){
	if (buffer[tam] == '\n') buffer[tam] = '\0';
	/*substituicao da quebra de linha por um fim de linha*/
	
	int k=0, j=0;
	int tam = strlen(buffer) - 1;
	/*contagem de caracteres*/ 	
	int i;
	for (i=0; i < tam ;i++){
		
		if((!isalnum(buffer[i])) || (i == tam - 1))
		/*checagem de letras ou numeros, caso nao tenha uma letra ou um numero,o if funcionará*/		
		{
		if(i < tam - 1)	{
			k = i - 1;
		}		
		else{
			k = i;		
			}

		while (j<k)
		/*troca de letras de acordo com o indice*/
			{
			inverte(buffer, &k, &j);
			j++;
			k--;
			}

		j = i + 1;

		}
	}
}

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  palavra(buffer);
  printf("%s\n", buffer);
  return 0;
}
