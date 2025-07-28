#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n << " elements:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
    for(int i=0;i<n-1;i++){
        int minimum=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<minimum){
                minimum=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    cout << "Sorted array is:";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}