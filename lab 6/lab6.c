#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
* Programmer Name: Colden Jeanmonod
* Lab assignment: MAth Tables
* Due by: Oct 18th 2023
* Class: CIS 1057 section 004
*/

//Prototypoes of functions
char obtain_operator_input( void );
int obtain_user_integer_input( const char *prompt );

//Some global values
#define  LOWEST_VALUE = -20;
#define HIGHEST_VALUE = 20;

 void main(){
//Required variables
	int low_row, hi_row, low_col, hi_col;
	char operator, user_input;

	printf("Would you like to begin? Y, y or N, n \n");

	scanf("%c", &user_input);
/* This DO while loop will constantly be able to prunt out the specified operation
* In a neat and odrderly table by using if else statements to checl and see the operation that
* needs to be preformed. It will continuously run until the user inputs an N or n to say that they wish to stop.
*/
	do{
	low_row =obtain_user_integer_input("Enter low row number \n " );
	printf("%d", low_row);
	hi_row = obtain_user_integer_input("Enter a high row number \n "  );
	low_col = obtain_user_integer_input("Enter a low column number \n" );
	hi_col = obtain_user_integer_input("Enter a high column number \n");
	
	
	operator = obtain_operator_input( );
	
	printf("%c", operator);
	
	if(operator == '+'){
		for(int k = low_row; k<=hi_row; k++){
		if(k == low_row ){
			printf("%6d", k);
		}else if( k < hi_row ){
			printf("%6d", k);
		}else if (k == hi_row){
			printf("%6d \n", k);
		}
	
		}
		for(int i = low_row; i<=hi_row; i++){
			for(int j = low_col; j<=hi_col; j++){
				int add = i + j;
				if( j== low_col){
						
					printf("%d %6d",i ,  add);
					
				
				}else if( j < hi_col){
				
					printf("%6d", add);
				}else if( j == hi_col){
					
					printf("%6d \n",  add);
				}
			}
		}
	}else if(operator == 'X' || operator == 'x' || operator  == '*'){
		for(int k = low_row; k<= hi_row; k++){
			if(k == low_row){
				printf("%6d", k);
			}else if( k < hi_row){
				printf("%6d", k);
			}else if( k == hi_row){
				printf("%6d \n", k);
			}
		}
		for(int i = low_row; i<= hi_row; i++){
			for(int j = low_col; j<= hi_col; j++){
				if(j == low_col){
					printf("%d %6d",i, i*j);
				}else if( j < hi_col){
					printf("%6d", i * j);
				}else if( j == hi_col){
					printf("%6d \n", i * j);
				}
			}
		}
	}else if(operator == 'D' || operator == 'd'){
		for(int k = low_row; k <=hi_row; k++){
			if(k == low_row){
				printf("%6d", k);

			}else if( k < hi_col){

				printf("%6d", k);
			}else if(k == hi_row){
				printf("%6d \n", k);
			}
		}
		for( int i = low_row; i<= hi_row; i++){
			for( int j = low_col; j<= hi_col; j++){
				if(j == low_col){
					printf("%d %6d", i, j/i);
				}else if(j < hi_col){
					printf("%6d", j/i);
				}else if(j == hi_col){

					printf("%6d \n", j/i);
				}
		
			}
		}
	}else if( operator == 'p'  ){

		for(int w = low_row; w <=hi_row; w++){
			if(w == low_row){
				printf("%6d", w);
			}else if (w < hi_row){
				printf("%6d", w);
			}else if (w == hi_row){
				printf("%6d \n", w);
			}
		}
		for(int i = low_row; i<= hi_row; i++){
			for(int j = low_col; j<= hi_col; j++){
				int exn = pow(i, j);
				if(j == low_col){
					printf("%d %6d", i, exn);
				}else if(j < hi_col){
					printf("%6d", exn);
				}else if(j == hi_col){
					printf("%6d \n", exn);

				}
				
			
			}
		}

	
	}else if(operator == 'r'){
		for(int k = low_row; k <= hi_row; k++){
			if(k == low_row){
				printf("%6d", k);
			}else if(k < hi_row){
				printf("%6d", k);
			}else if( k == hi_row){
				printf("%6d \n", k);

			}
		}
		for(int i = low_row; i <= hi_row; i++){
			for(int j = low_col; j<= hi_col; j++){
				double root = (double)pow(j, pow( i, -1) );	
				if(j == low_col){
					printf("%d %6.2lf", i, root);
				}else if(j < hi_col){
					printf("%6.2lf", root);

				}else if(j == hi_col){
					printf("%6.2lf \n", root);
				}

	
			}
		}

	}else if (operator == '/') {
		for(int k = low_row; k<=hi_row; k++){
			if(k == low_row){
				printf("%6d", k);
			}else if (k < hi_col){
				printf("%6d",  k);
			}else if( k == hi_col){
				printf("%6d \n", k);
			}
		}
		for (int i = low_row; i<= hi_row; i++){
			for(int j = low_col; j<=hi_col; j++){
				double x = (double) i/j;
				if(j == low_col){
					printf("%d %6.2lf", i, x);
				}else if(j <hi_col){
					printf("%6.2lf", x);
				}else if(j == hi_col){
					printf("%6.2lf \n", x);
				}
				
				
			}
		}
	}else if( operator == '-'){
		for (int k = low_row; k<= hi_row; k++){
			if(k == low_row){
				printf("%6d", k);
			}else if(k < hi_row){
				printf("%6d", k);
			}else if (k == hi_row){
				printf("%6d \n", k);

			}
		}
		for(int i = low_row; i <= hi_row; i++){
			for(int j = low_col; j<= hi_col; j++){
				if(j == low_col){
					printf("%d %6d", i, i-j);
				}else if(j < hi_col){
					printf("%6d", i-j);
				}else if(j == hi_col){
					printf("%6d \n", i-j);
				}
			}	
		}

	}else if( operator == '%') {
		for (int k= low_row; k<=hi_row; k++){
			if(k == low_row){
				printf("%6d", k);
			}else if(k < hi_row){
				printf("%6d", k);
			}else if(k == hi_row){
				printf("%6d \n", k);
			}
		}

		for (int i = low_row; i<= hi_row; i++){
		 	for(int j = low_col; j <= hi_col; j++){
				if(j == low_col){
					printf("%d %6d",i, i%j);
				}else if(j < hi_col){
					printf("%6d", i%j);
				}else if(j == hi_col){
					printf("%6d \n", i%j);
				}
			}
		}
			
		

	}
	printf("Would you like to go again? y or Y for yes, n or N for no. \n");
	scanf(" %c", &user_input);	



	}while(user_input == 'Y' || user_input == 'y');

}


/*
* Function Name: obtain_user_integer_input
*Description: Guides the user to picking an integer within the ranges of -20 and 20.
* precondition: the prompt
* post condition: The value
* Globals:  the lowest value and the highest values
*/

int obtain_user_integer_input( const char *prompt ){
	int value;
	printf( prompt);
	scanf("%d", &value);
	
	while(value <=20 || value >=-20){	
	if(value <=20, value >=-20){
	return value;
	}else{
	puts("Hello please put in a valid number between -20 and 20 \n");
	printf("Please put a valid number \n");
	scanf("%d", &value);
	}	
	
	}
}




/*
* Function Name: obtain_operator_input
* Description: Guides the user to put in an operation so that they can use the whole function. If a nonvalid operand is inputted it prints Please put H for help, then when H is inputted they will be given a list of operations
* Precondition: none
* Postccondition: Oper, the operation
* Globals: none
*/ 


char  obtain_operator_input(){
	char oper;
	
	printf("Enter a valid operation \n");
	scanf("%c", &oper);
	
	while(oper != '+' && oper != '/' && oper != '*' && oper != 'X' && oper != 'p' && oper != '%' && oper != 'x' && oper != 'r' && oper != '-' && oper != 'D' && oper != 'd'   ){
		if(oper = 'h') {
		printf("Here is a list of available operations and a brief description of them \n");
		printf(" '+' is addition \n");
		printf(" '-' is subtraction \n");
		printf(" '*' is multiplication \n");
		printf(" 'X' is also multiplication \n");
		printf(" 'x' is also multiplication \n");
		printf(" 'd' and 'D' are division as an integer \n");
		printf(" '/' is division as a double \n");
		printf(" the percent sign  is modulus \n");
		printf(" 'p' raises the row value by the column power \n");
		printf(" 'r' column root of the row value. \n");
		printf("please put in a valid operator \n");
		scanf("%c", &oper);


		}else {
		printf("Please type h to see a list of available code \n");
		scanf("%c", &oper);
		}
	}
	


 }
