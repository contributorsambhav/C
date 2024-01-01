// C implementation to check if a given
// string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    int b;
    printf("Enter the length: ");
    scanf("%d",&b);
	char str[b];
    scanf("%s",&str);

    
	int first = 0;
	int last= b - 1;


	while (last > first) {
		if (str[first++] != str[last--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
	
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}
