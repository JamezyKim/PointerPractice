#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void swap(int* a, int* b);
int arraySum(int* arr, int size);
void reverseString(char* str);
int findMax(int* arr, int size);
int countVowels(char* str);
void concatenateStrings(char* dest, const char* src);
int countOccurrences(char* str, char ch);
bool isPalindrome(char* str);


int main() {

	int a = 1;
	int b = 2;
	swap(&a, &b);

	//int arr[] = { 1,2,3,4 };
	int size = 4;
	//printf("The sum of the array is %d\n",arraySum(arr, size));

	//char* str = "abcd";
	//reverseString(str);

	int arr[] = { 2,7,5,9 };
	findMax(arr, size);

	//char str[] = { "heellooo" };
	//printf("The number of the vowel in the array is %d", countVowels(str));

	char dest[] = { "hello" };
	char src[] = { "world" };
	concatenateStrings(dest, src);

	//char str[] = "hello";
	//char ch = 'l';
	//printf("\nThe result is %d",countOccurrences(str, ch));

	char str[] = { "abba" };
	printf("\n%d",isPalindrome(str));

	return 0;
}

//Check if a string is a palindrome using pointers:
bool isPalindrome(char* str) {
	int length = strlen(str);
	int counter = 0;
	int right = length - 1;
	int left = 0;

	for (int i = 0; i < length; i++) {
		while (left < right) {
			if (str[left] != str[right]) {
				return false;
				break;
			}
			left++;
			right--;
		}
	}
	return true;
}

//Count the occurrences of a character in a string using pointers:
int countOccurrences(char* str, char ch) {
	int result = 0;
	int counter = 0;
	while (str[counter] != '\0') {
		if (str[counter] == ch) {
			result++;
		}
		counter++;
	}

	return result;
}

//Concatenate two strings using pointers:
void concatenateStrings(char* dest, const char* src) {
	int desCounter = 0;
	int srcCounter = 0;
	int counter = 0;
	char* result = (char*)malloc(sizeof(char));
	while (dest[desCounter] != '\0') {
		result[counter] = dest[desCounter];
		desCounter++;
		counter++;
	}
	while (src[srcCounter] != '\0') {
		result[counter] = src[srcCounter];
		srcCounter++;
		counter++;
	}
	int printCounter = 0;
	printf("\n");
	while (result[printCounter] != '\0') {
		printf("%c", result[printCounter]);
		printCounter++;
	}
	return;
}

//Count the number of vowels in a string using pointers:
int countVowels(char* str) {
	int result = 0;
	int length = strlen(str);
	int counter = 0;
	char vowelArr[] = { 'a','e','i','o','u' };

	while (counter < length) {
		for (int i = 0; i < 5; i++) {
			if (str[counter] == vowelArr[i]) {
				result++;
				break;
			}
		}
		counter++;
	}


	return result;
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


