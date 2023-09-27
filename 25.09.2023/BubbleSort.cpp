#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter a array element"<<endl;
	for(int i=0;i<n;i++){
	
		cin>>arr[i];
	}
	
	cout<<"Array Before Sorting"<<endl;
	
	for(int i=0;i<n;i++){
	 cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Array After Sorting"<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i-1;j++){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
	 cout<<arr[i]<<" ";
	}
	
	
	
	
	return 0;
	
}
