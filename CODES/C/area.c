#include <stdio.h>

int main() {

    char shape;
    float r, len, bre, ba, hi, si;
    float pi= 22.00 / 7.00;

    printf("(c=circle,s=square,r=rectangle,t=triangle) \n 
            To find the area of a : ");
    scanf(" %c",&shape);

    if (shape=='c')
        {
            printf("of radius :");
            scanf("%f",&r);
            float C_Ar= pi*r*r;
            printf("therefore the area of the circle is %f \n",C_Ar);
        }

    else if (shape=='r')
        {
            printf("of length :");
            scanf("%f",&len);
            printf("and of bredth :");
            scanf("%f",&bre);
            float R_Ar= len*bre;
            printf("therefore the area of the rectangle is %f :",R_Ar);
        }

    else if (shape='t')
        {
            printf("of base :");
            scanf("%f",&ba);
            printf("and of height :");
            scanf("%f",&hi);
            float T_Ar= ba*hi/2;           
            printf("therefore the area of the square is %f :",T_Ar);
        }

    else if (shape=='s')
        {
            printf("of sides :");
            scanf("%f",&si);
            float S_Ar= si*si;
            printf("therefore the area of the square is %f \n",S_Ar);
        }

    else
        {
        printf("not available");
        }

    return 0;
}
