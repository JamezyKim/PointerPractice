#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void swap(int* a, int* b);
int arraySum(int* arr, int size);
void reverseString(char* str);
int findMax(int* arr, int size);
int countVowels(char* str);
int countOccurrences(char* str, char ch);
bool isPalindrome(char* str);
void concatenateStrings(char* dest, char* src);
void stringCopy(char* dest, char* src);

int main() {

	//char src[] = { "hello" };
	//char dest[] = { "world"};
	//concatenateStrings(dest,src);


	//char src[] = { "hello" };
	//char* dest = (char*)malloc(sizeof(char));
	//stringCopy(dest, src);

	//int n = 5;
	//int arr[] = { 4,7,9,6,1 };
	//sortByInsertion(arr,n);

	int a = 1;
	int b = 2;
	swap(&a, &b);

	//int arr[] = { 1,2,3,4 };
	//int size = 4;
	//printf("The sum of the array is %d\n",arraySum(arr, size));

	char* str = "abcd";
	reverseString(str);


	int arr[] = { 2,7,9,5 };
	int size = 4;
	printf("The maximum number is %d",findMax(arr, size));

	//char str[] = { "heellooo" };
	//printf("The number of the vowel in the array is %d", countVowels(str));


	//char str[] = "hello";
	//char ch = 'l';
	//printf("\nThe result is %d",countOccurrences(str, ch));

	//char str[] = { "abba" };
	//printf("\n%d",isPalindrome(str));

	//printf("\nThe length of the string is %d", stringLength(str));

	return 0;
}

//Find the maximum element in an array using pointers:
int findMax(int* arr, int size) {

	int counter = 0;
	int max = *arr;
	while (counter < size) {
		if (max < *(arr + 1)) {
			max = *(arr + 1);
			arr = arr + 1;
		}
		counter++;
	}

	return max;
}

//Reverse a string using pointers:
void reverseString(char* str) {
	int counter = 0;
	int strCounter = 0;
	int finalCount = 0;
	int length = strlen(str) ;
	char* result = (char*)malloc(length+1*sizeof(char));


	char* arrContain = result;

	for (int i = length - 1; i >= 0; i--) {
		*arrContain = str[i];
		arrContain++;
	}

	*arrContain = '\0';


	printf("%s\n", result);

	free(result);

	return;
}

int arraySum(int* arr, int size) {

	int arrContain = *arr;
	int counter = 1;
	int result = arrContain;
	while (counter < size) {
		result +=  ++ arrContain;
		++counter;
	}
	

	return result;
}

void swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("a = %d, b = %d\n", *a, *b);

	return 0;
}
