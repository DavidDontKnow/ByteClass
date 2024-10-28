/*
Main.cpp
David Gutierrez
Assignment 3 overloading constructors
10/27/2024
*/


#include <iostream>
#include "byte.h"
using namespace std;

int main() {
	Byte byte;
	byte.setValue(99);
	cout << "Byte: " << byte.toString() << endl;
	cout << "Byte Int: " << byte.toInt() << endl;
	cout << endl;

	int ar[8] = { 0,0,2,2,0,0,1,0 };

	Byte byte2;

	byte2.byte();
	byte2.printByte();

	byte2.byte(2);
	byte2.printByte();

	byte2.add(2);
	byte2.printByte();

	byte2.subtract(1);
	byte2.printByte();

	byte2.multiply(2);
	byte2.printByte();

	byte2.divide(2);
	byte2.printByte();

	byte2.byte(ar);
	byte2.printByte();


	return 0;
}

