#include "Orden.h"
#include "Pokemon.h"
#include "List.h"

using namespace System;

void Orden::Swap(List^ Lista, int i, int j)
{
	if (i != j)
	{
		String^ nom = Lista->GetNombre(i);
		String^ nom2 = Lista->GetNombre(j);
		int num = Lista->GetNationalNumber(i);
		int num2 = Lista->GetNationalNumber(j);
		int gen = Lista->GetGeneracion(i);
		int gen2 = Lista->GetGeneracion(j);
		Lista->DeleteIndex(i);
		Lista->Insert(nom2, num2, gen2, i);
		Lista->DeleteIndex(j);
		Lista->Insert(nom, num, gen, j);
	}
}

void Orden::SelectionSort(List^ Lista)
{
	int i;
	int indiceIntercambio;
	i = (Lista->length) - 1;
	while (i > 0)
	{
		indiceIntercambio = 0;
		for (int j = 0; j < i; j++)
		{
			if (Lista->GetNationalNumber(j + 1) < Lista->GetNationalNumber(j))
			{
				Swap(Lista, j, j + 1);
				indiceIntercambio = j;
			}
		}
		i = indiceIntercambio;
	}
}


void Orden::Shuffle(List^ Lista)
{
	for (int i = 0; i < Lista->length; i++)
	{
		Random rnd;
		Swap(Lista, i, rnd.Next(0, Lista->length));
	}
}

void Orden::ShellSort(List^ Lista)
{
	while (!Lista->IsSorted())
	{
		Shuffle(Lista);
	}
}

int Orden::Partition(List^ Lista, int low, int high)
{
	int pivot = Lista->GetNationalNumber(high);
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (Lista->GetNationalNumber(j) < pivot)
		{
			i++;
			Swap(Lista, i, j);
		}
	}
	Swap(Lista, i + 1, high);
	return i + 1;
}

void Orden::QuickSort(List^ Lista, int low, int high)
{
	if (low < high)
	{
		int pi = Partition(Lista, low, high);
		QuickSort(Lista, low, pi - 1);
		QuickSort(Lista, pi + 1, high);
	}
}
