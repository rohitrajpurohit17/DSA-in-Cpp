#include<iostream>
using namespace std;

// void function with parameter
void printName(string name){
    cout << "Hello! " << name << endl;
}

// int parameterised function
int sumNum(int num1, int num2){
    int res = num1 + num2;
    return res; 
}

int main(){
    string name;
    cout << "Enter Name : ";
    cin >> name;
    printName(name);

    int num1,num2;
    cout << "Enter two Numbers : ";
    cin >> num1;
    cin >> num2;
    // cout << max(num1,num2); to give maximum it is an inbuild function
    int sum = sumNum(num1,num2);
    cout << sum;
}