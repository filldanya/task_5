#include <iostream>
#include <vector>


class func 
{
private:
	int sum = 0;
	int count = 0;
	std::vector <int> v2;
public:
	func(std::vector <int> v1) : v2(v1) {}
	int get_sum()
	{
		for (const auto& i : v2)
		{
			if (i % 3 == 0)
			{
				sum += i;
			}
		}
		return sum;
	}
	int get_count()
	{
		for (const auto& i : v2)
		{
			if (i % 3 == 0)
			{
				count++;
			}
		}
		return count;
	}
	/*void operator()()
	{
		for (const auto& i : v2)
		{
			if (i % 3 == 0)
			{
				sum += i;
				count++;
			}
		}
		std::cout << "\n[OUT]: get_sum() = " << sum;
		std::cout << "\n[OUT]: get_count() = " << count;
	}*/
};

int main()
{
	std::vector <int> v1{4, 1, 3, 6, 25, 54};
	std::cout << "[IN]: ";
	for (const auto& i : v1) 
	{
		std::cout << i << ", ";
	}
	func a(v1);
	std::cout << "\n[OUT]: get_sum() = " << a.get_sum();
	std::cout << "\n[OUT]: get_count() = " << a.get_count();
}
