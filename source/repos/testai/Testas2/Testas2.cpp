// Testas2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int ilgis, plotis;
	cout << "Iveskite x1 koordinates: ";// as tycia nepadejau endl
	cin >> x1; cin.ignore();

	cout << "Iveskite y1 koordinates: ";// as tycia nepadejau endl
	cin >> y1; cin.ignore();

	cout << "Iveskite ilgi: ";// as tycia nepadejau endl
	cin >> ilgis; cin.ignore();

	cout << "Iveskite ploti: ";// as tycia nepadejau endl
	cin >> plotis; cin.ignore();

	x4 = x1;
	
	x2 = x1 + ilgis;
	x3 = x4 + ilgis;

	//tas pats su y

	y2 = y1;

	y4 = y1 + plotis;
	y3 = y2 + plotis;

	cout << "perimetras yra (ilgis + plotis) * 2 = (" << ilgis << " + " << plotis << ") * 2 = " << (ilgis + plotis) * 2 << endl;

	cout << "-----------" << endl;
	cout << "(x, y)" << endl;
	cout << "(" << x1 << ", " << y1 << ")" << "(" << x2 << ", " << y2 << ")" << endl;
	for (int i = 0; i < ilgis-1; i++) {
		cout << "-";
	}
	cout << "-" << endl;
	for (int i = 0; i < ilgis - 1; i++) {
		cout << "|" << endl;
	}
	cout << "|" << endl;
	for (int i = 0; i < ilgis - 1; i++) {
		cout << "-";
	}
	cout << "-" << endl;
	cout << "(" << x4 << ", " << y4<< ")" << "(" << x3 << ", " << y3 << ")" << endl;

    return 0;
}

