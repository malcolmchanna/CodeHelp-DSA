#include <iostream>
using namespace std;

void update(int  arr[], int n){

    cout << endl << "inside the function" << endl;
    for (int i = 0; i < 3; i++){
          cout << arr[i] <<  "";
    }cout << endl;
    cout << endl << "Go to the Main function" << endl;
}




int main(){
    int  num[3] = {1,2,3};
    update(num, 3);
    for (int i = 0; i < 3; i++){
          cout << num[i] <<  "";
    }cout << endl;

    return 0;
}
