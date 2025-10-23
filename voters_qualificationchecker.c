/*
Name:kilobi omar
Reg:CT101/G/25986/25
Date:20/10/2025
Description: program to check voter eligibility
*/
#include<stdio.h>
int main(){
	// variable declaration
	int age;
	
	printf("Enter your age: \t");// \t(tab) 4 spaces
	scanf("%d", &age);
	
	if (age>=18){
		printf("you are eligible to vote");
	}else{
		printf(" You are note an eligible voter");
	}
	return 0;	
		
}		