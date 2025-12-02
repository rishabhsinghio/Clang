//Add Digits of a Number

#include <stdio.h>

int main(){
printf("Add Digits of a Number\nEnter your number: ");
int a;
scanf("%d", &a);

int s = 0;
int d;

int i = 0;
while(a>0){

d = a%10;
s = s+d;
a = a/10;

i++;
}

printf("Sum = %d", s);
return 0;
}