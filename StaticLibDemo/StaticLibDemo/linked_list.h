#pragma once
#include "node.h"
#include <ostream>

class linked_list
{
public:
	linked_list();
	linked_list(const linked_list&) = delete;
	linked_list& operator=(const linked_list&) = delete;
	linked_list(linked_list&&) = default;
	linked_list& operator=(linked_list&&) = default;
	virtual ~linked_list();
private:
	int count;
	node* head; // голова списка
	node* tail; // хвост списка
public:
	// ƒобавить нового студента в список, возвращает индекс записи
	int add(student& new_student);
	// ”далить студента по значению. ¬ернуть true - если удалось удалить, false - в противном случае
	bool remove(student& student);
	// ”далить студента по индексу возвращенному методом add. 
	// ¬ернуть true - если удалось удалить, false - в противном случае
	bool remove(int id);
	// –азмер списка
	int size();
	// ѕустой ли список
	bool is_empty();
	friend std::ostream& operator<<(std::ostream&, const linked_list&);
};

