#include <stdio.h>

// checks given number is armstrong or not
int main(){
    
    int num, temp, rem, result = 0;
    
    printf("Enter number to check armstrong number or not\n");
    scanf("%d", &num);

    // Assign given number to temp varible  
    // to compare final result with original number
    temp = num;

    // we loop until num is greater than 0
    while(temp > 0){
        // first of all we need to reverse number and add to rem 
        rem = temp % 10;

        // we cube rem and add into result 
        result += rem * rem * rem;

        // removing last digit from num
        temp /= 10;
    }

    // now check original num with result
    if(result == num){
        printf("%d is an Armstrong number.", num);
    }else{
        printf("%d is NOT Armstrong number.", num);
    }

    return 0;
}
