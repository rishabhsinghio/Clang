//Create, Write and Read file in C

#include <stdio.h>

int main(){
FILE*fp;
fp = fopen("data.txt", "w");
if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
fprintf(fp, "Hello this file is created in C by rishabh singh");
fclose(fp);



return 0;
}