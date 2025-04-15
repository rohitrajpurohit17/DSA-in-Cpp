#include<iostream>
using namespace std;

void print1(int n){
for(int i = 0; i<n; i++){
    for(int j = 0; j <n; j++){
        cout << "* ";
    }
    cout << endl;
}
}

void print2(int n){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
}

void print3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;

    }
}

void print5(int n){
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        // Stars
        for(int j =0; j < 2*n - (2*i+1); j++){
            cout << "*";
        }

        // Space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;

    }
    for(int i = 0; i < n; i++){
        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // Stars
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        // Space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;

    }
    
}

void print6(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0 ; j <= i; j++){
            cout<< "* ";
        }
        cout<< endl;
    }
}

void print7(int n){
     for(int i = 0; i <= n; i++){
        for(int j = 0 ; j < i; j++){
            cout<< i;
        }
        cout<< endl;
    }
}

void print8(int n){
    int count = 1;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j < i; j++){
            cout << count << " ";
            count++;
        }
       
        cout << endl;

    }
}

void print9(int n){
    int count = 1;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            char ch = 'A'+i-1;
            cout << ch;

        }
       
        cout << endl;

    }
}
void print10(int n){
    int count = 1;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            char ch = 'A'+j-1;
            cout << ch;

        }
       
        cout << endl;

    }
}

void print11(int n){
    char ch = 'A';
    for(int i = 1; i <n; i++){
        for(int j = 1; j < n; j++){
            
            cout << ch++;

        }
       
        cout << endl;

    }
}

void print12(int n){
    
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            char ch = 'A'+i+j-2;
            cout << ch++;

        }
       
        cout << endl;
       

    }
}

void print13(int n){
     char ch = 'A';
    for(int i =1; i <=n;++i){
        
        for(int j =1; j <=i; ++j){
           
            cout << ch;
        }
        ch++;
        cout<<endl;
    }
}

void print14(int n){
    char ch = 'A';
    for(int i =1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            
            cout << ch++;
        }
        cout << endl;
    }
}

 void print15(int n){
    
    for(int i = 1; i <= n; ++i){
         char ch = 'A'+n-i; 
        for(int j= 1; j <= i; ++j){
           
               
        cout << ch;
        ch++;    
        }
        cout << endl;
    }
 }


int main(){
    int n;
    cin >> n;

    print15(n);

    return 0;
}