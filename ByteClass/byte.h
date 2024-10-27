/*
byte.h
David Gutierrez
Assignment 2 Class Construction
10/19/2024
*/


#include <iostream>
#include <string>


#ifndef BYTE
#define BYTE

class Byte {
private:
	int bits[8];
	int bitsToInt();
public:
	void setValue(int value);
	int at(int index);
	std::string toString();
	int toInt();
};


#endif 
