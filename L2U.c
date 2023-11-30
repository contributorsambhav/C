#include <stdio.h> 

void upper(char* str) 
{ 
	int vow = 0, cons = 0; 

	char c; 
    int d ;
  
	for (int i = 0; str[i] != '\0'; i++) { 

		c = str[i]; 
        d = c; // typecast
        if(c>=97&&c<=122){
        d = c-32;
        } 
        printf("%c",d);
    }
}
int main() {

int b ;
printf("enter desired length: ");
scanf("%d",&b);
    char arr [b] ;
    printf("Enter the string: ");
    scanf("%s",arr);
	char* str = arr;


	upper(str); 

	return 0; 
} 


