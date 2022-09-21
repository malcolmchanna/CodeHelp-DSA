
#include <iostream>
using namespace std;


int main(){
  int n ; 
  cout << "enter the value: ";
  cin >> n;

  int row = 1;
  
  while (row <= n)
  {
      // first print space
     int space = n - row  ;
     while (space)
     {
        cout << "*";
        space--;

     }
      
   // second print Stars
    int col = 1;
    while (col <= row )
    {
        cout << "*";
        col++;
    }
     cout << endl;
     row++; 
   
  }
  
}

  


// #include <iostream>
// using namespace std;


// int main(){
//   int n ; 
//   cout << "enter the value: ";
//   cin >> n;

//   int row = 1;
  
//   while (row <= n)
//   {
//       // first print space
//      int space = n - row + 1;
//      while (space)
//      {
//         cout << "*";
//         space--;
//      }
      

//     int col = 1;
//     while (col <= row )
//     {
//         cout << "-";
//         col--;
//     }
//      cout << endl;
//      row++; 
   
//   }
  
// }