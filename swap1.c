#include<stdio.h>
int main(){

//swap using 3rd variable
int a, b ,c;
printf("enter fisrt number a : ");
scanf("%i",&a);

printf("enter second numbe b : ");
scanf("%i",&b);

c=a;
a=b;
b=c;
 printf("a %d\n",a);
 printf("b %d\n",b);
 

//swap without 3rd variable
int x, y;
printf("enter fisrt number x : ");
scanf("%i",&x);

printf("enter second numbe y : ");
scanf("%i",&y);

x=x+y;
y=x-y;
x=x-y;

printf("x %d\n",x);
printf("y %d",y);



return 0;



}