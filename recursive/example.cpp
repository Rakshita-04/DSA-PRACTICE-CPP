#include<iostream>
using namespace std;
int a=10;
char x='p';
void display(){
    printf("%d",a);
    printf("%c",x);
    int x='q';
    printf("%c",x);
}
int main(){
    int a=20;
    printf("%d",a);
    display();
    return 0;
}
