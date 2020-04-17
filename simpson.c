// C program for simpson's 1/3 rule 
#include <stdio.h> 
#include<conio.h>
#include <math.h> 

// Function to calculate f(x) 
#define func(x) ((4*x)-(3*x*x))

// Function for approximate integral 
float simpsons_(float ll, float ul, int n) 
{  int i=0;
	// Calculating the value of h 
	float h = (ul - ll) / n; 

	// Array for storing value of x and f(x) 
	float x[10], fx[10]; 

	// Calculating values of x and f(x) 
	for ( i = 0; i <= n; i++) { 
		x[i] = ll + i * h; 
		fx[i] = func(x[i]); 
	} 

	// Calculating result 
	float res = 0; 
	i=0;
	for ( i = 0; i <= n; i++) { 
		if (i == 0 || i == n) 
			res += fx[i]; 
		else if (i % 2 != 0) 
			res += 4 * fx[i]; 
		else
			res += 2 * fx[i]; 
	} 
	res = res * (h / 3); 
	return res; 
} 

// Driver program 
int main() 
{ 
	float lower_limit ; // Lower limit 
	float upper_limit ; // Upper limit 
	int n ; // Number of interval 
	printf("Enter lower limit ,  upper limit , no. of intervals : ");
	scanf("%f%f%d",&lower_limit,&upper_limit,&n);
	printf("\n Result is : %f",simpsons_(lower_limit, upper_limit, n)); 
	getch();
	return 0; 
} 

