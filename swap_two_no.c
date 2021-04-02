#include <stdio.h>

int n1,n2;
swapWithTemp(int, int);
swapWithoutTemp(int, int);


int main(){

    printf("Enter any two number to swap")
    scanf("%d%d", &n1,&n2);
    
    // swap two number using temp variable
    swapWithTemp(n1,n2);
   
    // swap two number without using temp variable
    swapWithoutTemp(n1,n2);
    
    return 0;
}

void swapWithTemp(n1,n2){
    int temp;

    printf("Values before swap\n")
    printf("value of a is %d and value of b is %d", n1,n2);

    temp = n1;   //assign n1 value to temp variable
    n1 = n2;     //assign n2 value to n1 variable
    n2 = temp;   //assign temp value to n2 variable   
    
    printf("Values After swap\n")
    printf("value of a is %d and value of b is %d", n1,n2);
}

void swapWithoutTemp(n1,n2);{
    printf("Values before swap\n")
    printf("value of a is %d and value of b is %d", n1,n2);

    n1 = n1 + n2;   //assign n1 + n2 value to n1 variable (eg. n1 = 10 + 20)
    n2 = n1 - n2;   //assign n1 - n2 value to n2 variable (eg. n2 = 30 + 20)
    n1 = n1 - n2;   //assign n1 - n2 value to n1 variable (eg. n1 = 30 + 10)
    
    printf("Values After swap\n")
    printf("value of a is %d and value of b is %d", n1,n2);
}