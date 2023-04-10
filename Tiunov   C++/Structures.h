#pragma once

#include <iostream>

struct person {
	std::string name = " noname";
	int age;
	std::string jop = "empty";
	int salary = 0;
	};

void print_person(const person& P);


