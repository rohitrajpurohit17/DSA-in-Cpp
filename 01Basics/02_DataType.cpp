#include<iostream>
using namespace std;

int main(){
    int a;       // Used for storing integers (typically 4 bytes)
    long b;      // Used for storing larger integers (typically 4 or 8 bytes)
    long long c; // Used for storing very large integers (typically 8 bytes)
    float d;     // Used for storing floating-point numbers (typically 4 bytes)
    double e;    // Used for storing double-precision floating-point numbers (typically 8 bytes)

    char A;      // Used for storing single characters (typically 1 byte)
    bool B;      // Used for storing true/false values (typically 1 byte)
    string C;    // Used for storing a sequence of characters (size depends on content)

    // Here in this it just give first word not whole statement 
    // Input :- my name is ROhit
    // Output :- my
    cout<<"Firts :";
    string intro1;
    cin >> intro1;
    cout << intro1<<endl;

    // cin.ignore();
    // To solve this we use getline() internal function
    // Input :- my name is ROhit
    // Output :- my name is ROhit
    cout << "Second";
    string intro2;
    getline(cin,intro2);
    cout << intro2;
    
    return 0;    // Indicates successful program execution to the operating system
}
