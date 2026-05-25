#include <stdio.h>
#include <math.h>
#include <string.h>

int main() 
{

    char quantity;

    printf("(A=area,V=volume,P=perimeter)");
    printf("\nTo find: ");
    scanf(" %c",&quantity);// space at the start of "" in %c

    if (quantity=='A')                                         //This is the section for the area
    {   
        char shape;
        float r, len, bre, ba, hi, si, s1, s2, s3, s;
        float pi= 22.00 / 7.00;

        printf("(c=circle,s=square,r=rectangle,t=triangle,R=right triangle)");
        printf("\nTo find the area of a : ");
        scanf(" %c",&shape);

        if (shape=='c')
        {
            printf("of radius :");
            scanf("%f",&r);

            float C_Ar= pi*r*r;

            printf("Therefore the area of the circle is : %.2f Sq units",C_Ar);
        }

        else if (shape=='r')
        {
            printf("of length :");
            scanf("%f",&len);
            printf("and of bredth :");
            scanf("%f",&bre);

            float r_Ar= len*bre;

            printf("Therefore the area of the rectangle is : %.2f Sq units",r_Ar);
        }

        else if (shape=='R')
        {
            printf("of base :");
            scanf("%f",&ba);
            printf("and of height : ");
            scanf("%f",&hi);

            float R_Ar= ba*hi/2.00;    

            printf("Therefore the area of the right triangle is : %.2f Sq units",R_Ar);
        }

        else if (shape=='t')
        {   
            printf("of 1st side :");
            scanf("%f",&s1);
            printf("of 2nd side :");
            scanf("%f",&s2);
            printf("of 3rd side :");
            scanf("%f",&s3);

            s= (s1+s2+s3)/2.00;
            float T_Ar = sqrt(s * (s - s1) * (s - s2) * (s - s3));

            if (T_Ar>0)
            {
                printf("Therefore the area of the triangle is : %.2f Sq units",T_Ar);
            }
                
            else
            {
                printf("A triangle of side %.2f, %.2f and %.2f is not posible ¬_¬",s1,s2,s3);                
            }
            
        }

        else if (shape=='s')
        {
            printf("of sides :");
            scanf("%f",&si);

            float S_Ar= si*si;

            printf("Therefore the area of the square is : %.2f Sq units",S_Ar);
        }

        else
        {
            printf("Not available");
        }
    }

    else if (quantity=='V')                                       //This is the section for volume
    {
        char obj;
        float r, len, bre, ba, hi, si;
        float pi= 22.00 / 7.00;

        printf("(c=cube,q=cuboid,C=cylinder,s=sphere) ");
        printf("\nTo find the volume of a : ");
        scanf(" %c",&obj);

        if (obj=='c')
        {
            printf("of side :");
            scanf("%f",&si);

            float c_Vol= si*si*si;

            printf("Therefore the area of the cube is : %f Cu units",c_Vol);
        }

        else if (obj=='q')
        {
            printf("of length :");
            scanf("%f",&len);
            printf("and of bredth :");
            scanf("%f",&bre);
            printf("and of hight :");
            scanf("%f",&hi);

            float Q_Vol= len*bre*hi;

            printf("Therefore the area of the rectangle is : %f Cu units",Q_Vol);
        }

        else if (obj=='C')
        {
            printf("of base radius :");
            scanf("%f",&r);
            printf("and of height :");
            scanf("%f",&hi);

            float C_Vol= pi*r*r*hi;           

            printf("Therefore the volume of the cylinder is : %f Cu units",C_Vol);
        }

        else if (obj=='s')
        {
            printf("of radius :");
            scanf("%f",&r);

            float S_Vol= 4*pi*r*r*r/3;

            printf("Therefore the volume of the sphere is : %f Cu units",S_Vol);
        }

        else
        {
            printf("Not available");
        }
    }

    else if (quantity=='P')                            //This is the section of perimeters
    {
        char shape;
        float r, len, bre, ba, hi, si;
        float pi= 22.00 / 7.00;

        printf("(c=circle,s=square,r=rectangle,t=triangle)");
        printf("\nTo find the area of a : ");
        scanf(" %c",&shape);

        if (shape=='c')
        {
            printf("of radius :");
            scanf("%f",&r);

            float C_Peri = 2.00*pi*r;

            printf("Therefore the circumference of the circle is : %f units",C_Peri);
        }

        else if (shape=='r')
        {
            printf("of length :");
            scanf("%f",&len);
            printf("and of bredth :");
            scanf("%f",&bre);

            float R_Peri = 2.00*(len+bre);

            printf("Therefore the perimeter of the rectangle is : %f units",R_Peri);
        }

        else if (shape=='s')
        {
            printf("of sides :");
            scanf("%f",&si);

            float S_Peri = 4.00*si;

            printf("Therefore the perimeter of the square is : %f units",S_Peri);
        }

        else if (shape='t')
        {
            float s1, s2, s3;

            printf("of 1st side :");
            scanf("%f",&s1);
            printf("of 2nd side :");
            scanf("%f",&s2);
            printf("of 3rd side :");
            scanf("%f",&s3);

            float T_Peri = s1+s2+s3;       

            printf("Therefore the perimeter of the triangle is : %f units",T_Peri);
        }

        else
        {
            printf("Not available");
        }

    }

    else
    {
        printf("NOT AVAILABE \n choose from the give options");
    }

    char name[20];

    printf("\nThanks for your time !\nEnter your first name: ");
    scanf("%s", name);  // no & needed

    if (strcmp(name, "Anubhab_Roy") == 0) 
    {
        printf("Your program is working just fine. \n:)");
    } 
    
    else 
    {
        printf("You have just used a code written by Anubhab Roy. \n:)");
    }

    return 0;
}
