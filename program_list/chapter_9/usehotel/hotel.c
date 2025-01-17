//hotel.c -- hotel management functions
#include <stdio.h>
#include "hotel.h"
int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms\t\t2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza\t\t4) The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 ||
	    (code < 1 || code > 5))
    {
	if (status != 1)
	    scanf("%*s");	//dispose of non-integer input
	printf("Enter an integer from 1-5, please.\n");
    }

    return code;
}

int getnights(void)
{
    int nights;

    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1)
    {
	scanf("%*s");
	printf("Please enter an integer, such as 2.\n");
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0;
    double factor = 1;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
	total += rate * factor;
    printf("The total cost will be $%0.2f.\n", total);
}
