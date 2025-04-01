#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    switch(num){
        case 1: cout << "Monday";
            break;
        case 2:  cout <<"Tueday";
            break;
        case 3:  cout <<"Wednseday";
            break;
        case 4:  cout <<"Thursday";
            break;
        case 5:  cout <<"Friday";
            break;
        case 6:  cout <<"Saturday";
            break;
        case 7:  cout <<"Sunday";
            break;
        default : "Invalid";
    }
}