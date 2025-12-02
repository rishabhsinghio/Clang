//Convert Binary Number to Decimal

#include <stdio.h>

int main(){
printf("Convert Binary into Decimal\nEnter your Binary Number: ");
int a;
scanf("%d", &a);

int r = 0;
int d;
int power = 1;
int s = 0;

int i = 0;
while(a>0){
d = a%10;
r = d*power;
power = power*2;
s = s + r;
a = a/10;

i++;
}
if(d>1){
printf("Only Binary Number Allowed");
}else{
printf("Decimal Number = %d", s);
}
return 0;
}