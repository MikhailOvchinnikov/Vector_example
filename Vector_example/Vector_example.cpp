// Vector_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::vector<int> vec0;
	std::cout << vec0.capacity() << std::endl;
	vec0.push_back(1);
	std::cout << vec0.capacity() << std::endl;
	vec0.push_back(2);
	std::cout << vec0.capacity() << std::endl << std::endl;
	vec0.push_back(3);
	//Если не задавать начальный размер вектора, то capacity увеличивается на 1


	std::vector<int> vec;
	vec.reserve(4);
	std::cout << vec.capacity() << std::endl;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	std::cout << vec.capacity() << std::endl;
	vec.push_back(6);
	vec.push_back(7);
	std::cout << vec.capacity() << std::endl;
	//При заданному размеру вектора и нехватки в нем памяти, capacity увеличивается на 50%


	std::vector<int> vec_oc;
	vec.reserve(100000000000);

}

