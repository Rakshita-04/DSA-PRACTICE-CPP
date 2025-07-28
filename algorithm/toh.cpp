#include<iostream>
using namespace std;
void toh(int n,char a, char b, char c){
    if(n==1){
        cout<<"Move disk from "<< a <<" to "<< c <<endl;
        return;
    }
    toh(n-1,a,c,b);
    cout<<"Move disk "<< n <<" from " << a <<" to "<< b <<endl;
    toh(n-1,c,b,a);
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    char a='A',b='B',c='C';
    toh(n,a,b,c);
    return 0;
}