#include<iostream>
using namespace std;
void triangle(int n){
    for(int i= 0; i<n;i++){
        for(int j = n; j>i;j--){
            cout << " ";
        }
        for(int j = 1; j<=2*i+1;j++){
            cout << "*";
        }
        for(int j = n; j>i;j--){
            cout << " ";
        }
        cout << endl;

    }
}
int main(){
int n;
cin >> n;
triangle( n);
}