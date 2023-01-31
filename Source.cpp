#include <iostream>
using namespace std;

int* reverseLinkedList(int* list);

int* increaseDynamicArray(int* array, int &size);

int main() {
	int size = 0;
	int* list = new int[NULL];
	char user;
	do
	{
		increaseDynamicArray(list, size);
		cout << "\nEnter number: ";
		cin >> list[i];
		cout << "\nagain?";
		cin >> user;

	} while (user == 'y');

	return 0;
}

int* reverseLinkedList(int* list) {
	//a -> b -> c
	//c -> b -> a
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