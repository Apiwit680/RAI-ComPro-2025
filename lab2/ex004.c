#include <stdio.h>
int main()
{
    char name[20];
    int ID;
    int Program; 
    float Physics;
    float Calculus;


    printf("Enter your Name: ");
    scanf("%s",&name);
    printf("Enter your student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming score: ");
    scanf("%d",&Program);
    printf("Enter your Physics score: ");
    scanf("%f",&Physics);
    printf("Enter your Calculus score: ");
    scanf("%f",&Calculus);

    printf("HI %s (%d)! Your GPA is %0.2f\n",name,ID,(Program+Physics+Calculus)/3);


    return 0;
}