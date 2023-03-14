#include <iostream>
using namespace std;

void sum(int arr[], int n){
       
 int sum;
     for (int i = 0; i < 5; i++)
     {
         

         sum = sum + arr[i] ;
    cout << " " << sum ;     
         
     }
      cout << " without loop" ;     

    cout << " " << sum ;     

}
 
int main(){

    int arr[5] = {1,2,3,4,7};

     sum(arr, 5);

return 0;

}
