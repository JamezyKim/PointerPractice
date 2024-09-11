#include <stdio.h>

void swap(int* a, int* b);
int arraySum(int* arr, int size);
void reverseString(char* str);

int main() {

	int a = 1;
	int b = 2;
	swap(&a, &b);

	int arr[] = { 1,2,3,4 };
	int size = 4;
	printf("The sum of the array is %d",arraySum(arr, size));

	char str[] = "abcd";
	reverseString(str);



	return 0;
}

//Swap two integers using pointers:
void swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("a = %d, b = %d\n",*a,*b);

	return 0;
}


//Find the sum of elements in an array using pointers:
int arraySum(int* arr, int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += arr[i];
	}

	return result;
}

//Reverse a string using pointers:
void reverseString(char* str) {

	int newArrCounter = 0;
	int counter = 0;
	char* result = (char*)malloc(sizeof(char));

	while (str[counter] != '\0') {
		counter++;
	}
	int resultCounter = counter;
	while (counter != 0) {
		result[newArrCounter] = str[counter - 1];
		newArrCounter++;
		counter--;
	}

	for (int i = 0; i < resultCounter; i++) {
		printf("%c ", result[i]);
	}

	return;
}