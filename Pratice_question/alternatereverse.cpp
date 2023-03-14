// #include <iostream>
// using namespace  std;


// void print(int arr[], int n){
//     for (int i = 0; i < n; i++) {
//      cout << arr[i] <<" ";
//     }cout << endl ;
    
// }

// reverse(int arr[ ], int n){

//   for (int i = 0; i < n; i+=2){
//     if(i+1 < n){
//      swap(arr[i], arr[i+1]);
//   }
// }
// }
// int main (){
     
//      int even[6]= {2,6,8,9,12,14} ;

//     reverse(even,6);
//     print(even,6);




// }





#include <iostream>
using namespace std;


int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}