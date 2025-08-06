#include <stdio.h>
int main(){
    int num1, num2,ans;
    int menu;

    printf("Enter num 1 :");
    scanf("%d",&num1);
    printf("Enter num 2 :");
    scanf("%d",&num2);
    printf("Calculation Menu\n1. +\n2. -\n3. * \n4. / \n5. %%\nEnter menu :");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            ans = num1+num2;
            printf("ANS %d + %d = %d\n",num1,num2,ans);
            break;
        case 2:
            ans = num1-num2;
            printf("ANS %d - %d = %d\n",num1,num2,ans);
            break;
        case 3:
            ans = num1*num2;
            printf("ANS %d * %d = %d\n",num1,num2,ans);
            break;
        case 4:
            ans = num1/num2;
            printf("ANS %d / %d = %d\n",num1,num2,ans);
            break;
        case 5:
            ans = num1%num2;
            printf("ANS %d %% %d = %d\n",num1,num2,ans);
    }

    return 0;
}
