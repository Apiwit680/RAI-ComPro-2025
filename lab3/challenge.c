#include <stdio.h>
int main(){

    float calculus_score,physics_score,compro_score,GPA,cal_grade,phy_grade,compro_grade;
    char cal,phy,compro;

    printf("Enter your Calculus score: ");
    scanf("%f",&calculus_score);
    printf("Enter your Physic score: ");
    scanf("%f",&physics_score);
    printf("Enter your Science score: ");
    scanf("%f",&compro_score);

    if (calculus_score<=100 && calculus_score>=80){
        cal = 'A';
        cal_grade = 4.0;
    }
    else if (calculus_score<80 && calculus_score>=70){
        cal = 'B';
        cal_grade = 3.0;
    }
    else if (calculus_score<70 && calculus_score>=60){
        cal = 'C';
        cal_grade = 2.0;
    }
    else if (calculus_score<60 && calculus_score>=50){
        cal = 'D';
        cal_grade = 1.0;
    }
    else if (calculus_score<50 && calculus_score>=1){
        cal = 'F';
        cal_grade = 0.0;
    }

    if (physics_score<=100 && physics_score >=80){
        phy = 'A';
        phy_grade = 4.0;
    }
    else if (physics_score<80 && physics_score >=70){
        phy = 'B';
        phy_grade = 3.0;
    }
    else if (physics_score<70 && physics_score >=60){
        phy = 'C';
        phy_grade = 2.0;
    }
    else if (physics_score<60 && physics_score >=50){
        phy = 'D';
        phy_grade = 1.0;
    }
    else if (physics_score<50 && physics_score >=1){
        phy = 'F';
        phy_grade = 0.0;
    }
    if (compro_score<=100 && compro_score>=80){
        compro = 'A';
        compro_grade = 4.0;
    }
    else if (compro_score<=100 && compro_score>=80){
        compro = 'B';
        compro_grade = 3.0;
    }
    else if (compro_score<=100 && compro_score>=80){
        compro = 'C';
        compro_grade = 2.0;
    }
    else if (compro_score<=100 && compro_score>=80){
        compro = 'D';
        compro_grade = 1.0;
    }
    else if (compro_score<=100 && compro_score>=80){
        compro = 'F';
        compro_grade = 0.0;
    }
    GPA = (cal_grade+phy_grade+compro_grade)/3;
    printf("%-12s %-9s %-9s %-6s\n","Subject","Score","Grade","Grade");
    printf("--------------------------------------\n");
    printf("%-12s %-9.0f %-9c %-6.1f\n","cal",calculus_score,cal,cal_grade);
    printf("%-12s %-9.0f %-9c %-6.1f\n","physics",physics_score,phy,phy_grade);
    printf("%-12s %-9.0f %-9c %-6.1f\n","compro",compro_score,compro,compro_grade);
    printf("\nGPA : %.1f \n",GPA);

    return 0;
}