
/***********************************************************************************
Exercise File for BlackHoodie Virtual 2020
************************************************************************************/


#include<stdio.h>
#include<string.h>


/* EXERCISE1 Hello World */
void print_hello() {
	printf("Hello World!\n");
}


/* EXERCISE2 Look at a very simple addition, multiplication and division */
void simple_arithmetic() {
	int a, b;

	a = 10;
	b = 140;

	printf("Addition: %d\n", a+b);
	printf("Multiplication: %d\n", a*b);
	printf("Division: %f\n", b/a);
}


/* EXERCISE3 simple display of the most common control structures, if/else, loop, switch */
int control_structures() {
	char* mystring = "SUCH_STRING_MUCH_WOW";
	int count_uscore = 0;
	int i;

	if (strlen(mystring) < 15) {
		return 0;
	}

	for (i = 0; i < strlen(mystring); i++) {
		if (mystring[i] == '_') {
			count_uscore++;
		}
	}
	
	switch (count_uscore) {
		case 0: 
			printf("Boring\n");
			break;
		case 1:
			printf("Found 1...\n");
			break;
		case 2:
			printf("Found 2 ^^\n");
			break;
		case 3:
			printf("Found 3 :)\n");
			break;
		case 4:
			printf("Found 4 \\m/\n");
			break;
		case 5:
			printf("Found 5 0.o\n");
			break;
		default:
			return 0;
	}
	
	return 1;
}


/* EXERCISE4 Two functions, one called by the other, simple arithmetic and argument handling */
int function_calls2(int a, int b, int c) {
	c = c - (a+b);
	return c;
}

int function_calls1(int a, int b) {
	int c;
	a = a + 20;
	c = function_calls2(b, a, 110);
	return c;
}


/* EXERCISE5 Function with lots of parameters to show a big stack frame*/
void big_call_stack(int a, int b, int c, int d, int e, int f) {
    printf("%d %d %d %d %d %d \n", a, b, c, d, e, f);
}


/* Main function, printing Hello World!, because, what else... */
void main(void) {

	/* calling our exercise functions, otherwise compiler will eliminate */
	print_hello();
	simple_arithmetic();
	control_structures();
	function_calls1(5, 15);
	big_call_stack(1, 2, 3, 4, 5, 6);
}