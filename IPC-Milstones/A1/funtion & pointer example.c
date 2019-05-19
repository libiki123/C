#include <stdio.h>

double calArea(double, int);

int main(void)
{
	double PI = 3.141;
	int radius = 1;
	double result = calArea(PI, radius);

	printf("%.2lf\n", result);

	return 0;
}


double calArea(double PI, int radius)
{

	return PI * radius * radius;

}


or

double calArea(double PI, int radius)
{

	double res = PI * radius * radius;


	return res;
}




pointer: (represen the vlaue of a type of variable, all of int, all of double, all of float.......)

int rad = 3
printf("value of rad = %d\n", rad);
printf("address of rad = %p\n", &rad);
(%p to show the hexadecimal no)

set pointer:

int *ptr = &rad;
printf("address of ptr(rad) = %p\n", ptr);
printf("address of ptr = %p\n", &ptr);
printf("value of ptr(rad) = %d\n", *ptr); = 3

*ptr = 99;
printf("value of ptr(rad) = %d\n", *ptr); = 99
printf("value of rad = %d\n", rad); = 99


// using pointer for funtion

int rad = 3;
double pi = 3.143;

int *radPtr = &rad;
double *piPtr = &pi;

double result = calArea(radPtr, piPtr);
printf("the area is: %.2lf\n", result);

return 0;
}

double calArea(int *radPtr, double *piPtr) 
{
	double res = (*piPtr) * (*radPtr) * (*radPtr)
	*radPtr = 77; // if you want change the radius

	return res
}