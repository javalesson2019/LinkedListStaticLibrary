#include "stdafx.h"
#include "linked_list.h"
#include <iostream>


linked_list::linked_list(): head(nullptr), tail(nullptr), count(0)
{
}


linked_list::~linked_list()
{
}


// Добавить нового студента в списко
int linked_list::add(student& new_student)
{
	node* new_node = new node(new_student);
	if(head == nullptr) // это первый узел в списке
	{
		head = tail = new_node;
	}
	else
	{
		tail->set_next(new_node);
		tail = new_node;
	}
	
	return count++;
}


// Удалить студента
bool linked_list::remove(student& stud)
{
	return true;
}


bool linked_list::remove(int id)
{
	return true;
}

// Размер списка
int linked_list::size()
{	
	return count;
}


// Пустой ли список
bool linked_list::is_empty()
{
	return count == 0;
}

std::ostream& operator<<(std::ostream& stream, const student& student);

std::ostream& operator<<(std::ostream& stream, const linked_list& list)
{
	node* cur = list.head;

	while (cur != nullptr)
	{
		std::cout << cur->get_student() << std::endl;
		cur = cur->get_next();
	}

	return stream;
}