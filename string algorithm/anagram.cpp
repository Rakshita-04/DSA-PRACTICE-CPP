#include<iostream>
#include<cstring>
using namespace std;
bool isAnagram(string str1, string str2){
    int i;
    int count[256]={0};
    if(str1.length()!=str2.length()){
        return false;
    }
    for(i=0;i<str1.length();i++){
        count[str1[i]++];
    }
    for(i=0;i<str2.length();i++){
        count[str2[i]--];
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
        return true;
    }
}
int main(){
    string str1,str2;
    cout<<"Enter first string : ";
    cin>>str1;
    cout<<"Enter second string : ";
    cin>>str2;
    if (isAnagram(str1,str2)){
        cout<<"The strings are Anagrams :\n";
    }
    else{
        cout<<"The strings are not Anagrams :\n";
    }
    return 0;
}