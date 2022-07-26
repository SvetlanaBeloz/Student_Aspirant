#include "Postgraduate.h"

int main()
{
	Student first;
	std::cout << first.GetAge() << std::endl;
	std::cout << first.GetName() << std::endl;
	std::cout << first.GetSurname() << std::endl;

	Student second("Alex", "Aleksandrov", 30);
	std::cout << second.GetAge() << std::endl;
	std::cout << second.GetName() << std::endl;
	std::cout << second.GetSurname() << std::endl;
	
	Postgraduate third;
	std::cout << third.GetAge() << std::endl;
	std::cout << third.GetName() << std::endl;
	std::cout << third.GetSurname() << std::endl;
	std::cout << third.GetPhD_topic() << std::endl;

	Postgraduate fourth("Alex", "Aleksandrov","C++", 30);
	std::cout << fourth.GetAge() << std::endl;
	std::cout << fourth.GetName() << std::endl;
	std::cout << fourth.GetSurname() << std::endl;
	std::cout << fourth.GetPhD_topic() << std::endl;


	

}

