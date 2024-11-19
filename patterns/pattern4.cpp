// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,j=0;
//     while(i<5){
//         j=0;
//         while(j<5){
            
//             if(j==i+1)break;
//             cout << '*';
//             j++;
//         }

//         cout << endl;
//         i++;
//     }
// }

//upper was my method... this one is a bti optimized..

#include <iostream>
using namespace std;

int main(){
    int i=0,j=0;
    int k=0;
    while(i<5){
        j=0;
        while(j<i+1){ // just changed this condition here
            k = k+1;
            cout << k;
            j++;
        }
        cout << endl;
        i++;
    }
}