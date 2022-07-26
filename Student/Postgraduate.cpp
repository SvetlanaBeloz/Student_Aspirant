#include "Postgraduate.h"

Postgraduate::Postgraduate() : Postgraduate("Ivan", "Ivanov", "OOP", 20)
{
	std::cout << "Constructor Postgraduate without param" << std::endl;
}
Postgraduate::Postgraduate(std::string name, std::string surname, std::string PhD_topic, int age) : Student(name, surname, age)
{
	SetPhD_topic(PhD_topic);
	std::cout << "Constructer Postgraduate with param" << std::endl;
}

void Postgraduate::SetPhD_topic(std::string PhD_topic)
{
	this->PhD_topic = PhD_topic;
}

std::string Postgraduate::GetPhD_topic() const
{
	return PhD_topic;
}

