#include <stdio.h>


int main(){
    int i,max=0;
    struct profile{
        char name[100];
        char surname[100];
        int age;
        float score;

    }s[3];

    for (i=0;i<3;i++){
        printf("student %d's name : ",i+1);
        scanf("%s",s[i].name);
        scanf("%s",s[i].surname);
        printf("student %d's age : ",i+1);
        scanf("%d",&s[i].age);
        printf("student %d's score : ",i+1);
        scanf("%f",&s[i].score);
        printf("\n");

    }
    for (i=0;i<3;i++){
        if(s[i].score>s[max].score){
            max = i;
        }
    }
    printf("The highest scores belongs %s %s at %.1f scores!\n",s[max].name,s[max].surname,s[max].score);
    printf("\n");
    return 0;
}