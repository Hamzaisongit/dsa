#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            cout << j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}