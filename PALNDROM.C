#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int r,n,n1,sum=0;
printf("Enter no.");
scanf("%d",&n);
n1=n;
while(n>0){
r=n%10;
sum=r+(sum*10);
n=n/10;
}
if(n1==sum)
printf("Palindome no.");
else
printf("not palindrome");
getch();
}