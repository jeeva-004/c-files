#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("What to convert (C) or (F): ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if (unit == 'C')
    {
        printf("\nEnter the temparature: ");
        scanf("%f", temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe Temparature in farenhiet is: %f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temparature: ");
        scanf("%f", temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe Temparature in farenhiet is: %f", temp);
    }
    return 0;
}