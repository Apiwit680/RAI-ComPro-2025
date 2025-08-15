#include <stdio.h>
int main(){

    int value[10],i;

    for(i=0;i<10;i++){

        printf("Enter the value %d here: ",i+1);
        scanf("%d",&value[i]);
 

    }
    printf("Values in array are: ");
    for (i=0;i<10;i++){
        printf("%d,",value[i]);

    }
    printf("\n");    

    return 0;
}