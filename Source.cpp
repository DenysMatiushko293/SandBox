# pragma once
# include <iostream>
# include <cmath>
# include <ctime>
# include "Header.h"
using namespace std;
//task 1
int PowProduct(int x, int y)
{
	if (y == 0) return 1;
	if (y == 1) return x;
	int result = x * PowProduct(x, y - 1);
	return result;
}

//task 2
int ProductThroughSum(int x, int y)
{
	if (y == 0) return 0;
	if (x == 0) return 0;
	int result = x + ProductThroughSum(x, y - 1);
}

//task 3
int Stars(int N)
{
	if (N == 0) return 0;
	Stars(N - 1);
	cout << "* ";

}

//task 4
int Factorial(int a)
{
	if (a == 0) return 0;
	if (a == 1) return a;
	int factorial = a * Factorial(a - 1);
	return factorial;
}

//task 5
int SumofRange(int a, int b)
{
	if (b < a) return 0;
	int Sum = b + SumofRange(a, b - 1);
	return Sum;
}

//task 6
void RandomArray(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

int ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

int Sum_El(int arr[], int size, int LfBdr, int RghBdr)
{
	if (RghBdr < LfBdr) return 0;
	int Sum = arr[RghBdr] + Sum_El(arr, size, LfBdr, RghBdr - 1);
	return Sum;
}
int ArraySums(int arr[], int size, int LfBdr, int RghBdr)
{
	int arr_sum[91];
	for (int j = 0; j < 91; j++)
	{
		arr_sum[j] = Sum_El(arr, 100, LfBdr, RghBdr);
		cout << arr_sum[j] << " ";
		RghBdr++;
		LfBdr++;
	}
	cout << endl << endl;
	int min = arr_sum[0], pos = 0;
	for (int i = 0; i < 91; i++)
	{
		if (arr_sum[i] < min)
		{
			min = arr_sum[i];
			pos = i;
		}
	}
	return pos;
}
//task 7
void SortArray(int *ptr_arr, int size)
{
	int min, temp;
	for (int i = 0; i <= size - 1; ++i)
	{
		min = *ptr_arr;
		for (int j = i + 1; j <= size - 1; ++j)
		{
			if (*(ptr_arr + 1) < min)
			{
				min = *(ptr_arr + 1);
			}
		}
		temp = min;
		min = min = *(ptr_arr + 1);
		min = *(ptr_arr + 1) = temp;
	}
	cout << "\nSorted array arr[15] ={";
	for (int i = 0; i <= size - 1; ++i)
	{
		cout << *ptr_arr << " ";
		ptr_arr++;
	}
	cout << "}";
}
int BinarySearch(int arr[], int size, int value, int middle)
{
	if (arr[middle] == value) return middle;
	if (arr[middle] < value) BinarySearch(arr, 15, value, middle + 1);
	else BinarySearch(arr, 15, value, middle - 1);
}

//task 8
void RandoMatrix(int M[][5], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			M[i][j] = rand() % 10;
		}
	}

}
void ShowMatrix(int M[][5], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}

}
void SdvigPoFase(int arr[][5], int sdvig, int m, int n)
{
	int pos;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			{
			
				if ((j + sdvig) < m) pos = j + sdvig;
				else pos = (j + sdvig) - m;
			
			cout << arr[i][pos] << " ";
			}
		cout << "\n";
	}

}