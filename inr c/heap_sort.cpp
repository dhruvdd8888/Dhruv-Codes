#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int max = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2; 

	if (l < n && arr[l] > arr[max])
    {
		max = l;
    }
	if (r < n && arr[r] > arr[max])
    {
		max = r;
    }
	if (max != i) {
		swap(arr[i], arr[max]);
		heapify(arr, n, max);
	}
}
void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
    {
		heapify(arr, n, i);
    }
	for (int i = n - 1; i > 0; i--) 
    {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
int main()
{
	int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
	heapSort(arr, n);
    cout << endl<< "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
