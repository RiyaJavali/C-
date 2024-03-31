// C++ program to interchange
// the diagonals of matrix
#include<bits/stdc++.h>
using namespace std;

#define N 3

// Function to interchange diagonals
void interchangeDiagonals(int array[][N])
{
	// swap elements of diagonal
	for (int i = 0; i < N; ++i)
	if (i != N / 2)
	swap(array[i][i], array[i][N - i - 1]);

cout<<"After interchanging diagonals"<<endl;
	for (int i = 0; i < N; ++i)
	{
	for (int j = 0; j < N; ++j)
			cout<<" "<< array[i][j];
	cout<<endl;
	}
}

// Driver Code
int main()
{
	int array[N][N] = {4, 5, 6,
					1, 2, 3,
					7, 8, 9};
    for (int i = 0; i < N; ++i)
	{
	for (int j = 0; j < N; ++j)
			cout<<" "<< array[i][j];
	cout<<endl;
	}
	interchangeDiagonals(array);
	return 0;
}

