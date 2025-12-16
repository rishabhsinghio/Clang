//Writing RAM in C

#include <stdio.h>

int main() {
    int i,j;

    for(i=1; i<=7; i++) {
//First character R
        for(j=1; j<=7; j++) {
            if(j==1||(i==1 && j<5)||(i==4 && j<5)||(j==5 && (i==2||i==3))||(i==j && i>4)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
//Character A
        for(j=1; j<=7; j++) {
            if(j==1||j==6||(i==1&&j<7)||(i==4&&j<7)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
//Character M
        for(j=1; j<=7; j++) {
            if(j==1||j==7||(i==j && i<4)||(i+j==8 && i<=4)) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}