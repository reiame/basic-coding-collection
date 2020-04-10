#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int movingCount(int m, int n, int k)
    {
        int** matrix = new int* [m];
        for (int i = 0; i < m; i++)
            matrix[i] = new int[n] {0};
        int num = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << k << " " << (i % 10 + i / 10 + j % 10 + j / 10);
                if (k >= (i % 10 + i / 10 + j % 10 + j / 10))
                    matrix[i][j] = -1;
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            cout << i << " hang:";
            for (int j = 0; j < n; j++)
            {
                if (i ==0 && j == 0) {
                    matrix[i][j] = 1; cout << matrix[i][j] << " ";
                }
                else if (i == 0) {
                    if (matrix[i][j - 1] == 1) 
                        matrix[i][j] = -matrix[i][j];
                    cout << matrix[i][j] << " ";
                }
                else if (j == 0) {
                    if (matrix[i - 1][j] == 1)   matrix[i][j] = -matrix[i][j];

                    cout << matrix[i][j] << " ";
                }
                else
                {
                    if (matrix[i][j] == -1 && (matrix[i - 1][j] == 1 || matrix[i][j - 1] == 1))
                        matrix[i][j] = -matrix[i][j];
                    cout << matrix[i][j] << " ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 1) num++;
            }
        return num;
    }
};
int main()
{
    int m = 7; int n = 2; int k = 3;
    Solution A;
    cout<<A.movingCount(m, n, k);
}