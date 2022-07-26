#pragma once
#include <iostream>

class Student
{
protected:
	std::string name;
	std::string surname;
	int age;

public:

	Student();
	Student(std::string name, std::string surname, int age);

	void SetName(std::string name);
	void SetSurname(std::string surname);
	void SetAge(int age);

	std::string GetName() const;
	std::string GetSurname() const;
	int GetAge() const;

};

