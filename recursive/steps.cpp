#include<iostream>
using namespace std;
void printstep(int x,int y,int k){
    if(x>y){
        return;
    }
    cout<<x<<" ";
    printstep(x+k,y,k);
}
int main(){
    int x,y,k;
    cout<<"Enter number(x):";
    cin>>x;
    cout<<"Enter number(y):";
    cin>>y;
    cout<<"Enter steps k:";
    cin>>k;
    printstep(x,y,k);
    return 0;
}