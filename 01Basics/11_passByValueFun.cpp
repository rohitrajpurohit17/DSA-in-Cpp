#include<iostream>
using namespace std;

// It's send Copy to function  means it not change the  value on num1 and num2 
// taken down from user

void swapFun(int num1, int num2){
    int temp = num1;
    num1 =num2;
    num2= temp;
 
    cout << num1 << " " << num2 << " In process"<<endl;
 }
 int main(){
     int num1,num2;
     cin >> num1;
     cin >>num2;
 
     cout << num1 << " " << num2 << " Before  value Doesn't change"<<endl;
 
     swapFun(num1,num2);
 
     cout << num1 << " " << num2 << " After value  change"<<endl;
 
 }