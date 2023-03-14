#include <iostream> 
using namespace  std;

int pivort(int arr[] , int n){
   int s= 0;
    int e = n-1; 
    int mid = s + (e-s)/2;

   while (s<e){
    if (arr[mid]>= arr[0])
    {
        s = mid + 1; 
    }
    else
    {
        e = mid;
    } 
    mid = s + (e-s)/2;
   }

 return s;
}



int binary(int arr[ ], int s, int e, int key ){

     int start = s; int end = e ; int mid = start + (end-start)/2;

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


 



int main() {

    int even[6] = {7,9,4,1,2,3};

 int pivot = pivort(even,6);

 

int findPosition(int arr[], int n, int k)
{
        
 if( k >= even[pivot] && k <= even[n-1])
    {//BS on second line
        return binary(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binary(arr, 0, pivot - 1, k);
    }
    
}

     cout << "  " << findPosition(even, 6,2);
}

   