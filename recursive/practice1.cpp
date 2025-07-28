#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    a=temp;
    a=b;
    b=temp;
    cout<<a<<b;
}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<y;
    return 0;
}
