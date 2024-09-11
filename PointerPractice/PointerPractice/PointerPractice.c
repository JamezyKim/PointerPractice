#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b);
int arraySum(int* arr, int size);
void reverseString(char* str);
int findMax(int* arr, int size);

int main() {

	int a = 1;
	int b = 2;
	swap(&a, &b);

	//int arr[] = { 1,2,3,4 };
	int size = 4;
	//printf("The sum of the array is %d\n",arraySum(arr, size));

	char* str = "abcd";
	reverseString(str);

	int arr[] = { 2,7,5,9 };
	findMax(arr, size);

	return 0;
}

//Find the maximum element in an array using pointers:
int findMax(int* arr, int size) {

	int result = 0;
	int max = 0;
	
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("The maximum number of the array is %d\n", max);

	return result;
}

//Reverse a string using pointers:
void reverseString(char* str) {

	int newArrCounter = 0;
	char* result = (char*)malloc(sizeof(char));
	int length = strlen(str);
	int resultCounter = length;

	while (length != 0) {
		result[newArrCounter] = str[length - 1];
		newArrCounter++;
		length--;
	}

	for (int i = 0; i < resultCounter; i++) {
		printf("%c ", result[i]);
	}
	printf("\n");

	return;
}

//Find the sum of elements in an array using pointers:
int arraySum(int* arr, int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += arr[i];
	}

	return result;
}



//Swap two integers using pointers:
void swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("a = %d, b = %d\n",*a,*b);

	return 0;
}


