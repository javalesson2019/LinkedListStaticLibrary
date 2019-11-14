#pragma once
class student
{
public:
	student(const char* name, const char* phone);
	student(const student&);
	student& operator=(const student&);
	~student();
private:
	char* name;
	char* phone;
public:
	char* get_name() const;
	char* get_phone() const;
	void set_name(char* name);
	void set_phone(char* phone);
private:
	void _copy(const student& orig);
};

