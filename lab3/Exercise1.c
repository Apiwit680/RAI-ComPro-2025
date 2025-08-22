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
    if (menu == 1){
        ans = num1+num2;
        printf("ANS %d + %d = %d\n",num1,num2,ans);
    }
    else if (menu == 2){
        ans = num1 - num2;
        printf("ANS %d - %d = %d\n",num1,num2,ans);
    }
    else if (menu == 3){
        ans = num1 * num2;
        printf("ANS %d * %d = %d\n",num1,num2,ans);
    }
    else if(menu == 4){
        ans = num1 / num2;
        printf("ANS %d / %d = %d\n",num1,num2,ans);
    }
    else {
        ans = num1 % num2;
        printf("ANS %d %% %d = %d\n",num1,num2,ans);
    }
    return 0;
}