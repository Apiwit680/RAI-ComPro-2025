#include <stdio.h>
int main(){
    int num,even_odd;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num >=1 && num <=100){

        even_odd = num % 2;
        if (even_odd == 0 ){
            printf("%d is even\n",num);
        }

        else{
            printf("%d is odd \n",num);

        }
    }

    else{
        printf("%d is out of range\n",num);
    }






    return 0;
}