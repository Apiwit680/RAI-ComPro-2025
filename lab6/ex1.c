#include <stdio.h>


int main(){
    int i;
    struct profile{
        char name[20];
        int age;

    }s[10];

    for (i=0;i<10;i++){
        printf("student %d\n",i);
        printf("\tname : ");
        scanf("%s",s[i].name);
        printf("\tage : ");
        scanf("%d",&s[i].age);

    }
    for (i=0;i<10;i++){
        if (s[i].age>20){
            printf("\n %s,%d\n",s[i].name,s[i].age);
        }

    }
    return 0;
}