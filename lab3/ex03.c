#include <stdio.h>
int main(){
    int num , even_odd;
    printf("Enter a number:");
    scanf("%d",&num);
    even_odd = num % 2;

    switch (num){
        case 1 ... 100:

            switch(even_odd){
                case 1:
                    printf("%d is odd\n",num);
                    break;

                default:
                    printf("%d is even\n",num);
            }
        break;
        
        default:
            printf("%d is out of range\n",num);
    }
        
    return 0;
}
