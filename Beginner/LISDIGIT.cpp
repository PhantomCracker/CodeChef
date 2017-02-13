#include <iostream>

int main()
{
	int T;
	std::cin >> T;
	while(T--)
	{
		int n;
		std::cin >> n;
		for(int i = 0; i < n; i++)
		{
			int digit;
			std::cin >> digit;
			std::cout << digit;
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}