/*
Ques-1. What is the difference between in-place and out-place sorting algorithms?
Ans-1.
  In-place algorithms
a. An in-place algorithm transforms the input without using any extra memory.
No addition space is required for this algorithm.

b. A small amount of extra memory is required for its
operation.The amount of memory must not be dependent
on the input size and should be constant.

c. In-place algorithms are usually used in an embedded system that runs in
limited memory. They reduce the space requirements and hence increase the time complexity also.

d. Their is high confusion in Calling a recursive algorithm as in-place extra space
is being used by the call stack. So, the algorithms requiring only O(log(n)) additional space is
considered to be in-place.

e. Some examples are insertion sort, selection sort, quick sort, bubble sort, heap sort, etc. All these
algorithms require a constant amount of extra space for rearranging the
elements in the input array.

Out-of-place algorithms

a. An algorithm that is not in-place is called a not-in-place or out-of-place
algorithm. Unlike an in-place algorithm, the extra space used by an out-ofplace algorithm depends on the input size.

b. The standard merge sort algorithm is an example of out-of-place algorithm as
it requires O(n) extra space for merging.
*/

//Ques 2:- Implement Insertion sort in both (in-place and out-place) manner.
//Ans:-

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

