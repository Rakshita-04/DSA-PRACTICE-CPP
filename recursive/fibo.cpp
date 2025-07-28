#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)  return 0;
    if(n==1)  return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter no. of fibonacci terms";
    cin>>n;
    cout<<"Fibonacci series"<<n<<"terms:\n";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    return 0;
}