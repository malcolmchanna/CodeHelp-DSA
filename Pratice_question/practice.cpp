#include <iostream>
using namespace  std;



int binary(int arr[ ], int key , int size){

     int start = 0; int end = size -1 ; int mid = start + (end-start)/2;

     while (start<= end)
     {
        if (arr[mid] == key )
        {
           return mid ; 
        }
     else if (key > mid)
        {
            start = mid + 1 ;
        }
        else{ // key < mid
            start = mid -1;
        }
mid = start + (end-start)/2;
     }
      return -1 ;

}

int main(){

    int even [7] = {2,4,5,6,7,8,9};
   
   cout << " value" << binary(even,9,7 );

}