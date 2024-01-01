#include <stdio.h> 

void counter(char* str) 
{ 
	int vow = 0, cons = 0; 

	
	char c; 

	for (int i = 0; str[i] != '\0'; i++) { 

		c = str[i]; 

		
		if (c == 'a' || c == 'e'
			|| c == 'i' || c == 'o'
			|| c == 'u' || c == 'A'
			|| c == 'E' || c == 'I'
			|| c == 'O' || c == 'U') 
			vow++; 

		else
			cons++; 
	} 

	printf("\nVowels: %d", vow); 
	printf("\nConsonants: %d", cons); 
} 

int main() 
{
int b ;
printf("enter desired length: ");
scanf("%d",&b);
    char arr [b] ;
    printf("Enter the string: ");
    scanf("%s",arr);
	char* str = arr;


	printf("String: %s", str); 

	counter(str); 

	return 0; 
} 
