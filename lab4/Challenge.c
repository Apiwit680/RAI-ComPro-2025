#include <stdio.h>
int main(){
    int menu,i,deposit=0,withD;
    float Check=0.0;
    char Title[] ="\n====== ATM MENU ======\n";
    char check_B[] ="1. Check Balance\n";
    char DepositM[] ="2. Deposit Money\n";
    char WithM[] ="3. Withdraw Money\n";
    char Ex[] = "4. Exit\n";



    do {
        printf("%s",Title);
        printf("%s",check_B);
        printf("%s",DepositM);
        printf("%s",WithM);
        printf("%s",Ex);

        printf("Choose an option: ");
        scanf("%d",&menu);
        i = menu;

        switch (menu){
            case 1:
                printf("Current Balance: %.2f\n",Check);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d",&deposit);
                Check += deposit;
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d",&withD);
                printf("Withdrawal successful.\n");
                Check -= withD;
                break;

            }
        }   
    while (i != 4);
    printf("Thank you for using the ATM.\n");    
   
    }
    