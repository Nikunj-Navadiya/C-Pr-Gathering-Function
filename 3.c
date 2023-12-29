#include<stdio.h>

// Write a c program to find number is palindrome and not palindrome using return with no parameter function.

void main (){
	int ans;
	ans = palidrome( );
	if(ans==0){
		printf("Palindrome Number");
	}else{
		printf("Not Palindrome Number");
	}
}
int palidrome (){
	int no,r,rev=0,a;
	printf("Enter Number :- ");
	scanf("%d",&no);
	a=no;
	
	while(no>0){
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(rev==a){
		return 0;
	}else{
		return 1;
	}
	
}
