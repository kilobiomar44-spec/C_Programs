/*
Name:kilobi Omar
Reg no:CT101/G/25986/25
Date:20/10/2025
Description:program to checks if a person qualifies for a loan.
*/
#include<stdio.h>

int main() {
	
	int age;
	float annualincome;
	
	printf("enter your age \n");
	scanf("%d", &age);
	
	printf("\n Enter your annual income  ksh.");
	scanf("%f", &annualincome);
	
	if (age >=21 && annualincome >=21000){
		printf("Congratulation you qualify for a loan");
	} else {
		printf("Unfortunately we are unable to offer you a loan at this time");
	}		
	
	
		return 0;
}	