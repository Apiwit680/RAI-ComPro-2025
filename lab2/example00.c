#include <stdio.h>
int main()
{
    char name[40];
    float Programming;
    float Drawing;
    float Physics;

    printf("Enter name :");
    scanf("%[^\n]",name);


    printf("Enter Programming Score :");
    scanf("%f",&Programming);

    printf("Enter Drawing Score :");
    scanf("%f",&Drawing);

    printf("Enter Physics Score :");
    scanf("%f",&Physics);
    
    printf("Name :%s\n",name);
    printf("AVG :%0.2f\n",(Programming+Drawing+Physics)/3);

    return 0;

}