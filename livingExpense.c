#include <stdio.h>

double getLiving(int days, int departure, int arrival)
{
    double hotel = getHotelCost(days);
    double meals = getMealCost(departure, arrival);

    return (hotel + meals);
}

double getHotelCost(int days)
{
    double raw = 0; //total spent by employee
    double allowable = 0; //allowable expenses
    double total = 0; //total amount employee owes
    allowable = 90 * (days - 1);

    printf("Enter the total expense(s) spent on hotels.");
    scanf("%f", &raw);

    total = raw - allowable; //total spent by employee minus allowed expenses

    return cost;
}

double getMealCost(int departure, int arrival)
{
    double firstBreakfastRaw = 0; //money spent by employee on breakfast on the first day
    double firstLunchRaw = 0; //money spent by employee on lunch on the first day
    double firstDinnerRaw = 0; //money spent by employee on dinner on the first day
    double firstBreakfastFinal, firstLunchFinal, firstDinnerFinal; //money spent after taking into account allowed expenses on the first day
    double total = 0; //total amount employee owes
    printf("Enter the total expense(s) of breakfast, lunch, and dinner, on the first day of your trip, seperately\n");
    printf("Cost of your breakfast on the first day: \n");
    printf("Enter zero if you did not have breakfast on the first day\n");
    scanf("%f", &firstBreakfastRaw);
    printf("Cost of your lunch on the first day: \n");
    printf("Enter zero if you did not have lunch on the first day\n");
    scanf("%f", &firstLunchRaw);
    printf("Cost of your dinner on the first day: \n");
    printf("Enter zero if you did not have dinner on the first day\n");
    scanf("%f", &firstDinnerRaw);
    switch (departure) //allowed expenses on the first day depending on departure time
    {
        case departure < 700:
            firsBreakfastFinal = firstBreakfastRaw - 9;

        case departure < 1200;
            firstLunchFinal = firstLunchRaw - 12;

        case departure < 1800;
            firstDinnerFinal = firstDinnerRaw - 16;

        default:
            break;

    }

    double lastBreakfastRaw = 0; //money spent by employee on breakfast on the last day
    double lastLunchRaw = 0; //money spent by employee on lunch on the last day
    double lastDinnerRaw = 0; //money spent by emplyee on dinner on the last day
    double lastBreakfastFinal, lastLunchFinal, lastDinnerFinal; //money spent after taking into account allowed expenses on the last day
    printf("Enter the total expense(s) of breakfast, lunch, and dinner, on the last day of your trip, seperately\n");
    printf("Cost of your breakfast on the last day: \n");
    printf("Enter zero if you did not have breakfast on the last day\n");
    scanf("%f", &lastBreakfastRaw);
    printf("Cost of your lunch on the last day: \n");
    printf("Enter zero if you did not have lunch on the last day\n");
    scanf("%f", &lastLunchRaw);
    printf("Cost of your dinner on the last day: \n");
    printf("Enter zero if you did not have dinner on the last day\n");
    scanf("%f", &lastDinnerinnerRaw);
    switch (arrival) //allowed expenses on the last day depending on arrival time
    {
        case arrival > 1900;
            lastDinnerFinal = lastDinnerRaw - 16;

        case arrival > 1300;
            lastLunchFinal = lastLunchRaw - 12;

        case arrival > 800:
            lastBreakfastFinal = lastBreakfastRaw - 9;

        default:
            break;

    }

    total = firstBreakfastFinal + firstLunchFinal + firstDinnerFinal + lastBreakfastFinal + lastLunchFinal + lastDinnerFinal; //total cost of meals after taking allowed expenses to account

    return total;
}