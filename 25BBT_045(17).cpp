#include<stdio.h>
#include<conio.h>
int main()
{
 int L,A,P;
 clrscr();
 printf("Enter the length of the square");
 scanf("%d",L);
 A =L * L ;
 P = 4 * L ;
 printf("%d = %d *%d", A,L);
 printf("%d = %d *%d", P,L);
 getch();
 return 0;
}