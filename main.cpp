#include <iostream>
#define n 4
#define m 5

void OutMatrix(int  a[n][m])
{
	int  row[n];
	int  col[m];
	int  i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (a[i][j] == 0)
			{
				row[i] = 0;
				col[j] = 0;
			}
		}
	}


	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (row[i] == 0 || col[j] == 0)
			{
				a[i][j] = 0;
			}
		}
	}
}

void printMatrix(int a[n][m])
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int a[n][m] = { {1, 0, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 0, 1, 1},
					{1, 1, 1, 1, 1} };


	std::cout << "Input matrix" << std::endl;;
	printMatrix(a);

	OutMatrix(a);

	std::cout << "Output matrix" << std::endl;
	printMatrix(a);

}

