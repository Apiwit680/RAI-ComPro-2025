#include <stdio.h>
int main(){
int num,i,even_odd;

    while(i){

        printf("Enter the number :");
        scanf("%d",&num);

        if (num == 0){
            printf("Exiting Program\n ");
            break;
        }

        else{
            even_odd = num % 2;

            if (even_odd == 0){
                printf("%d is even\n",num);

            }
            else{
                printf("%d is odd\n",num);
            }
        
        }
        
}
    return 0;
}
