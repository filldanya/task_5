#include <iostream>

template<typename T>
class table
{
private:
	int _row = 0;
	int _col = 0;
	T** _arr;
public:
	table(int row, int col) : _row(row), _col(col)
	{
		_arr = new T * [_row];
		for (int i = 0; i != _row; ++i)
		{
			_arr[i] = new T[_col];
		}
	}
	~table()
	{
		for (int i = 0; i != _row; ++i)
		{
			delete[] _arr[i];
		}
		delete[] _arr;
	}
	T* operator [](const int i)const { return _arr[i]; }
	T* operator [](int i) { return _arr[i]; }
};

int main() 
{
	auto test = table<int>(2, 3);
	test[0][0] = 4;
	std::cout << test[0][0];
}