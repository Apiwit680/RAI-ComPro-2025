#include <stdio.h>
int main(){
    int i,sum = 0,max;
    int num[4];

    for(i=0;i<5;i++){
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        sum += num[i];
    }
    for (i=0;i<5;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    printf("Total Marks : %d\n",sum);
    printf("Highest Marks: %d\n",max);

  return 0;
}