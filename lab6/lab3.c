#include <stdio.h>
#include <math.h>
int main(){
    struct coordinates
    {
        float x;
        float y;
    };
    struct coordinates co1,co2;

    printf("x1 :");
    scanf("%f",&co1.x);
    printf("y1 :");
    scanf("%f",&co1.y);

    printf("x2 :");
    scanf("%f",&co2.x);
    printf("y2 :");
    scanf("%f",&co2.y);

        
    
   float d = sqrt(pow((co2.x-co1.x),2)+pow((co2.y-co1.y),2));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)"
        ,co1.x,co1.y
        ,co2.x,co2.y,d);
    
 return 0;
}