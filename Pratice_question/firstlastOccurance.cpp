#include <iostream>
using namespace std;


int fisrt(int arr[ ], int size, int key){
   
   int start = 0 ; int end = size - 1 ;
   int mid = start + (end-start)/2 ;
   int ans =-1;
   
   while (start <= end){
     
     if( arr[mid] == key){
         ans = mid;
         
         end = mid -1; 
     }
     else if (key > arr[mid] ){
       start = mid +1 ;
     }
     else if (key < arr[mid]) {
         end = mid-1 ;
     }
    
     mid = start + (end-start)/2 ;
  
     }
  
   return ans;
}

int Last(int arr[ ], int size, int key){
   
   int start = 0 ; int end = size - 1 ;
   int mid = start + (end-start)/2 ;
   int ans =-1;

   while (start <= end){
     
     if( arr[mid] == key){
         ans = mid;
         start = mid +1; 
     }
     else if (key > arr[mid] ){
       start = mid +1;
       }
     else if (key < arr[mid]) {
         start = mid +1;
     }
    
     mid = start + (end-start)/2 ;
  
     }
  
   return ans;
}





int main(){
      
      int even[11] = {2,4,6,8,8,8,8,8,8 ,3,22} ;

    //   int even [11] = {2,4,6,8,3,3,8,8,8 ,3,22} ;

      int FirstOcc = fisrt(even, 11 , 8);
     int lastOcc = Last(even,11,8) ;
    
    cout << " FIRST Occurance at index one:  " << FirstOcc;

cout << "  lAST Occurance at index one:  " << lastOcc;

int totalOccurance =  (lastOcc - FirstOcc) + 1 ;

cout << "  TOTAL  Occurance at index one:  " << totalOccurance;
}
