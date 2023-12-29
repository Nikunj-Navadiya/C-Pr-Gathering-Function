#include<stdio.h>

// Write a c program to find to find circle area using no return with parameter function.

void main (){
	circle(2);
	circle(3);
	circle(4);
}

void circle (int r){
	float ans = 3.14 * r * r;
	printf("Ans = %.2f\n",ans);
}
