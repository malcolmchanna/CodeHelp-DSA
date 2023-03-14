#include <iostream>
using namespace std;


int pirovt(int arr[] , int size){
   
   int start = 0; int end = size -1;
   int mid = start + (end-start)/2;

   while (start < end)  {
	 
	 if(arr[mid]>= arr[0])
	 {
	     start = mid +1; 
	 }
	 else{
		 end = mid;
	 }
    mid = start + (end-start)/2;

   }  

	 return start;
   
}

int main(){

	int nums[7] = {7,8,5,9,1,2,3};
    int p = pirovt(nums,7) ;

	cout << "  " << p ;

    
}