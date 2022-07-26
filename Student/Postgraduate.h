#pragma once
#include "Student.h"


class Postgraduate : public Student
{
protected:

	std::string PhD_topic;

public:

	Postgraduate();
	Postgraduate(std::string name, std::string surname, std::string PhD_topic, int age);

	void SetPhD_topic(std::string PhD_topic);
	std::string GetPhD_topic() const;
	
};

