#include <iostream>
#include <vector>
#include <algorithm>


class func
{
private:
    int sum;
    int count;
public:
    func() : sum(0), count(0) {}
    int get_sum()
    {
        return sum;
    }
    int get_count()
    {
        return count;
    }
    void operator()(int i)
    {
        if (i % 3 == 0)
        {
            sum += i;
            count++;
        }
    }
};

int main()
{
    func a;
    std::vector <int> v1{ 4, 1, 3, 6, 25, 54 };
    std::cout << "[IN]: ";
    std::for_each(v1.begin(), v1.end(), [](int i) {std::cout << i << ' '; });
    func b = std::for_each(v1.begin(), v1.end(), a);
    std::cout << "\n[OUT]: get_sum() = " << b.get_sum();
    std::cout << "\n[OUT]: get_count() = " << b.get_count();
}