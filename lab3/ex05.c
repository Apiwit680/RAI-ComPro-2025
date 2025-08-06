#include <stdio.h>
int main(){
    float hight,base_radius;
    float Cone_volume;
    float pi = 3.14159265359;

    printf("Enter cone hight:");
    scanf("%f",&hight);
    printf("Enter cone base radius:");
    scanf("%f",&base_radius);
    Cone_volume = pi/3*(base_radius)*(base_radius)*hight;
    printf("Cone volume = %.1f\n",Cone_volume);

    if (Cone_volume  > 260){
        printf("this cone is perfect for Supun project\n");
    }
    else{
        printf("this cone is not fit for this project\n");
    }
    return 0;
}