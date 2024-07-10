#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year1, month1, day1, hour1;
    int year2, month2, day2, hour2;
    int state1, state2;

    printf("Enter the first date as Year month day hour: ");
    scanf("%d %d %d %d", &year1, &month1, &day1, &hour1);

    printf("If the hour is am enter 1 & if pm Enter 2: ");
    scanf("%d", &state1);

    printf("Enter the second date as Year month day hour: ");
    scanf("%d %d %d %d", &year2, &month2, &day2, &hour2);

    printf("If the hour is am enter 1 & if pm Enter 2: ");
    scanf("%d", &state2);

    // Convert PM hours to 24-hour format
    if (state1 == 2 && hour1 != 12) hour1 += 12;
    if (state1 == 1 && hour1 == 12) hour1 = 0; // Midnight case 12 am
    if (state2 == 2 && hour2 != 12) hour2 += 12;
    if (state2 == 1 && hour2 == 12) hour2 = 0; // Midnight case 12 am

    // Compare dates
    if (year1 < year2 || (year1 == year2 && month1 < month2) ||
        (year1 == year2 && month1 == month2 && day1 < day2) ||
        (year1 == year2 && month1 == month2 && day1 == day2 && hour1 < hour2))
    {
        printf("date1 is earlier\n");
    }
    else if (year1 == year2 && month1 == month2 && day1 == day2 && hour1 == hour2)
    {
        printf("They are the same\n");
    }
    else
    {
        printf("date2 is earlier\n");
    }

    return 0;
}
