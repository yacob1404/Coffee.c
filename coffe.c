#include <stdio.h>
int main ()
{

//Declare variables
 float dcaf = 6.98;
 float caf = 7.48;
 float taxRate = .06;
 float dcafAmount, cafAmount, tax, subtotal, total;

//Ask for amounts (Lbs) of beans
 printf("How many pounds of regular? ");
 scanf("%f", &cafAmount);
 printf("How many punds of decaf? ");
 scanf("%f", &dcafAmount);
 printf("\n");

//Print user input
 printf("%.2f pounds of regular at $%.2f per pound\n", cafAmount,caf);
 printf("%.2f pounds of decaf at $%.2f per pound\n", dcafAmount,dcaf);
 printf("\n");

//Math for totals and tax
 tax = ((dcafAmount * dcaf) + (cafAmount * caf)) * taxRate;
 subtotal = (dcafAmount * dcaf) + (cafAmount * caf);
 total = subtotal + tax;

//Print final results for user
 printf("Subtotal: $%5.2f\n", subtotal);
 printf("Tax:      $%5.2f\n", tax);
 printf("Total:    $%5.2f\n", total);

return 0;

}
