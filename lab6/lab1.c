#include <stdio.h>


int main(){
    int i;
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
    printf("\n");
    for (i=0;i<3;i++){

        printf("\nstudent %d name is %s %s, age %d.",i+1,s[i].name,s[i].surname,s[i].age);
        
    }
    printf("\n");
    return 0;
}