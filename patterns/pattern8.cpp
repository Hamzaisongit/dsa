// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,j=0;
//     while(i<5){
//         j=0;
//         char c = 'A' - 1;
//         while(j<5){
//             c = c+1;
//             cout<<c;
//             j=j+1;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,j=0;
//     char c = 'A' - 1;
//     while(i<5){
//         j=0;
        
//         while(j<5){
//             c = c+1;
//             cout<<c;
//             j=j+1;
//         }
//         cout << endl;
//         i++;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int i=0,j=0;
    
    while(i<5){
        j=0;
        char c = 'A'+i -1;
        while(j<5){
            c = c+1;
            cout<<c;
            j=j+1;
        }
        cout << endl;
        i++;
    }
}
