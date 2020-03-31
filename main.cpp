# pragma once
# include <iostream>
# include <cmath>
# include <ctime>
# include "Header.h"
using namespace std;


int main()
{
	
	const int n = 5, m = 5;
	int sdvig = 3;
	int M[n][m];
	RandoMatrix(M, 5, 5);
	ShowMatrix(M, 5, 5);
	cout << endl << endl;
	SdvigPoFase(M, 2, 5, 5);


	cin.get();
	cin.get();
}