#include <stdio.h>

int main(){
    int n1, n2, sum;

    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    // add n1 & n2 into sum variable
    sum = n1 + n2;

    printf("Sum of %d and %d is %d\n\n",n1,n2,sum);
    
    return 0;
}
