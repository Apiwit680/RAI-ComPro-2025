#include <stdio.h>
int main (){
    int matrix[3][3] = {1,0,-1,-1,2,3,2,4,5};
    int i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(i!=j){

                matrix[i][j]=0;
               

            }
            printf("%d",matrix[i][j]);
            
        }
    printf("\n");
    }


}