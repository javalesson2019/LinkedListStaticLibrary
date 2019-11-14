#include "stdafx.h"
#include "node.h"


node::node(student& stud, node* next): student_(stud), next_(next)
{
}


node* node::get_next() const
{	
	return next_;
}


student& node::get_student()
{
	return student_;
}


void node::set_next(node *next)
{
	next_ = next;
}


void node::set_student(student& stud)
{
	student_ = stud;
}
