#include <stdio.h>
int main()
{
short int aa;
int a;
unsigned short int ab;
long int bb;
float b;
double c;
char d;
unsigned char de;
signed char ef;

printf("%lld",sizeof(short int));
printf("%lld", sizeof(int));
printf("%lld", sizeof(unsigned short int));
printf("%lld", sizeof(long int));
printf("%lld", sizeof(float));
printf("%lld", sizeof(double));
printf("%lld", sizeof(unsigned char));
printf("%lld", sizeof(char));
printf("%llu", sizeof(signed char));

return 0;
}