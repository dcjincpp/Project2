#include <stdio.h>

double getAllowable(int days, int departure, int arrival)
{
    double totalAllowable = 0;

    //////////HOTEL////////////
    double hotelAllowable = 0;

    hotelAllowable = 90 * (days - 1);

    //////////PARKING////////////
    double parkingAllowable;

    parkingAllowable = 6 * days;

    //////////TAXI////////////
    double taxiAllowable = 0;
    int taxiDays = 0;
    printf("How many days, out of your %d days, did you use a taxi?", days)
    scanf("%d", &taxiDays);

    taxiAllowable = 10 * days;

    //////////MEALS////////////
    double firstBreakfast;
    double firstLunch;
    double firstDinner;
    double mealAllowable;
    printf("Enter 1 for 'yes' or 0 for 'no'\n");
    printf("Did you buy breakfast on the first day: \n");
    scanf("%f", &firstBreakfast);
    printf("Did you buy lunch on the first day: \n");
    scanf("%f", &firstLunch);
    printf("Did you buy dinner on the first day: \n");
    scanf("%f", &firstDinner);
    switch (departure) //allowed expenses on the first day depending on departure time
    {
        case departure < 700:
            if (firstBreakfast == 1)
            {
                mealAllowable + 9;
            } else if (firstBreakfast == 0)
            {
            } else {
                printf("Not a valid response\n");
            }

        case departure < 1200;
            if (firstLunch == 1)
            {
                mealAllowable + 12;
            } else if (firstLunch == 0)
            {
            } else {
                printf("Not a valid response\n");
            }

        case departure < 1800;
            if (firstDinner == 1)
            {
                mealAllowable + 16
            } else if (firstDinner == 0)
            {
            } else {
                printf("Not a valid response\n");
            }


        default:
            break;

    }

    double lastBreakfast;
    double lastLunch;
    double lastDinner;
    printf("Enter 1 for 'yes' or 0 for 'no'\n");
    printf("Did you buy breakfast on the last day: \n");
    scanf("%f", &lastBreakfast);
    printf("Did you buy lunch on the last day: \n");
    scanf("%f", &lastLunch);
    printf("Did you buy dinner on the last day: \n");
    scanf("%f", &lastDinner);
    switch (arrival) //allowed expenses on the last day depending on arrival time
    {
        case arrival > 1900;
            if (lastBreakfast == 1)
            {
                mealAllowable + 9;
            } else if (lastBreakfast == 0)
            {
            } else {
                printf("Not a valid response\n");
            }

        case arrival > 1300;
            if (lastLunch == 1)
            {
                mealAllowable + 12;
            }else if (lastLunch == 0)
            {
            } else {
                printf("Not a valid response\n");
            }

        case arrival > 800:
            if (lastDinner == 1)
            {
                mealAllowable + 16;
            }else if (lastDinner == 0)
            {
            } else {
                printf("Not a valid response\n");
            }

        default:
            break;

    }

    //////////FINAL////////////
    totalAllowable = hotelAllowable + parkingAllowable + taxiAllowable + mealAllowable;

    return totalAllowable;

}