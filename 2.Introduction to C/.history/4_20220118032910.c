#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,area,S;

printf("Enter the a b c of a triangle : ");
scanf("%f %f %f", &a, &b, &c);
S = (a+b+c)/2;

area = sqrt(S*(S-a)*(S-b)*(S-c));

printf("The Area of the triangle is %.f",area);



return 0;
}


















// #include <stdio.h>
// int main() {
//   float base, height, input, sum;

//   printf("Enter the base and height of the triangle : ");
//   scanf("%f %f", &base, &height);

//   sum = 0.5 * base * height;

//   printf("Area of the triangle is %.2f cm sq\n", sum);

//   return 0;
// }

