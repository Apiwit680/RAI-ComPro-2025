#include <stdio.h>
int main(){
    int original[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int Reversed[9];
    int min,i;
    printf("Reversed Array:");
    for(i=8;i>=0;i--){
        Reversed[i] = original[i];
        printf(" %d",Reversed[i]);
    }
    printf("\n");
    return 0;
}