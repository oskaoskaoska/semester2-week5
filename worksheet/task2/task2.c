/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Oscar Allison
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int i; //loop counter
	int value; //stores decimal of current hex
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex); //reads hex array

	for(i = 0; i < strlen(hex); i++){ //goes through each character in string
		
		//if character is between 0 and 9
		if(hex[i] >= '0' && hex[i] <= '9'){
			value = hex[i] - '0'; //turn character into number 
		}

		//if the character is A to F
		else if(hex[i] >= 'A' && hex[i] <= 'F'){
			value = hex[i] - 'A' + 10; //A=10, B=10 etc u know
		}

		//now for if a to f
		else if(hex[i] >= 'a' && hex[i] <= 'f'){
			value = hex[i] - 'a' + 10;
		}

	    // if input contains invalid hex digit
		else{
			printf("Error: Invalid Hexadecimal\n");
			return 0; //stops
		}

		//move to left then add new value
		decimal = decimal * 16 + value;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}