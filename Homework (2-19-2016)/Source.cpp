#include <stdio.h>
#include <stdlib.h>

int main(){
	//1. Product of two numbers without "*"
	int first_num, second_num, result = 0;
	printf("Give me the first and second number for the product: ");
	scanf_s("%i %i", &first_num, &second_num, 1);
	while (second_num != 0){
		result += first_num;
		second_num--;
	}
	printf("%i\n", result);

	//2. Smallest value of 10 integers
	int n[10];
	printf("Give me 10 integers: ");
	scanf_s("%i %i %i %i %i %i %i %i %i %i", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8], &n[9], 1);
	int i = 0, a = n[i];
	for (int j = 0; i <= 9; j++){
		if (n[j] <= a){
			a = n[j];
		}
		i++;
		
	}
	printf("\n%i", a);

	//3. Calculator
	int integer; char abc = ' ';
	printf("Give me an integer: ");
	scanf_s(" %i", &integer, 1);
	while (abc != 'd'){
		printf("\na.\tIncrement\nb.\tDecrement\nc\tPower of two\nd.\tQuit\nChoose: ");
		scanf_s(" %c", &abc, 1);
		switch (abc)
		{
		case 'a':
			integer++;
			printf("\n%i", integer);
			break;
		case 'b':
			integer--;
			printf("\n%i", integer);
			break;
		case 'c':
			integer *= integer;
			printf("\n%i", integer);
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}