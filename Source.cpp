#include <iostream>
#include <conio.h>
using namespace std;

int* reverseLinkedList(int* array, int size);

int* increaseDynamicArray(int* array, int &size);

int main() {
	int size = 0, iter = 0;
	int* list = new int[NULL];
	char user;
	do
	{
		list = increaseDynamicArray(list, size);
		cout << "\nEnter number: ";
		cin >> list[iter];
		cout << "\nagain?";
		cin >> user;
		iter++;

	} while (user == 'y');

	for (int i = 0; i < size; i++) {

		if (i == 0) {
			cout << endl << "List you entered is: ";
			cout << "\nList: {" << list[i];
		}
		else {
			cout << " ," << list[i];
		}
		if (i == (size - 1)) {
			cout << "}";
		}
	}

	list = reverseLinkedList(list, size);

	for (int i = 0; i < size; i++) {

		if (i == 0) {
			cout << endl << "Reversed List is: ";
			cout << "\nList: {" << list[i];
		}
		else {
			cout << " ," << list[i];
		}
		if (i == (size - 1)) {
			cout << "}";
		}
	}

	return 0;
}

int* reverseLinkedList(int* array, int size) {
	int* reverseArray = new int[size];

	for (int i = 0; i < size; i++) {
		reverseArray[(size - i) - 1] = array[i];
	}

	delete[] array;
	return reverseArray;
}

int* increaseDynamicArray(int* array, int& size) {
	int newSize = size + 1;
	int* newArray = new int[newSize];
	
	for (int i = 0; i < size; i++) {
		newArray[i] = array[i];
	}

	delete[] array;
	size = newSize;

	return newArray;
}