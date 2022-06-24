#include <iostream>

long long balance = 1000L;

void add_balance(long long sum) // Add to current balance specified sum
{
	balance = sum;
}

int main()
{
	long long sum = 0L;
	std::cout << "Enter sum: ";
	std::cin >> sum;

	add_balance(sum);
	
	return 0;
}
