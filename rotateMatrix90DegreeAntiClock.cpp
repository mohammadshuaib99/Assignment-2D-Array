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

    cout << "Before transpose the printing the Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Rotate Matrix Anti-ClockWise : " << endl;
    // printing the transpose of Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(array[i][j], array[j][i]);
        }
    }

    cout << "Rotate Matrix Anti-ClockWise : " << endl;
    for (int c = 0; c < n; c++)
    {
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            swap(array[i][c], array[j][c]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*Enter the size of array : 3
Input Matrix :
1 2 3
4 5 6
7 8 9
Before transpose the printing the Matrix :
1 2 3
4 5 6
7 8 9
Rotate Matrix Anti-ClockWise :
Rotate Matrix Anti-ClockWise :
3 6 9
2 5 8
1 4 7*/