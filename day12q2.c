//Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
/*Show Sample Test Cases
Input 1:
50
Output 1:
Bill: ₹250
Input 2:
150
Output 2:
Bill: ₹850
Input 3:
250
Output 3:
Bill: ₹1700
*/

#include <stdio.h>

int main() {
    int units;
    float amount = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        amount = units * 5;
    else if (units <= 200)
        amount = 100 * 5 + (units - 100) * 7;
    else
        amount = 100 * 5 + 100 * 7 + (units - 200) * 10;

    printf("Bill Amount = ₹%.2f\n", amount);
    return 0;
}
