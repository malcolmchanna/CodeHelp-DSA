// #include <iostream>
// using namespace std;



// int main(){

//     int n ;

//     cout << "enter ther value: ";
//     cin >> n ;
    
//     int i = 1;
//     int count = 1;
//     while (i<= n)
//     {
//        int j = 1;
        
//        while (j <= n)
//        {

//        char ch = 'A' + count - 1;   
//        count = count + 1;
//         cout << ch;
//        j = j+1;       
//        }
//        cout << endl;
       
//     i = i+1;
//     }
// }

#include <iostream>
using namespace std;



int main(){

    int n ;

    cout << "enter ther value: ";
    cin >> n ;
    
    int i = 1;
    char start = 'A';
    while (i<= n)
    {
       int j = 1;
        
       while (j <= n)
       {

        cout << start;
        start++;
       j = j+1;       
       }
       cout << endl;
       
    i = i+1;
    }
}
