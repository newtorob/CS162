#include <iostream>
#include <algorithm>

using namespace std;

//function prototype
void quickSort(int [], int, int);
int partition(int [], int, int);

int main() {
	//array to be sorted
	const int SIZE = 10;
	int array[SIZE] = {17,53,9,2,30,1,82,64,26,5};

	//echo the array to be sorted
	for(int k = 0; k < SIZE; k++) 
		cout << array[k]<< " ";
	cout <<endl;

	//sort the array using quicksort
	quickSort(array, 0, SIZE-1);


	//print the sorted array
	for(int k =0; k<SIZE; k++)
		cout << array[k]<< " ";
	cout << endl;

	return 0;
}

void quickSort (int arr[], int start, int end) {
	if (start < end)
	{
		int p = partition(arr, start , end);

		quickSort(arr, start, p-1);

		quickSort(arr, p +  1, end);
	}
}

int partition(int arr[], int start, int end) 
{
	//the pivot element is taken to be the element at
	//the start of the subrange to be partitioned
	//
	int pivotValue = arr[start];
	int pivotPosition = start;


	for(int pos = start + 1; pos <= end; pos++) 
	{
		if (arr[pos] < pivotValue)
		{
			swap(arr[pivotPosition + 1], arr[pos]);

			swap(arr[pivotPosition], arr[pivotPosition + 1]);
			pivotPosition ++;
		}
	}
	return pivotPosition;
}
