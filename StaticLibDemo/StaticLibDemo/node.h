#pragma once
#include "student.h"

class node
{
public:
	node(student& stud, node* next = nullptr);
	node(const node&) = delete;
	node& operator=(const node&) = delete;
	node(node&&) = default;
	node& operator=(node&&) = default;
	virtual ~node() = default;
private:
	student student_;
	node* next_;
public:
	node* get_next() const;
	student& get_student();
	void set_next(node*);
	void set_student(student&);
};

