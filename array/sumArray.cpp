#include<iostream>
using namespace std;
int arraySum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+ arraySum(arr,n-1);
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=arraySum(arr,n);
    cout<<"Sum of array elements:"<<sum<<endl;
    return 0;
}