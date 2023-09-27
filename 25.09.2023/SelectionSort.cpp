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
	
	for(int i=0;i<n;i++){
		int mini=arr[i];
		int index=0;
		for(int j=i;j<n;j++){
			if(arr[index]>arr[j]){
				mini=min(arr[j],mini);
				index=j;
			}
		}
		swap(arr[i],arr[index]);
	}
	cout<<"Array After Sorting"<<endl;
	
	for(int i=0;i<n;i++){
	 cout<<arr[i]<<" ";
	}
	return 0;
	
}
