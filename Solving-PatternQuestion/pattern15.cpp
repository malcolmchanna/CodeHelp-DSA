#include <iostream>
using namespace std;



int main(){

    int n ;

    cout << "enter ther value: ";
    cin >> n ;
    
    int i = 1;
    
    while (i<= n)
    {
       int j = 1;
       char ch = 'A' - n + i +2 ; 
       while (j <= n)
       {
        cout << ch;
        ch++;
       j = j+1;       
       }
       cout << endl;
       
    i = i+1;
    }
}
