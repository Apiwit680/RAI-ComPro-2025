#include <stdio.h>
int main(){

int i,sum,num;
float avrage;
sum=0;

    for(i=1;i<=10;i++) { 
        printf("%d.Enter your number: ",i);
        scanf("%d",&num);

        sum = sum + num;
        
    }
        avrage = sum/10.00;
        printf("\nThe sum of number is %d\n",sum);
        printf("The avrage of number is %.2f\n",avrage);

    return 0;
}