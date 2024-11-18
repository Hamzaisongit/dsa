#include <iostream>
using namespace std;

int main(){
    int i=0,rows = 5;
    int j=0,columns = 5;

    while(i<5){
    j=0;
        while(j<5){
            cout<< '*';
            j++;
        }
        cout<<endl;
    i++;
    }
    return 0;
}