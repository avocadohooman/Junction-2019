#include <stdio.h>
#include <time.h>
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
    // Stroing start time 
    clock_t start_time = clock(); 
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
int main()
{
    int i;
    printf("Generating source code...\n");
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    printf("Compiling source code...\n");
    delay(1000);
    delay(1000);
    delay(1000);
    printf("Souce code ready\n");
    delay(1000);
    printf("Initializing stack\n");
    delay(1000);
    printf("Please wait.\n");
    delay(1000);
    i = 10;
    while (i > 0)
    {
        printf("Estimated time left: %d seconds\n", i);
        delay(1000); 
        --i;
    }
    printf("Source code ready\n");
    delay(1000);
    delay(1000);
    printf("\n$$========$$ TOP SECRET $$========$$\n\n");
    printf("This is the source code: 01010101010101\n");
    printf("\n$$========$$ TOP SECRET $$========$$\n");
    delay(1000);
    printf("\nOperation Successful\n");
    delay(1000);
    printf("\nUNAUTHORIZED ACCESS KEY\n");
    delay(1000);
    printf("\nSELF DELETION SEQUENCE STARTED\n");
    delay(1000);
    i = 10;
    while (i > 0)
    {
        printf("Time left until self deletion: %d seconds\n", i);
        delay(1000); 
        --i;
    }
    printf("\e[1;1H\e[2J");
    return (0);
}