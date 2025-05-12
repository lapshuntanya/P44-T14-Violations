#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"

struct  Driver
{
	char name[100] = "";			//Ім'я водія
	char carNumber[10] = "";		//Номер авто
	int sizeViol = 0;				//Кількість порушень = розмір масиву
	Violation* arrViol = nullptr;	//Масив порушень

	void fillDriver() {
		cout << "Input name: ";
		cin.getline(name, 100);
		cout << "Input number of car (AX0000AX): ";
		cin >> carNumber;
		sizeViol = 1;
		arrViol = new Violation[1];

		arrViol[0].fillViol();
	}

	void printDriver() {
		cout << "==================================\n";
		cout << "Driver: " << name << endl;
		cout << "Car:    " << carNumber << endl;
		cout << "Amount of viol: " << sizeViol << endl;
		for (int i = 0; i < sizeViol; i++)
		{
			cout << i + 1 << " ";
			arrViol[i].printViol();
		}
		cout << "==================================\n";
	}

	void addNewViolation() {
		Violation temp;
		temp.fillViol();

		addItemBack(arrViol, sizeViol, temp);
	}

	float calcTotalFines() {
		float sum = 0;
		for (int i = 0; i < sizeViol; i++)
		{
			sum += arrViol[i].fine;
		}
		return sum;
	}
};