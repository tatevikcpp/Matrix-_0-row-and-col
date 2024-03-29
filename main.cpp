#include <iostream>
#include <stack>
using namespace std;
#define n 4
#define m 5

void OutMatrix(int a[n][m])
{
	int  i, j;
	stack< pair <int, int> > s;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (a[i][j] == 0)
			{
				s.push(make_pair(i, j));
			}
			
		}
		
	}
	
	while (!s.empty())
	{

		pair <int, int> p = s.top();
		for (i = 0; i < n; ++i)
			a[i][p.second] = 0;
		for (j = 0; j < m; ++j)
			a[p.first][j] = 0;

		s.pop();
	}
}

void printMatrix(int a[n][m])
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	int a[n][m] =   {{1, 0, 1, 1, 1},
			 {1, 1, 1, 1, 1},
			 {1, 1, 0, 1, 1},
			 {1, 1, 1, 1, 1}};


	cout << "Input matrix" << endl;;

	printMatrix(a);

	OutMatrix(a);

	cout << "Output matrix" << endl;

	printMatrix(a);
}

