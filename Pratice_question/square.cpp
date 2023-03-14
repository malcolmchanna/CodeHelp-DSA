
#include <iostream>
using namespace std;


int squareroot(int n){
    int s= 0,
    e = n-1 , mid = s+(e-s)/2;
    int ans =-1;

    while (s<e) {
     int square = mid*mid;
    
     if (square == n){
       return mid;
    }
    else if (square < n)
    {
          ans = mid;
          s = mid +1;
      }
      else{
          e= mid -1;
      }
    mid = s+(e-s)/2;
    }
     return ans; 
}

double morePrecision(int n , int count , int temsol){

    double factor = 1;
    double result = temsol;
  for (double i = 0; i < count; i++){
       factor= factor/10;
       for ( double j = result; j*j < n; j = j+factor){
          result = j;         
       }

  }
       return result ;
}


int main(){
  int n;
  cout << "Enter the Number" << endl;
  cin >> n;
  int temsol = squareroot(n);
    


   cout << endl
   << "Answer is " << morePrecision(n, 3,temsol); 

}