//Lista 1: Estruturas básicas - PDS1

#include <stdio.h>
#include <math.h> // compilar com -lm 

int main(void)
{
    float a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    printf("2a - %f \n", a + b);
    printf("2b - %f \n", a / c);
    printf("2c - %f \n", pow(a, 2));
    printf("2d - %f \n", b * c);
    printf("2e - %f \n", (a * b) - c);
    printf("2f - %f \n", a + (b * c));
    printf("2g - %f \n", (a + b) * c);
    printf("2h - %f \n", sin (a));
    printf("2i - %f \n", sqrt(b));
    printf("2j - %f \n", a + b + c);
    printf("2k - %f \n", a * b * c);
    printf("2l - %f \n", (a + b + c) / d);
    printf("2m - %f \n", (a + b) * (a - d));
    printf("2n - %f \n", (b / c) + (a * d));
    printf("2o - %f \n", sin(b) + cos(c));
    printf("2p - %f \n", log(a) - log(c));
    printf("2q - %f \n", log(a) + (log(b) * log(d) - cos(log(c))));
    printf("2r - %f \n", (b + a) / c - (d + a));
    printf("2s - %f \n", cos(d) + sin(c) * (cos(b) - sin(a)));

    return 0;    
}
