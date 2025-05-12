#pragma once
#include "Violation.h"

struct  Driver
{
	char name[100] = "";			//Ім'я водія
	char carNumber[10] = "";		//Номер авто
	int sizeViol = 0;				//Кількість порушень = розмір масиву
	Violation* arrViol = nullptr;	//Масив порушень



};