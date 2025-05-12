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

	}

};