#include <stdio.h>

double getLiving()
{
    double hotel;
    double meals;

    printf("Enter the total expense(s) spent on hotels: ");
    scanf("%f\n", &hotel);
    
    printf("Enter the total expense(s) spent on meals: ");
    scanf("%f\n", &meals);

    return (hotel + meals);
}