#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,r,c,a[50][50],count=0;
printf("Enter no. of rows and column-\n");
scanf("%d%d",&r,&c);
printf("Enter elements of matrix:-\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
if(a[i][j]==0)
count++;
}
}
printf("The foloowing matrix you entered:-\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
if(count>((r*c)/2)){
printf("Sparse matrix");
}
else{
printf("Not a Sparse Matrix");
}
getch();
}
