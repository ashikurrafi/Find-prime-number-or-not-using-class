#include<iostream>
using namespace std;
class number
{
public:
	number(void);
	number(int num, int p);
	~number();
	void set_data(int a)
	{
		n = a;
	}
	void display()
	{
		if (prime == 1)
		{
			cout << "Prime";
		}
		else
		{
			cout << "Not prime";
		}
	}

private:
	int n;
	int prime;
	void check_prime()
	{
		prime = 1;
		if (n <= 1)
		{
			prime = 0;
		}
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				prime = 0;
				break;
			}
		}
	}
};

number::number(void)
{
	n = 0;
	prime = 0;
}

number::number(int num, int p)
{
	n = num;
	prime = p;
}

number::~number()
{
}

int main()
{
	int data;
	cout << "Enter a number : ";
	cin >> data;
	number object;
	object.set_data(data);
	object.display();
	return 0;
}