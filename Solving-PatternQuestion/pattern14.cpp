
#include <iostream>
using namespace std;


int main(){
   
   int n; 
   cout << "enter the value: ";
   cin >> n;

   int  row = 1;
   while (row <= n )
   {
     int col = 1;
     char start = 'A' + n - row; 
     while (col <= row)
     {
        cout << start;        
     col= col + 1;
     }
      cout << endl;
    row = row +  1;
   }      
}