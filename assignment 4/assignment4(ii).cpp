//out place
//function for outplace insertion sort


void insertion_sort(int arr[],int si,int ei){
    //si=starting index
    //ei=ending index
    if(si==ei){
        return;
        }
    int j=si+1;
    int temp=arr[j];
    while(si>=0){
        if(arr[si]>temp){
            arr[si+1]=arr[si];
            si--;
        }
        if(si==-1){
            arr[0]=temp;
            break;
            }
        if(arr[si]<=temp){
            arr[si+1]=temp;
            break;
            }
    }
    insertion_sort(arr,si+1,ei);
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
        

        cout<<"result for outplace insertion sort"<<endl;
		insertion_sort(input,0,size-1);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	

	return 0;
}
/*
Ques-3. Suggest some practical examples of using in-place and out-place techniques.
Ans-3 

In-place techniques- 
a. Bubble sort is an example of in-place sorting technique. It usually
also excludes the space used for stack in recursive algorithms. 
b. Quick sort, uses only some constant number of variables for partitioning purpose. So, is in-place algorithm.


Out-place techniques-
In merge sort, merge function requires extra linear space which is not
constant. So, it is not in-place. Hence, it is called 'out of place' algorithm. Among the
comparison based techniques discussed, only Insertion Sort qualifies for this because of the
underlying algorithm it uses i.e. it processes the array from left to right
and if new elements are added to the right, it doesn’t impact the ongoing operation.
*/



