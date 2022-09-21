// #include <iostream>
// using namespace std;


// int main(){
   
//    int n; 
//    cout << "enter the value: ";
//    cin >> n;

//    int  row = 1;

//    while (row <= n )
//    {
//      int col = 1;
//     char  start  =  'A' + row- 1; 
//      while (col <= row)
//      {
//              cout << start;
//              col= col + 1;
//      }
//       cout << endl;
//     row = row +  1;
//    }
   


// }

#include <iostream>
using namespace std;


int main(){
   
   int n; 
   cout << "enter the value: ";
   cin >> n;

   int  row = 1;
    char  start  =  'A'; 
   while (row <= n )
   {
     int col = 1;

     while (col <= row)
     {
             cout << start;
             start = start +1;
             col= col + 1;
     }
      cout << endl;
    row = row +  1;
   }
   


}
