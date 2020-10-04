#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    time_t s, val = 1;
    struct tm* current_time;

    int i;
    for (i = 0; i < 1000; i++) {

        s = time(NULL);
       current_time = localtime(&s);
        printf("%02d:%02d:%02d\n",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);

         delay(1);

    }
    return 0;
}
