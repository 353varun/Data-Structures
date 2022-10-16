#include <iostream>
using namespace std;

//function for searching
// x=element to be searched
//int arr[]=input array to be ssearched
int search(int arr[],int x){
    int prev=0;
    int next=1;
    while(arr[next]<x){

    
    if(arr[next]==x){
        return next;
    }
    if(arr[next]<x){
        
        prev=next;
        next=next+2;
        
    }

    }
    if(arr[(prev+next)/2]==x){
            cout<<"index of element: ";
            return (prev+next)/2;
        }
        else{
            return -1;
            cout<<"<element not found";
            
        }
        

}


// taking array input and getting output vai calling function
// array made dynamically to avoid runtime issues
int main(){
    int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
    int val;
		cin >> val;
        cout << search(input, val) << endl;

        delete [] input;
}