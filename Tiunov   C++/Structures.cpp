#include "Structures.h"
#include <iostream>
//#include "Data.h" // дублируется т.к дублируется объявление в переменных
//объявление


extern int _A; //модификатор переменной
//переменной указывающий на то что она 
//е объявлена в каком-либо другом файле


void print_person(const person& P){
	std::cout << "Имя:         " << P.name << std::endl;
	std::cout << "Возраст:     " << P.age << std::endl;
	std::cout << "Должность:   " << P.jop << std::endl;
	std::cout << "ЗП:          " << P.salary << std::endl;
	std::cout << "A = " << _A << std::endl;
}
