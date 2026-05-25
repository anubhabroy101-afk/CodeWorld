#include <stdio.h>
#include <stdlib.h> 
#include <math.h>  
#include <string.h>
int main() {
    int a, b, c, M;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a>b)&&(a>c))
    {
        M = a;
    }
    
    else if ((b>c)&&(b>a))
    {
        M = b;
    }
    
    else 
    {
        M = c;
    }

    printf("The greatest number is %d", M);

    return 0;
}
