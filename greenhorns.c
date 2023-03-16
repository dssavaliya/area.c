#include <stdio.h>

int main() {
//pattern 1
printf("\t\t*\t\t*\n\n");
printf("\t*\t\t*\n\n");
printf("*\t\t*\n\n");
printf("\t*\t\t*\n\n");
printf("\t\t*\t\t*\n\n");
printf("\t\t(PATTERN_1[\n\n\n\n");



//pattern 2
printf("\t*\t*\t*\t*\t*\t*\t*\n\n\n");
printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
printf("*\t\t*\t\t\t\t\t*\n\n");
printf("*\t\t*\t\t*\t*\t*\t*\n\n");
printf("*\t\t*\t\t*\t\t*\t*\n\n");
printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
printf("\t\t\t[PATTERN_2]\n\n\n");


//swap using 3rd variable
printf("[c program of swap using 3rd variable]\n");
int a, b ,c;
printf("enter fisrt number a : ");
scanf("%d",&a);

printf("enter second number b : ");
scanf("%d",&b);

c=a;
a=b;
b=c;
 printf("a = %d\n",a);
 printf("b = %d\n\n",b);
 

//swap without 3rd variable
printf("[c program of swap without 3rd variable]\n");
int x, y;
printf("enter fisrt number x : ");
scanf("%d",&x);

printf("enter second number y : ");
scanf("%d",&y);

x=x+y;
y=x-y;
x=x-y;

printf("x = %d\n",x);
printf("y = %d\n\n",y);


//convert temperature from celsius to fahrenhit
printf("[C Program of Convert Temperature From Celsius to Fahrenhit]\n");
float celsius,fahrenhit;

printf("Enter Temerature in Celsius : ");
scanf("%f" , &celsius);

fahrenhit = ((celsius*9)/5) + 32;
printf("%.2f celsius = %.2f fahrenhit\n\n" , celsius , fahrenhit);


/*c program of find gross salary for
HRA = 10%
DA = 5%
TA = 8%
*/
printf("[C program of Find Gross Salary]\n");
int bs , hra , da , ta , gross_salary ;

printf("Enter Basic Salary : ");
scanf("%d" , &bs);

hra =(10*bs)/100;
da =(5*bs)/100;
ta =(8*bs)/100;

gross_salary = bs+hra+da+ta;
printf("Gross Salary = %d\n\n" , gross_salary);


    return 0;
}