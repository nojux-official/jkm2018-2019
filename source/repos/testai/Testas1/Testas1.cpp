// Testas1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
//#include<io.h>

using namespace std;

int main()
{
	int metai, menesis, diena, suma;
	//int tmp;
	//ivedimas
	cout << "Iveskite gimimo metus: ";
	cin >> metai; cin.ignore();
	cout << "Iveskite gimimo menesi: ";
	cin >> menesis; cin.ignore();
	cout << "Iveskite gimimo diena: ";
	cin >> diena; cin.ignore();





	//Pirma eilute: 50 *
	for (int i = 0; i < 50; i++) {
		cout << "*";
	}
	cout << "*" << endl;



	//antra eilute
	for (int i = 0; i < 16; i++) { //(50-19)/2=15,5 ~ 15
		cout << "*";
	}
	cout << "  Sajauskas Nojus  "; //19 simboliu
	for (int i = 0; i < 15; i++) {
		cout << "*";
	}
	cout << "*" << endl;//50-tasis simbolis



	//Trecia eilute
	for (int i = 0; i < 50; i++) {
		cout << "*";
	}
	cout << "*" << endl;



	//Ketvirta eilute
	for (int i = 0; i < 9; i++) {//(50-14)/4=8,5     // 14 tai metai+menesis+diena+6 simboliu skaicius
		cout << "*";
	}
	cout << " " << metai << " ";
	for (int i = 0; i < 9; i++) {
		cout << "*";
	}
	cout << " " << menesis << " ";
	for (int i = 0; i < 9; i++) {
		cout << "*";
	}
	cout << " " << diena << " ";
	for (int i = 0; i < 10; i++) {
		cout << "*";
	}
	cout << "*" << endl;
	
	//Penkta eilute: 50 *
	for (int i = 0; i < 50; i++) {
		cout << "*";
	}
	cout << "*" << endl;
	
	
	
	
	
	//Suma
	suma = menesis + diena;
	cout << "suma: " << suma << endl;
	//cin>>tmp; cin.ignore();
    return 0;
}

