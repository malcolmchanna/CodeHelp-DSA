#include <iostream>
using namespace std; 
 
 bool ispossibleSolution(int arr[],int n, int m , int mid ){
     
     int  studentCOunt =1;
     int pageSum = 0;

     for (int i = 0; i < n; i++){
       
         if (pageSum + arr[i] <= mid){
          pageSum += arr[i];
        }
     else{
         studentCOunt++;
        if (studentCOunt > m || arr[i]> mid)
        {
            return false;
        }
        pageSum += arr[i];
     }
      if(studentCOunt > m) {
            return false;
        }
      }
      return true;
   }
  
   binarySearch(int arr[] ,int n, int m ){
    int  s = 0; 
     int sum = 0;

     for (int i = 0; i < n; i++)
     {
     sum = sum+ arr[i];
     }
     
     int e = sum;
     int mid = s + (e -s)/2;
     int ans = 0;

    while (s <= e){
    if (ispossibleSolution(arr,n,m,mid )){
         ans = mid;
                 e= mid-1;
        
    }
    else{
  s= mid+1;
    }

    mid = s + (e- s)/2;

    }
    return ans;
    }


    
     

int main(){
    int arr[7] ={2, 2, 3, 3, 4, 4, 1 };

   cout << " " <<  binarySearch(arr,7,4);
         

}