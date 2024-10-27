/*
byte.cpp
David Gutierrez
Assignment 2 Class Construction
10/19/2024
*/


#include <iostream>
#include <sstream>
#include "byte.h"
#include <cmath>

using namespace std;

void Byte::setValue(int value) {
	for (int i = 0; i < 8; i++) {
		bits[i] = (value >> i) & 1;
	}
}

string Byte::toString() {
	stringstream byteString;
	for (int i = 7; i >= 0; i--) {
		byteString << bits[i];
	};
	return byteString.str();
}

int Byte::toInt() {
	return bitsToInt();
}

int Byte::bitsToInt() {
	int byteInt = 0;
	for (int i = 7; i >= 0; i--) {
		if (bits[i] == 1) {
			byteInt += pow(2, i);
		}
	}
	return byteInt;
}

int Byte::at(int index) {
	if (index < 0 || index > 7) {
		return -1;
	}
	return bits[index];
}
