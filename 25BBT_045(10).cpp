#include <stdio.h>
#include <conio.h>

int main()
{
   /* Program to perform addition, subtraction,
      multiplication and division of two numbers */
   float a, b, sum, diff, prod, div;

   clrscr();

   printf("Enter first number: ");
   scanf("%f", &a);

   printf("Enter second number: ");
   scanf("%f", &b);

   sum  = a + b;      /* addition */
   diff = a - b;      /* subtraction */
   prod = a * b;      /* multiplication */
   div  = a / b;      /* division */

   printf("\nAddition       = %f", sum);
   printf("\nSubtraction    = %f", diff);
   printf("\nMultiplication = %f", prod);
   printf("\nDivision       = %f", div);

   getch();
   return 0;
}