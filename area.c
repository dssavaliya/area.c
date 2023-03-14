#include<stdio.h>
int main(){

//area of circle
    float radius;
    printf("enter redius of circle : ");
    scanf("%f", &radius);

    printf("area of circle : %f \n", 3.14 * radius * radius);

//area of square
    int side;
    printf("enter side of square : ");
    scanf("%d", &side);

    printf("area of square is : %d \n", side * side);

//area of rectangle
    int length, width;
    printf("enter length of rectangle : ");
    scanf("%d", &length);

    printf("enter width of rectangle : ");
    scanf("%d", &width);

    printf("area of rectangle is : %d \n" , length * width);


//area of triangle
    float base, hight;
    printf("enter base of triangle : ");
    scanf("%f", &base);

    printf("enter hight of triangle : ");
    scanf("%f", &hight);

    printf("area of triangle is : %0.2f \n" , (base * hight)/2);


//simple interest
    float principal, rate, time, interest;
    printf("enter the principal : ");
    scanf("%f", &principal);

    printf("enter the rate : ");
    scanf("%f", &rate);

    printf("enter the time : ");
    scanf("%f", &time);

interest = principal * rate * time / 100;
    printf("interest is %0.3f \n" ,interest);

//perimeter of circle
    printf("enter redius of circle : ");
    scanf("%f", &radius);

    printf("perimeter of circle : %f \n", 2 * 3.14  * radius);
    
    return 0;


}
