#include <iostream>
using namespace std;

 bool search(int arr[], int size, int key){
     for (int i = 0; i < size; i++)
     {
         if (arr[i]== key){
            return 1;
         }
     }
         return 0;     
 }


int main(){

   int num[7] = { 1,2,3,6,7,8,9};
   cout << "ENTER THE ELEMENT " << endl;
   int key;
   cin >> key;
  
   bool found = search(num, 7, key) ;

   if (found){
     cout << "value is present";
   }else{
       cout << "value is absent";
   }

    return 0;
}
