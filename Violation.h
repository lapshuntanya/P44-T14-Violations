#pragma once
#include "Date.h"

struct Violation
{
	//Властивості
	Date dateViol;			//Дата порушення
	char info[100] = "";	//Опис порушення
	float fine = 0;			//Сума штрафу

	//Методи
	void fillViol() {
		cout << "Input date of violation (dd mm yyyy): ";
		//cin >> dateViol.day >> dateViol.month >> dateViol.year;
		dateViol.fillDate(); // cout+cin 
		
		cout << "Input info: ";
		//cin.ignore();
		cin.getline(info, 100);

		cout << "Input fine: ";
		cin >> fine;
	}

	void printViol() {
		cout << "\t Date: " << dateViol.toString() << " Fine: " << fine << "UAH. => " << info << endl;
	}

};