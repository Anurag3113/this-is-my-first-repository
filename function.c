#include<stdio.h>
int square(int);
int cube(int);
int add_square_cube(int);
int subtract_square_cube(int);
int multiply_square_cube(int);
int divide_sqaure_cube(int);
void main()
{
int n;
printf("\nEnter the number");
scanf("%d",&n);

printf("\nThe square of the given no is %d",square(n));

printf("\nThe cube of the given no is %d",cube(n));

printf("\nThe addition of the square and cube of given no is %d",add_square_cube(n));

printf("\nThe subtraction of the square and cube of the given no is %d",subtract_square_cube(n));

printf("\nThe multiplication of the square and cube of the given no is %d",multiply_square_cube(n));

printf("\nThe division of the square and cube of the given no is %d",divide_sqaure_cube(n));
}
int square(num)
{
int sqr;
sqr=num*num;
return(sqr);
}
int cube(num)
{
int cub;
cub=num*num*num;
return(cub);
}
int add_square_cube(num)
{
int add;
add=square(num)+cube(num);
return(add);
}
int subtract_square_cube(num)
{
int sub;
sub=square(num)-cube(num);
return(sub);
}
int multiply_square_cube(num)
{
int mul;
mul=square(num)*cube(num);
return(mul);
}
int divide_sqaure_cube(num)
{
int div;
div=square(num)%cube(num);
return(div);
}
