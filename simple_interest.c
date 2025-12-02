//Calculate Simple Interest S = PxRxT
#include <stdio.h>

int main(){
printf("Calculate Simple Interest \nEnter the principle amount: ");
float p;
scanf("%f", &p);

printf("at what rate percent: ");
float r;
scanf("%f", &r);

printf("and the time period: ");
float t;
scanf("%f", &t);

float s = p*r*t;
float i = s/100;

printf("The Simple Interest is %.2f ", i);

return 0;
}