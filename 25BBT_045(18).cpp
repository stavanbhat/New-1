#include<stdio.h>
#include<conio.h>
int main ()
{
 int L,B,A,P;
 clrscr();
 /* here L = length , B = breadth, A = area and P = parameter */
 printf("Enter value of length");
 scanf("%d",&L);
 printf("Enter value of breadth");
 scanf("%d",&B);
 A = L*B;
 printf("%d = %d *%d",A,L,B);
 P = 2 * (L + B);
 printf("%d = 2 * (%d + %d)",P,L,B);
 getch();
 return 0;
 }