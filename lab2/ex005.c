#include <stdio.h>
int main()
{
    char name[40];
    int age;
    float Hight;
    char edu[30];

    printf("Enter your full name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&Hight);
    printf("Enter you University name: ");
    scanf("%s",edu);

    printf("HI! Everyone. This is %s from %s.I am %d years old and my height is %f cm tall.\n",name,edu,age,Hight);

    return 0;
}
