#include<iostream>
using namespace std;

void basicpatt(int n){
    for(int i = 0; i < n;i++){
        for(int j = 0 ; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void rightTri(int n){
    for(int i = 0; i < n; i++){
        for(int j =0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void rightTriNum(int n){
    for(int i=0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void rightTriNumSame(int n){
    for(int i = 0;i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
    void inverseRightTri(int n){
        for(int i = 0; i <= n; i++){
            for(int j = n; j>i ; j--){
                cout << "* ";
            }
            cout << endl;
        }
    }
void inverseRightNum(int n){
    for(int i = 1; i <= n; i++){
        for (int j =1; j<= n-i+1; j++){
            cout << j << " ";
            
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
//    basicpatt(n);
    // rightTri(n);
    // rightTriNum(n);
    // rightTriNumSame(n);
    // inverseRightTri(n);
    inverseRightNum( n);

}