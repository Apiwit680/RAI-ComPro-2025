#include <stdio.h>
#include <math.h>
int main(){
    struct coordinates
    {
        float x;
        float y;
    };
    struct coordinates u,v;

    printf("x1 :");
    scanf("%f",&u.x);
    printf("y1 :");
    scanf("%f",&u.y);

    printf("x2 :");
    scanf("%f",&v.x);
    printf("y2 :");
    scanf("%f",&v.y);

        
    
   float x = (u.x + v.x);
   float y = (u.y + v.y);
    printf("Resultant vector is equvalence to %.1fi + %.1fj\n"
        ,x,y);
    
 return 0;
}