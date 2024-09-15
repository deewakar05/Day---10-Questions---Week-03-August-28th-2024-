#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string &str){
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(!isalnum(str[left])) left++;
        if(!isalnum(str[right])) right--;
        if(str[left]!=str[right]) return true;
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    cout<<bool(isPalindrome(str));
}