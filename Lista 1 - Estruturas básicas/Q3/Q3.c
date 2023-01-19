//Lista 1: Estruturas básicas - PDS1

#include <stdio.h>
#include <math.h> // compilar com -lm 

int main(void)
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("3a - %f \n", (a + b + c) / 3);
    printf("3b - %f \n", ((3 * a) + (4 * b) + (5 * c) / 12 ));
    printf("3c - %f \n", 2 * M_PI * a);
    printf("3d - %f \n", M_PI * pow(a, 2));
    printf("3e - %f \n", b * c);
    printf("3f - %f \n", sqrt(pow(b, 2) + pow(c, 2)));
    printf("3g - %f e %f \n", (-b + sqrt((pow(b,2) - 4 * a *c))) / (2 * a), (-b - sqrt((pow(b,2) - 4*a*c))) / (2 * a));

}

//Calculo das raizes (G)
// X1 = (-b + sqrt((pow(b,2) - 4*a*c))) / 2 * a
// X2 = (-b - sqrt((pow(b,2)- 4*a*c))) / 2 * a
