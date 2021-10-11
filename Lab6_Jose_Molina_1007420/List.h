#include "Pokemon.h"
#pragma once
using namespace System;
ref class List
{
	Pokemon^ Head;
	Pokemon^ Tail;
public:
	int length;
	void Insert(String^ nombre, int Numero, int generacion);
	bool Insert(String^ nombre, int Numero, int generacion, int index);
	String^ Print();
	int Search(int value);
	bool Delete(int value);
	String^ GetNombre(int index);
	int GetNationalNumber(int index);
	int GetGeneracion(int index);
	bool DeleteIndex(int index);
	bool IsSorted();
};
