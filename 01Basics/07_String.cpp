#include<iostream>
using namespace std;

int main(){
    string str = "striver";
    int len = str.size();
    str[len-1]= 'z';
    cout << str<<endl;
    cout << str[len-1] << endl;
    cout << str[0]; 
    return 0;
}