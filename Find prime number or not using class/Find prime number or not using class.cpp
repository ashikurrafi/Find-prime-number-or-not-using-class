#include<iostream>
using namespace std;
class number
{
public:
	number(void);
	number(int n);
	int set_data(int num);
    void check_prime_or_not();

	~number();

private:
	int x;
};

number::number(void)
{
	x = 0;
}

number::number(int n)
{
	x = n;
}

int number::set_data(int num)
{
	return x = num;
}

void number::check_prime_or_not()
{
    int flag = 0;
    for (int i = 2; i < x/2; i++)
    {
        if (x % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (x == 0)
    {
        cout << "0 is neither prime nor composite ";
    }
    else if (x == 1)
    {
        cout << "1 is neither prime nor composite ";
    }
    else if (flag == 0)
    {
        cout << x << " is a prime number";
    }
    else
    {
        cout << x << " is not a prime number";
    }
}

number::~number()
{
}

int main()
{
    int data;
    number object;
    cout << "Enter a numner to check prime or not : ";
    cin >> data;
    object.set_data(data);
    object.check_prime_or_not();
    return 0;
}