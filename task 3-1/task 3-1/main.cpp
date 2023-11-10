#include <iostream>
#include <vector>

template<typename T>
T square(T x1)
{
	return x1 *= x1;
}

template<typename T>
std::vector <T> square(std::vector <T> x1)
{
	for (int i = 0; i != x1.size(); ++i)
	{
		x1[i] *= x1[i];
	}
	return x1;
}

int main()
{
	std::vector <int> v2;
	int x2 = 0;
	int x1 = 4;
	std::cout << "[IN]: " << x1 << std::endl;
	x2 = square(x1);
	std::cout << "[OUT]: " << x2 << std::endl;
	std::vector <int> v1{-1, 4, 8};
	std::cout << "[IN]: ";
	for (const auto& i : v1)
	{
		std::cout << i << ", ";
	}
	std::cout << "\n[OUT]: ";
	v2 = square(v1);
	for (const auto& i : v2)
	{
		std::cout << i << ", ";
	}

}