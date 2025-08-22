#include <stdio.h>
int main (){
    int matrix1[3][3] = {1,0,-1,-1,2,3,2,4,5};

    int matrix3[3][3]={0};
    int i,j,k;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){

            matrix3[i][j] = 0;            
            for(k=0;k<=2;k++){
                matrix3[i][j] +=(matrix1[i][k]*matrix1[k][j]);
            }
        printf("%d  ",matrix3[i][j]);
        }
    printf("\n");
    }

    return 0;
}