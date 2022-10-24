#include <iostream>
using namespace std;

void ShowArray(int* arr, const int SIZE);
void CopyArray(int* arrFrom, int* arrTo, const int SIZE);
void ReverseArray(int arr[], const int SIZE);

int main()
{
	const int SIZE = 6;

	int arrOne[SIZE]{ 6, 1, -5, 12, 1, 10 };
	int arrTwo[SIZE]{ 2, 1, 9, -3, 8, 4 };

	cout << "Copy + Reverse Array:\n";

	ShowArray(arrOne, SIZE);
	cout << "\n";
	ShowArray(arrTwo, SIZE);

	CopyArray(arrOne, arrTwo, SIZE);
	ReverseArray(arrTwo, SIZE);

	cout << "==================================\n";

	ShowArray(arrOne, SIZE);
	cout << "\n";
	ShowArray(arrTwo, SIZE);
}

void ShowArray(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << "\n";
}

void CopyArray(int* arrFrom, int* arrTo, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		*(arrTo + i) = *(arrFrom + i);
	}
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