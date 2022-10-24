#include <iostream>
using namespace std;

void ShowArray(int* arr, const int SIZE);
void CopyArray(int* arrFrom, int* arrTo, const int SIZE);

int main()
{
	const int SIZE = 5;

	int arrOne[SIZE] { 0, 3, 52, 12, 54 };
	int arrTwo[SIZE] { 1, 53, 3, 74, 10 };

	cout << "Copy Array:\n";

	ShowArray(arrOne, SIZE);
	cout << "\n";
	ShowArray(arrTwo, SIZE);

	CopyArray(arrOne, arrTwo, SIZE);

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