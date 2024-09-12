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

	int arr[] = { 1,2,3,4 };
	int size = 4;
	printf("The sum of the array is %d\n",arraySum(arr, size));

	//char* str = "abcd";
	//reverseString(str);

	//int arr[] = { 2,7,5,9 };
	//findMax(arr, size);

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
