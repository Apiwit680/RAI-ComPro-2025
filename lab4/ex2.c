#include <stdio.h>
int main(){

int i=1,num,sum=0;

while(i<=10){
    printf("%d. Enter your number : ",i);
    scanf("%d",&num);
    sum = num + sum;
    i++;
}
    printf("\nThe sum of number is %d\n",sum);
    return 0;
}