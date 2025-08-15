#include <stdio.h>
int main(){
    int i,x;
    int num[10];
    int even = 0;
    int odd = 0;

    for(i=0;i<10;i++){
        printf("Enter value %d:",i+1);
        scanf("%d",&num[i]);
    if(num[i] %2 ==0){
        even++;
    }
    else{
        odd++;
    }

    }
    printf("Even numbers: %d\n",even);
    printf("odd number :%d\n",odd);
    return 0;
}