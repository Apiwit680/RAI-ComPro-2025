#include <stdio.h>
int main(){
    int number,i,mul=1;
    printf("Enter a number: ");
    scanf("%d",&number);

    for (i=number;i>=1;i--){

        mul = mul*i;

    }

    printf("Factorial of %d is %d\n",number,mul);
    return 0;
}