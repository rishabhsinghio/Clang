#include <stdio.h>

int main()
{
    int entry_time = 10;
    int exit_time = 23;

    int total_time = exit_time - entry_time;

    printf("Total time in parking lot: %d hours\n", total_time);

    if (total_time <= 1)
    {
        printf("Total Amount: 20 INR");
    }
    else if (total_time <= 10)
    {
        int total_amount = 20 + (total_time - 1) * 10;
        printf("Total Amount: %d INR", total_amount);
    }
    else
    {
        int total_amount = 20 + (total_time - 1) * 10 + 50;
        printf("Total Amount with penalty: %d INR", total_amount);
    }

    return 0;
}
