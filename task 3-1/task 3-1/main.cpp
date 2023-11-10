#include <iostream>
#include <vector>

template<typename T>
T square(T& x1)
{
	return x1 * x1;
}

template<typename T>
T square_vec(T& x1)
{
	for (int i = 0; i != x1.size(); ++i)
	{
		x1[i] *= x1[i];
	}
	return x1;
}

int main()
{
	int x1 = 4;
	std::cout << "[IN]: " << x1 << std::endl;
	std::cout << "[OUT]: " << square(x1) << std::endl;
	std::vector <int> v1{-1, 4, 8};
	std::cout << "[IN]: ";
	for (const auto& i : v1)
	{
		std::cout << i << ", ";
	}
	std::cout << "\n[OUT]: ";
	square_vec(v1);
	for (const auto& i : v1)
	{
		std::cout << i << ", ";
	}

}