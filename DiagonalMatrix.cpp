#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n][n];
    cout << "Input Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "After the printing the Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Diagonal Matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << array[i][j] << " ";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
output

Enter the size of array : 3
Input Matrix :
1 2 3
4 5 6
7 8 9
After the printing the Matrix :
1 2 3
4 5 6
7 8 9
Diagonal Matrix :
1  3
 5
7  9

*/