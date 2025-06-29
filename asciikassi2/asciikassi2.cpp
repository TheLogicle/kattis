#include <iostream>
#include <cstdint>

int main ()
{
	uint32_t n;
	std::cin >> n;

	printf(" ");
	for (uint32_t i = 0; i < n; ++i)
	{
		printf(" ");
	}

	printf("x\n");

	for (uint32_t i = 0; i < n; ++i)
	{
		for (uint32_t j = 0; j < n - i; ++j)
		{
			printf(" ");
		}

		printf("/");

		for (uint32_t j = 0; j < 2 * i + 1; ++j)
		{
			printf(" ");
		}

		printf("\\\n");
	}

	printf("x");
	
	for (uint32_t i = 0; i < 2 * n + 1; ++i)
	{
		printf(" ");
	}

	printf("x\n");

	for (uint32_t i = 0; i < n; ++i)
	{
		for (uint32_t j = 0; j < i + 1; ++j)
		{
			printf(" ");
		}

		printf("\\");

		for (uint32_t j = 0; j < 2 * (n - i - 1) + 1; ++j)
		{
			printf(" ");
		}

		printf("/\n");
	}

	printf(" ");
	for (uint32_t i = 0; i < n; ++i)
	{
		printf(" ");
	}

	printf("x\n");

}
