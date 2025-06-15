#include <iostream>
using namespace std;
void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void triangleRev(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void bothTri(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void rightHalfTri(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void oneZeroFlipTri(int n)
{
    int start = 1;
    for (int i = 0; i <= n; i++)
    {
        if (start % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void VspaceNum(int n){
    
    for(int i = 0; i <= n; i++){
        for(int j = 1 ; j <= i; j++ ){
            cout << j;
        }
        // int space = n+2-(i*2); Wrong 
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        // Another simple method to define int space out with formula 
        // = 2 * (n-1)
        // and inside row loopp space-=2;
        // int j =1; j <= space
    }
}
int main()
{
    int n;
    cin >> n;
    // triangle( n);
    // triangleRev(n);
    // bothTri( n );
    // rightHalfTri(n);
    // oneZeroFlipTri(n);
    // VspaceNum( n);
}