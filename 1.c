#include<stdio.h>

// Write a c program to find rate of interest using simple function.
// (rate of interest formula I = prn/100).

void main (){
	interest();
}

void interest (){
	float p, r, n, i;
	
	printf("Enter of principle :- ");
	scanf("%f",&p);
	
	printf("Enter Number of Priod :- ");
	scanf("%f",&n);
	
	printf("Enter of Rate :- ");
	scanf("%f",&r);

	i = (p * r * n) / 100;
	
	printf("Simple Interest :- %.2f	",i);
}
