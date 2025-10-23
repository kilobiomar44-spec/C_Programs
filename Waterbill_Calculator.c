/*
Name :KILOBI OMAR
Reg : CT101\G\25986\25
Date :20\10\2025
Description : PROGRAM THAT HELPS CALCULATE USERS WATER BILL
*/

# include<stdio.h>

int main(){
	int units;
	float bill;
	
	printf(" WATER BILL CALCULATOR \n");
	printf("-----------------------\n");
	 
	printf("Enter Water units consumed \t");
	scanf("%d", &units);
	
	if (units <30){
		bill = units * 20;
	}
	else if (units >= 31 && units <= 60){
		bill = units * 25;
	}
	else {
	     bill = units * 30;			
	}
	
	
	printf("The total Water bill is :Ksh.%f", bill);
	
	
	return 0;
	
}	
