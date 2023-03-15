

#include<stdio.h>
#include<math.h>

int main(){

float x, y, a, b, c, d, e, f, g, z;


//(x+y)^2
printf("FOR (x+y)^2\n");
  printf("Enter value of x: ");
  scanf("%f", &x);
  
  printf("Enter value of y: ");
  scanf("%f", &y);

a = ( x * x ) +  ( y * y ) + ( 2 * x * y );
printf("SO (x+y)^2 = %f\n\n" ,a);


//(x-y)^2
printf("FOR (x-y)^2\n");
 printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

b = x*x - 2*x*y + y*y;
printf("SO (x-y)^2 = %f \n\n" , b);





//(x+y)^3
printf("FOR (x+y)^3\n");
    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

c = x*x*x* + 3*x*x*y + 3*x*y*y + y*y*y;;
printf("SO (x+y)3 = %f \n\n", c);


//(x-y)^3
printf("FOR (x-y)^3\n");
    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

d = x*x*x* - y*y*y - 3*x*x*y + 3*x*y*y ;
printf("SO (x-y)^3 = %f \n\n", d);




//(x+y+z)^3
printf("FOR (x+y+z)3\n");
    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

    printf("Enter value of z: ");
    scanf("%f", &z);

e = x*x*x + y*y*y + z*z*z + 3*x*x*y + 3*x*x*z + 3*x*y*y* + 3*y*y*z + 3*x*z*z + 3*y*z*z + 6*x*y*z;
printf("SO (x+y+z)^3 = %f \n\n" ,e);




//(x-y-z)^3
printf("FOR (x-y-z)3\n");
    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

    printf("Enter value of z: ");
    scanf("%f", &z);

f = x*x*x - y*y*y - z*z*z - 3*x*x*y + 3*x*y*y* - 3*y*y*z - 3*y*z*z + 3*x*z*z - 3*x*x*z + 6*x*y*z;
printf("SO (x-y-z)^3 = %f \n\n" ,f);
 


//(x+y+z)^2
printf("FOR (x+y+z)^2\n");
    printf("Enter value of x: ");
    scanf("%f", &x);
  
    printf("Enter value of y: ");
    scanf("%f", &y);

    printf("Enter value of z: ");
    scanf("%f", &z);

g = x*x + 2*x*y + 2*x*z + y*y + 2*y*z + z*z;
printf("SO (x+y+z)^2 = %f \n\n", g);

printf("End of Program\nCode Run Successfully\nTHANK YOU!!\tVisit Again!!\n\n");



    return 0;
}