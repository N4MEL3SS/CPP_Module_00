#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = (char)std::toupper(argv[i][j]);

		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
