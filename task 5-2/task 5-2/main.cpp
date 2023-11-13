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
	T* operator [](const int i)const 
	{ 
		if (i > _row - 1 || i < 0)
		{
			throw "BAD_INDEX!!!";
		}
		return _arr[i]; 

	}
	T* operator [](int i) 
	{ 
		if (i > _row - 1 || i < 0)
		{
			throw "BAD_INDEX!!!";
		}
		return _arr[i]; 
	}

	table& operator=(const table&) = delete;
	table(const table&) = delete;
};

int main() 
{
	try
	{
		table<int> test(2, 3);
		test[0][0] = 4;
		std::cout << test[0][0];
	}
	catch (const char* e)
	{
		std::cout << e;
	}
}