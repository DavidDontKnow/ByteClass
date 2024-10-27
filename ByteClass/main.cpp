/*
Main.cpp
David Gutierrez
Assignment 2 Class Construction
10/19/2024
*/


#include <iostream>
#include "byte.h"
using namespace std;

int main() {
	Byte byte;
	byte.setValue(99);

	for (int i = 0; i < 8; i++) {
		cout << byte.at(i) << endl;
	}

	cout << "Int: " << byte.toInt() << endl;
	cout << "String: " << byte.toString() << endl;

	return 0;
}

