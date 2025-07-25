#include <stdio.h>
int main()
{
    int IN;
    float fl;
    char CH[20];
    
    printf("Please enter an integer value:\n");
    scanf("%d",&IN);
    printf("Please enter a float value:\n");
    scanf("%f",&fl);
    printf("Please enter a character:\n");
    scanf("%s[^\n]",CH);

    return 0;

}