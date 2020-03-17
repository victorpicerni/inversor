/* Data de submissao:
 * Nome:Victor Hugo Picerni
 * RA:187930
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


const int tam_buffer=100;

void inverte(char *buffer, int *k, int *j){
	char tmp;
        tmp = buffer[*j];
	buffer[*j] = buffer[*k];
	buffer[*k] = tmp;
	
}

void palavra(char *buffer){
	int k=0, j=0;
	int tam = strlen(buffer) - 1;
 	if (buffer[tam] == '\n') buffer[tam] = '\0';
	int i;
	for (i=0; i < tam ;i++){
		
		if((!isalnum(buffer[i])) || (i == tam - 1))
		{
		if(i < tam - 1)	{
			k = i - 1;
		}		
		else{
			k = i;		
			}

		while (j<k)
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
