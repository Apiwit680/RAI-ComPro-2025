#include <stdio.h>
int main(){
    int i,total=0;
    struct coordinates
    {
        int m;
        int s;
    }t[3];
    for (i=0;i<3;i++){
        printf("Time input (m:s):");
        scanf("%d : %d",&t[i].m,&t[i].s);
        total += (t[i].m*60)+t[i].s;
    }
    
printf("Total time elasped: %d second(s)\n",total);

return 0;
}