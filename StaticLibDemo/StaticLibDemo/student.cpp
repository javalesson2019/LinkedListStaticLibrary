#include "stdafx.h"
#include <cstring>
#pragma  warning(disable: 4996)

student::student(const char* name, const char* phone)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->phone = new char[strlen(phone) + 1];
	strcpy(this->phone, phone);
}

student::student(const student& orig): name(nullptr), phone(nullptr)
{
	_copy(orig);
}

student& student::operator=(const student& orig)
{
	_copy(orig);
	return *this;
}


student::~student()
{
	delete[] name;
	delete[] phone;
}


char* student::get_name() const
{	
	return name;
}


char* student::get_phone() const
{	
	return phone;
}


void student::set_name(char* name)
{
	if (this->name) delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}


void student::set_phone(char* phone)
{
	if (this->phone) delete[] this->phone;
	this->phone = new char[strlen(phone) + 1];
	strcpy(this->phone, phone);
}


void student::_copy(const student& orig)
{
	set_name(orig.name);
	set_phone(orig.phone);
}

std::ostream& operator<<(std::ostream& stream, const student& student)
{
	stream << "Name: " << student.get_name() << " " << " Phone: " << student.get_phone();
	return stream;
}
