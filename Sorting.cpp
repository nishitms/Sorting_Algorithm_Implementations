#include<iostream>
#include<vector>
#include<assert.h>

using namespace std;

void swap (int& a, int& b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void bubblesort(vector<int> unsorted_array){ // Changed the value for other sorts, so pass by value, not reference
	//Swap two elements, Do it n times
	//Yet to reduce time using the property ***

	for(int i=0;i< unsorted_array.size() - 1;i++){
		for(int j=0; j<unsorted_array.size()-1;j++){
			if(unsorted_array[j] > unsorted_array[j+1])			//Increasing Order Swap
				swap(unsorted_array[j],unsorted_array[j+1]);
		}
		
	}
	cout<<"\n Bubble Sort - Sorted Array \n";

	for(auto j=unsorted_array.begin();j<unsorted_array.end();j++)
		cout<<" "<<*j;

}
void selectionsort(){
	
}
void insertionsort(vector<int> unsorted_array){
	// Try in plavce after this
	vector<int> sorted_array;

	sorted_array.push_back(unsorted_array[0]); // First Element will be sorted, coz it's the only element

	for (int i = 1; i < unsorted_array.size(); i++)
	{
		sorted_array.push_back(unsorted_array[i]);
		for (int j =sorted_array.size() - 1 ; j>0 ; j--)
		{
			if(sorted_array[j]<sorted_array[j-1])
				swap(sorted_array[j],sorted_array[j-1]);
		}
	}
	cout<<"\n Insertion Sort - Sorted Array \n";

	for(auto j=sorted_array.begin();j<sorted_array.end();j++)
		cout<<" "<<*j;

	//Copy all elements to original array

}
void mergesort(){
	
}
void quicksort(){
	
}

int main(){
	
	int size_of_array;
	cout<<"\n Enter the size of Array :";
	cin>>size_of_array;
	
	assert(size_of_array>0);
	
	vector<int> unsorted_array;

	int temp;

	for(int i=0;i<size_of_array;i++){
		temp = rand() % size_of_array;					//random int;
		unsorted_array.push_back(temp);
	}

	cout<<"\n UnSorted Array \n";
	
	for(auto j=unsorted_array.begin();j<unsorted_array.end();j++)
		cout<<" "<<*j;

	bubblesort(unsorted_array);
	cout<<"\n";

	insertionsort(unsorted_array);
	cout<<"\n";

	return 0;
}