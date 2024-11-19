#include <iostream>
using namespace std;

int main(){
    int i=0,j=0;
    while(i<5){
        j=0;
        char c = 'A'+i;
        while(j<5){
            cout<<c;
            j=j+1;
        }
        cout << endl;
        i++;
    }
}