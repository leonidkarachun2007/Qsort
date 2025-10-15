#include <iostream>
#include <time.h>
using namespace std;

void quickSortR(int a[], int B, int E)
{

	long i = B, j = E;
	int temp, p;
	p = a[(B + E) / 2];
	do {
		while (a[i] > p) i++;
		while (a[j] < p) j--;
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (B < j)quickSortR(a, B, j);
	if (i < E)quickSortR(a, i, E);
}

void main() {
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];

	// до сортировки
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 20;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	quickSortR(ar, 0, SIZE - 1);

	// после сортировки
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
}

