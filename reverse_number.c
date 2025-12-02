//Reverse a Number

#include <stdio.h>

int main(){

printf("Reverse the order of digit of a Number\n Enter your number: ");
int a;
scanf("%d", &a);

int r = 0;
int d;

int i = 0;
while(a>0){
d=a%10;
r = r*10 + d;
a = a/10;
i++;
}

printf("Reverse order is %d", r);
return 0;
}