// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,j=0;
//     while(i<5){
//         j=0;
//         while(j<i+1){
//             cout<<j+i+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// upper was a bit clever way of solving the pattern.. uses one less variable

#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k;

    while (i < 5)
    {
        j = 0;
        k = i;
        while (j < i + 1)
        {
            k++;
            cout << k;
            j++;
        }
        cout << endl;
        i++;
    }
}