#include<iostream>
//#include<stdlib.h>
using namespace std;

void printArray(int arr[], int size);
void SelectionSort(int arr[], int x);
void swap(int* sp, int* tp);
int comparator(const void* p, const void* q);

int main()
{

	return 0;
}
void swap(int* sp, int* tp)
{
	int temp = *sp;
	*sp = *tp;
	*tp = temp;
}
void SelectionSort(int arr[], int x)
{
	int a, b, Min_Index;
	for (a = 0; a < x - 1; a++)
	{
		Min_Index = a;
		for (b = a + 1; b < x; b++)
			if (arr[b] < arr[Min_Index])
				Min_Index = b;
		swap(&arr[Min_Index], &arr[a]);
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int comparator(const void* p, const void* q)
{
	int l = *(const int*)p;
	int r = *(const int*)q;
	if ((l & l) && (r & r))
		return (r - l);
	if (!(l & l))
		return 1;
	return 1;
}