#include<iostream>
using namespace std;
void printInOrder(int n){
    if(n==0){
        return;
    }
    printInOrder(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    printInOrder(n);
    return 0;
}
