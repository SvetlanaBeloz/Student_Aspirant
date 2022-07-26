#include "Student.h"

Student::Student() : Student("Ivan", "Ivanov", 20)
{
	std::cout << "Constructor without param" << std::endl;
}
Student::Student(std::string name, std::string surname, int age)
{
	SetName(name);
	SetSurname(surname);
	SetAge(age);
	std::cout << "Constructor with param" << std::endl;
}

void Student::SetName(std::string name)
{
	bool correct = true;
	for (int i = 0; i < name.length(); i++)
		if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
			continue;
		else correct = false;
	if (correct) this->name = name;
	else std::cout << "Incorrect name" << std::endl;
}

void Student::SetSurname(std::string surname)
{
	bool correct = true;
	for (int i = 0; i < name.length(); i++)
		if ((surname[i] >= 'a' && surname[i] <= 'z') || (surname[i] >= 'A' && surname[i] <= 'Z'))
			continue;
		else correct = false;
	if (correct) this->surname = surname;
	else std::cout << "Incorrect surname" << std::endl;
}

void Student::SetAge(int age)
{
	if (age <= 0 && age > 100)
		throw std::exception("Age is not coorect!");
	this->age = age;
}

std::string Student::GetName() const
{
	return name;
}

std::string Student::GetSurname() const
{
	return surname;
}

int Student::GetAge() const
{
	return age;
}
