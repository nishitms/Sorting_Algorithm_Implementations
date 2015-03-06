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

void bubblesort(vector<int>& unsorted_array){
	//Swap two elements, Do it n times
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
void insertionsort(){
	
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

	return 0;
}