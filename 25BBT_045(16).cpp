#include<stdio.h>
#include<conio.h>
int main()
{
 int I,P,R,N;
 clrscr();
 printf("Enter principal(P)");
 scanf("%d",&P);
 printf("Enter rate of interest(R)");
 scanf("%d",&R);
 printf("Enter time in year(N)");
 scanf("%d",&N);
 I = P*R*N / 100;
 printf("%d = %d*%d*%d",I,P,R,N );
 getch();
 return 0 ;
 }