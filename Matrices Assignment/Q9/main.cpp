#include <iostream>
#define n 4
using namespace std;

void interchange(int m[][n])
{
    for (int i = 0; i < n/2; ++i)
    {
        for(int j = 0; j < n; j++)
        {
            swap(m[i][j], m[n-i-1][j]);
        }
    }
}

int main()
{
    int m[n][n] = { { 8, 9, 7, 6 },
            { 4, 7, 6, 5 },
            { 3, 2, 1, 8 },
            { 9, 9, 7, 7 } };

for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
        cout << m[i][j] << " ";
        }
      cout << endl;
    }
    interchange(m);
    cout<<"\n after swapping rows:\n";

    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
           cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
