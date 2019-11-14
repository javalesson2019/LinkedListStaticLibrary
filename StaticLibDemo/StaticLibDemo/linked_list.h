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
	node* head; // ������ ������
	node* tail; // ����� ������
public:
	// �������� ������ �������� � ������, ���������� ������ ������
	int add(student& new_student);
	// ������� �������� �� ��������. ������� true - ���� ������� �������, false - � ��������� ������
	bool remove(student& student);
	// ������� �������� �� ������� ������������� ������� add. 
	// ������� true - ���� ������� �������, false - � ��������� ������
	bool remove(int id);
	// ������ ������
	int size();
	// ������ �� ������
	bool is_empty();
	friend std::ostream& operator<<(std::ostream&, const linked_list&);
};

