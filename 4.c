#include<stdio.h>

// Write a c program to find even and odd using return with parameter function.

void main(){
	int no,ans;
	
	printf("Enter Number :- ");
	scanf("%d",&no);
	
	if(no % 2 == 0){
		printf("This is Even Number");
	}else{
		printf("This is Odd Number");
	}
}

int number(int no){
	
	if(no == 0){
		return 0;
	}else{
		return 1;
	}
	
}
