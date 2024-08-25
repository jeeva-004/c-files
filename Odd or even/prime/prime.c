#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, n;                   // This is a Initialization Part
    bool is_prime = true;
    printf("enter a Number: ");
    scanf("%d", &n);            // This is a User input Part

    if (n <= 1)                 // This is a condition checking part
    {
        is_prime = false;
    }
    else
    {
        for (i = 2; i * i <= n; i++)  // This is looping part. If condition false, there go a if part.
        {
            if (i % n == 0)
            {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}