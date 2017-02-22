#include <iostream>

long long int min(long long int A, long long int B)
{
	if(A > B)
		return B;
	else
		return A;
}

long long int cats_and_dogs(long long int C, long long int D, long long int L)
{
	if(L % 4 != 0)
		return 0;
	else
	{
		long long int total_pets = C + D;
		total_pets = total_pets - L / 4;
		return (total_pets >= 0 && total_pets <= min(C, D * 2)); 
	}
}

int main()
{
	long int T;
	std::cin >> T;
	while(T--)
	{
		long long int C, D, L;
		std::cin >> C >> D >> L;
		if(cats_and_dogs(C, D, L) == 0)
			std::cout << "no";
		else
			std::cout << "yes";
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}