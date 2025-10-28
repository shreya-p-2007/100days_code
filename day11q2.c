//Write a program to find profit or loss percentage given cost price and selling price.
/*Show Sample Test Cases
Input 1:
1000 1200
Output 1:
Profit 20%
Input 2:
1000 800
Output 2:
Loss 20%
Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLossPercent;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

   if (sellingPrice > costPrice) {
        profitLossPercent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%\n", profitLossPercent);
    }
    else if (sellingPrice < costPrice) {
        profitLossPercent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%\n", profitLossPercent);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
