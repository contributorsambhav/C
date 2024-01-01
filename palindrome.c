#include <stdio.h>

int main() {

  int n, rev = 0, rem;

  printf("Enter an integer: ");
  scanf("%d", &n);
  int og = n;

  while (n > 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

 if(rev==og){
    printf("Entered number %d is a palindrome",rev);
 }else{
    printf("Entered number %d is not a palindrome",og);
 }

return 0;
}