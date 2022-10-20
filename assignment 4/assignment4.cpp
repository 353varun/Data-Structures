//question 2:- Implement Insertion sort in both (in-place and out-place) manner.
//answer:-

//inplace
#include<iostream>
using namespace std;
//function for inplace insertion sort


void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		int current = arr[i];
		int j;
		for(j = i - 1; j >= 0; j--) {
			if(current < arr[j]) {
				arr[j+1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j+1] = current;
	}

}



//main function for taking array input created dynamically and
//performing insertion sort


int main()
{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
        cout<<"result for inplace insertion sort"<<endl;
		insertionSort(input, size);

        
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	

	return 0;
}

