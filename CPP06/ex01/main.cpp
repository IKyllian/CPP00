#include <iostream>

struct Data {
	int id;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data;
	uintptr_t nbr;

	data = new Data;
	data->id = 4;

	std::cout << "Data = " << data << std::endl;
	nbr = serialize(data);
	std::cout << "nbr = " << &nbr << std::endl;
	data = deserialize(nbr);
	std::cout << "Data = " << data << std::endl;
	std::cout << "id = " << data->id << std::endl;
	delete data;
	return (0);
}