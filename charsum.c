#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,rem=0,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
    
        while(n>10){
            rem = n%10;
            n/=10;
            sum+=rem;
            
        }
        printf("%d",&sum);
}