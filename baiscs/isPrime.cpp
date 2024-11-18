#include <iostream>
using namespace std;

int main(){
    int a; 
    cout << "Enter a number plz";
    cin>> a;
        if(a==0){
        cout << "0 is jot a prime";
        return 0;
      }else if(a==1){
        cout << "1 is not a prime";
        return 0;
      }

    for(int i =2; i<a; i++ ){
      if(a%i==0){
        cout << a << " is not a prime";
        return 0;
      }
    }

    cout << a << " is a prime";
    return 0;
}
