#include <iostream>
using namespace std;

int main(){
    int i=0,j=0;
    
    while(i<5){
        j=0;
        char c = 'D'-i;
        while(j<i+1){
            c = c+1;
            cout<<c;
            j=j+1;
        }
        cout << endl;
        i++;
    }
}
