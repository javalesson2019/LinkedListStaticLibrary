// UsingStaticLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "student.h"
#include "linked_list.h"

int main()
{
	student s("Вася", "+380911234567");
	linked_list group;

	group.add(s);

	std::cout << group << std::endl;
}

