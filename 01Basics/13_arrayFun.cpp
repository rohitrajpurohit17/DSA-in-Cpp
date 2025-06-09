#include<iostream>

using namespace std;

void fun(int arr[],int n){
    arr[0] += 100;

    cout << arr[0] <<" In process" << endl;
}
int main(){

    int n = 2;
    int arr[n];

    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << arr[0]<< " Before Process" << endl;

    fun(arr,n);

    cout << arr[0] << " After Process"<< endl;
}

