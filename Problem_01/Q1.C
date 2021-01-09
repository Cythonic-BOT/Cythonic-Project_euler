// Program for Q1
#include <stdio.h>

// Function to get the sum of the multiples
int multiple_sum(int divisor_01, int divisor_02, int upper_bound)
{
    // set counter
    int counter;
    int sum = 0;

    // loop through the values
    for(counter = 0; counter < upper_bound; counter++)
    {
        if ((counter % 3 == 0) || (counter % 5 == 0))
        {
            sum += counter;
        }
    }

    return sum;
}

// Main function
int main()
{
    //  Get the input
    int divisor_01, divisor_02, upper_bound;

    printf("Enter divisor_01:");scanf("%d",&divisor_01);
    printf("Enter divisor_02:");scanf("%d",&divisor_02);
    printf("Enter upper_bound:");scanf("%d",&upper_bound);

    // Call the Function
    int sum = multiple_sum(divisor_01, divisor_02, upper_bound);
    printf("%d\n", sum);
}
