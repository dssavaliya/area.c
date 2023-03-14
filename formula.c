

#include<stdio.h>

int main(){

float x, y, a, b, c, d, e, f, g, z;



  printf("Enter value of x: ");
  scanf("%f", &x);
  
  printf("Enter value of y: ");
  scanf("%f", &y);

a = ( x * x ) +  ( y * y ) + ( 2 * x * y );
printf("a = %f\n" ,a);



 printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of : ");
    scanf("%f", &y);

b = x*x + 2*x*y - y*y;
printf("b = %f \n" ,b);






    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of : ");
    scanf("%f", &y);

c =(x+y)*3;
printf("c = %f \n", c);



    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of : ");
    scanf("%f", &y);

d =(x-y)*3;
printf("d = %f \n", d);



    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of : ");
    scanf("%f", &y);

e =(x+y+z)*3;
printf("e = %f \n" ,e);



    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

    printf("Enter value of z: ");
    scanf("%f", &z);

f =(x-y-z)*3;
printf("f = %f \n" ,f);
 



    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

    printf("Enter value of z: ");
    scanf("%f", &z);

g = (x+y+z)*(x+y+z);
printf("g = %f \n", g);



    return 0;
}