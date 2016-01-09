// URIJudge-Questions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	double pi = 3.14159;
	double A, raio;
	cin >> raio;
	A = pi*(raio*raio);
	cout << fixed << setprecision(4);
    cout << "A=" << A << endl;
	return 0;
}

