//Lista 1: Estruturas básicas - PDS1

#include <stdio.h>
#include <math.h> // compilar com -lm 

int main(void)
{
    printf("1a - %d \n", 3 + 4); // O professor deu exemplo com %d e não com %i
    printf("1b - %f \n", 7.0 / 4);
    printf("1c - %f \n", pow(3.0,2));
    printf("1d - %f \n", 5.3 * 2.1);
    printf("1e - %d \n", 2 * 5 - 2);
    printf("1f - %d \n", 2 + 2 * 5);
    printf("1g - %d \n", (2 + 5) * 3); 
    printf("1h - %f \n", sin(3.141502));
    printf("1i - %f \n", sqrt(5));
    printf("1j - %d \n", 1 + 2 + 3);
    printf("1k - %d \n", 1 * 2 * 3);
    printf("1l - %d \n", (1 + 2 + 3) / 3.0);
    printf("1m - %d \n", (2 + 4) * (3 - 1));
    printf("1n - %d \n", (9 / 3) + (3 * 2));
    printf("1o - %f \n", sin (4.5) + cos (3.7));
    printf("1p - %f \n", log(2.3) - log (3.1));
    printf("1q - %f \n", log (7) + (log(7) * log(7) - cos(log(7))));
    printf("1r - %f \n", (10.3 + 8.4) / 50.3 - (10.3 + 8.4));
    printf("1s - %f \n", (cos(0.8) + sin(0.8)) * (cos(0.8) - sin (0.8)));
}
