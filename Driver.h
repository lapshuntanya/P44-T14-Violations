#pragma once
#include "Violation.h"

struct  Driver
{
	char name[100] = "";			//Ім'я водія
	char carNumber[10] = "";		//Номер авто
	int sizeViol = 0;				//Кількість порушень = розмір масиву
	Violation* arrViol = nullptr;	//Масив порушень

	void fillDriver() {
		cout << "Input name: ";
		cin.getline(name, 100);
		cout << "Input number of car (AX1111AX): ";
		cin >> carNumber;
		sizeViol = 1;
		arrViol = new Violation[1];

		arrViol[0].fillViol();
	}

};