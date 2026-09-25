#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
int main() 
{
    struct Time t1, t2, result;
    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.seconds = result.seconds % 60;
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes = result.minutes % 60;
    
    printf("\nAdded Time = %d hours, %d minutes, %d seconds\n", result.hours, result.minutes, result.seconds);

    return 0;
}
