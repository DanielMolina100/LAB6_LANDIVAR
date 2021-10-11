#include "List.h"
#include "Pokemon.h"

using namespace System;

//Inserta al inicio
void List::Insert(String^ nombre, int Numero, int generacion)
{
	Pokemon^ New = gcnew Pokemon();
	New->Nombre = nombre;
	New->NationalNumber = Numero;
	New->Generacion = generacion;
	New->Next = Head;
	Head = New;
	if (Tail == nullptr)
		Tail = New;
	length++;
}
bool List::Insert(String^ nombre, int Numero, int generacion, int index)
{
	if (Head == nullptr || index == 0)
	{
		Insert(nombre, Numero, generacion);
		return true;
	}
	int i = 0;
	Pokemon^ Current = Head;
	while (i < (index - 1) && Current != nullptr)
	{
		Current = Current->Next;
		i++;
	}
	if (Current == nullptr)
		return false;
	Pokemon^ New = gcnew Pokemon();
	New->Nombre = nombre;
	New->NationalNumber = Numero;
	New->Generacion = generacion;
	New->Next = Current->Next;
	Current->Next = New;
	length++;
}

String^ List::Print()
{
	String^ res = nullptr;
	Pokemon^ Current;
	Current = Head;
	while (Current != nullptr)
	{
		res += Current->Nombre + "\t" + Current->NationalNumber.ToString() + "\t" + Current->Generacion.ToString() + "\n";
		Current = Current->Next;
	}
	return res;
}

String^ List::GetNombre(int index)
{
	Pokemon^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->Nombre;
}


int List::GetNationalNumber(int index)
{
	Pokemon^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->NationalNumber;
}


int List::GetGeneracion(int index)
{
	Pokemon^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->Generacion;
}


bool List::IsSorted()
{
	bool Sorted = true;
	Pokemon^ Current = Head;
	while (Current != nullptr && Current->Next != nullptr)
	{
		if (Current->NationalNumber >= Current->Next->NationalNumber)
			Sorted = false;
		Current = Current->Next;
	}
	return Sorted;
}
bool List::Delete(int value)
{
	int index = Search(value);
	if (index == -1)
		return false;
	return DeleteIndex(index);
}
bool List::DeleteIndex(int index)
{
	if (index == 0)
	{
		Pokemon^ ToDelete = Head;
		Head = Head->Next;
		delete ToDelete;

	}
	else
	{
		Pokemon^ Anterior = Head;
		int i = 0;
		while (i < index - 1)
		{
			Anterior = Anterior->Next;
			i++;
		}
		Pokemon^ ToDelete = Anterior->Next;
		Anterior->Next = ToDelete->Next;
		delete  ToDelete;

	}
	length--;
	return true;
}
int List::Search(int numero)
{
	int index = 0;
	Pokemon^ Current = Head;
	while (Current->NationalNumber != numero && Current != nullptr)
	{
		Current = Current->Next;
		index++;
	}
	if (Current == nullptr)
		return -1;
	else
		return index;
}
