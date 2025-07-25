#include <stdio.h>
int main()
{
    char name[20];
    char gender[2];
    char edu[30];
    int age;
    float Hight;
    int weight;


    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&Hight);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf("%s",gender);
    printf("Enter your Education Qualification: High School: ");
    scanf("%s",edu);

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Gender: %s\n",gender);
    printf("Hight: %f\n",Hight);
    printf("Weight: %d\n",weight);
    printf("Education: %s\n",edu);

    return 0;
}