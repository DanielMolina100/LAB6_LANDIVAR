#include "List.h"
#pragma once
ref class Orden
{
public:
	void Swap(List^ Lista, int i, int j);
	void SelectionSort(List^ Lista);
	void Shuffle(List^ Lista);
	void ShellSort(List^ Lista);
	int Partition(List^ Lista, int low, int high);
	void QuickSort(List^ Lista, int low, int high);

};
