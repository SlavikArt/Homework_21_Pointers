#include <iostream>
using namespace std;

void ShowArray(int arr[], const int SIZE);
void ReverseArray(int arr[], const int SIZE);

int main()
{
	const int SIZE_1 = 5;
	const int SIZE_2 = 6;

	int arrOne[SIZE_1]{ 0, 3, 52, 12, 54 };
	int arrTwo[SIZE_2]{ 7, 321, 2, 8, 11, 56 };

	cout << "Reverse Array:\n";

	ShowArray(arrOne, SIZE_1);
	cout << "\n";
	ShowArray(arrTwo, SIZE_2);

	ReverseArray(arrOne, SIZE_1);
	ReverseArray(arrTwo, SIZE_2);

	cout << "==========================================\n";

	ShowArray(arrOne, SIZE_1);
	cout << "\n";
	ShowArray(arrTwo, SIZE_2);
}

void ShowArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << "\n";
}

void ReverseArray(int arr[], const int SIZE)
{
	int* ptrStart = arr;
	int* ptrEnd = arr + SIZE - 1;

	while (ptrStart < ptrEnd) {
		int temp = *ptrStart;
		*ptrStart = *ptrEnd;
		*ptrEnd = temp;

		ptrStart++;
		ptrEnd--;
	}
}