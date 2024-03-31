#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{1,3,5},{3,4,5},{4,4,4}};
    int c[3][3];

cout<<"Matrix A"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
     cout<<"------------------------------"<<endl;
    cout<<"Matrix B"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
           c[i][j]= b[i][j] * a[i][j];
    }
    cout<<"------------------------------"<<endl;
    cout<<"Dot product"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
