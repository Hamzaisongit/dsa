// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 0, j = 0;

//     while (i < 5)
//     {
//         j = 0;

//         while (j < 5)
//         {
//             if (j >= 5 - i - 1)
//             {
//                 cout << '*';
//             }
//             else
//             {
//                 cout << ' ';
//             }

//             j = j + 1;
//         }
//         cout << endl;
//         i++;
//     }
// }

// upper is mine.. below is standard logic

#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;

    while (i < 5)
    {
        int space = 5 - i - 1;
        int star = i + 1;
        j = 0;

        while (j < space)
        {
            cout << ' ';
            j = j + 1;
        }

        j = 0;

        while (j < star)
        {
            cout << '*';
            j = j + 1;
        }

        cout << endl;
        i++;
    }
}
