#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;
    if(age >= 18 && age <= 100){
        cout << "You're an Adult";
    }else if(age < 18){
        cout << "You're Not an Adult";
    }else{
        cout<< "Wrong Input";
    }
}