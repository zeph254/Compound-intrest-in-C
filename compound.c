#include <stdio.h>
#include <math.h>

int main() {
    float principle;
    float rate;
    float time;
    int num_compounds;

    printf("Enter the principal amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    printf("Enter the number of times the interest is compounded: ");
    scanf("%d", &num_compounds);

    float amount = principle * pow(1 + rate / (100.0 * num_compounds), num_compounds * time);
    printf("The amount is: %.2f\n", amount);

    float compound_interest = amount - principle;
    printf("The compound interest is: %.2f\n", compound_interest);

    return 0;
}
