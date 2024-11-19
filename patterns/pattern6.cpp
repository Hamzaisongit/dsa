#include <iostream>
using namespace std;

int main(){
    int i=0,j=0,k;
    int n;

cin >> n;

    while(i<n){
        j=0;
        while(j<i+1){
            cout<<i+1-j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}