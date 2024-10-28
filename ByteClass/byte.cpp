/*
byte.cpp
David Gutierrez
Assignment 3 overloading constructors
10/27/2024
*/


#include <iostream>
#include <sstream>
#include "byte.h"
#include <cmath>

using namespace std;

void Byte::setValue(int value) {
	for (int i = 7; i >= 0; --i) {
		bits[i] = value % 2;
		value /= 2;
	}
}

string Byte::toString() {
	stringstream byteString;
	for (int i = 0; i < 8; i++) {
		byteString << bits[i];
	};

	return byteString.str();
}

int Byte::toInt() {
	return bitsToInt();
}

int Byte::bitsToInt() {
	int byteInt = 0;
	int temp = 0;
	for (int i =7; i >= 0; i--)
	{
		if (bits[i] == 1) {
			byteInt += pow(2, temp );
		}
		temp++;
	}
	return byteInt;
}

int Byte::at(int index) {
	if (index < 0 || index > 7) {
		return -1;
	}
	return bits[index];
}

//constructors
void Byte::byte() {
	byte(0);
}

void Byte::byte(int value) {
	setValue(value);
}

void Byte::byte(int ar[8]) {
	//check if array is 8 elements
	if (sizeof(ar) != 8) {
		cout << "Array must be 8 elements" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < 8; i++) {
			if (ar[i] != 0 && ar[i] != 1) {
				bits[i] = 0;
			}
			else
			{
				bits[i] = ar[i];
			}
		}
		setValue(bitsToInt());
	}
}

//operations
int Byte::add(int num) {
	int temp = bitsToInt();
	temp += num;
	setValue(temp);
	return bitsToInt();
}

int Byte::subtract(int num) {
	int temp = bitsToInt();
	temp -= num;
	setValue(temp);
	return bitsToInt();
}

int Byte::multiply(int num) {
	int temp = bitsToInt();
	temp *= num;
	setValue(temp);
	return bitsToInt();
}

int Byte::divide(int num) {
	int temp = bitsToInt();
	temp /= num;
	setValue(temp);
	return bitsToInt();
}




//testing
void Byte::printByte() {
	cout << "Byte: " << toString() << endl;
	cout << "Byte Int: " << toInt() << endl;
	cout << endl;
}






