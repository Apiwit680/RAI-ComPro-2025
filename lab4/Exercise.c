#include <stdio.h>
int main(){

    int j,i,num,Area,num1;
    char space  ;
    printf("Area : ");
    scanf("%d",&Area);
  
    num = Area + 2;

    for(i=1;i<=num;i++){

        for(j=1;j<=num;j++){

            if(i>1 && i<num) ){
                printf("*");
            }
            else{
                printf("%c",space);
            }

        }
        printf("\n");
    }

    return 0;
}