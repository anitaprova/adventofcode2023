#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <vector>

int main()
{
	std::ifstream file("day1input.txt");
	std::ifstream file2("example");
	std::string str = "";
	int calibration_value = 0;

	while (file >> str)
	{
		std::vector<std::string> num;
		for (int i = 0; i < str.size(); i++)
		{
			if (isdigit(str[i]))
			{
				std::string temp(1, str[i]);
				num.push_back(temp);
			}
			else if (str[i] == 'o')
			{
				if (i + 2 < str.size() && str.substr(i, 3) == "one")
				{
					num.push_back("1");
				}
			}
			else if (str[i] == 't')
			{
				if (i + 2 < str.size() && str.substr(i, 3) == "two")
				{
					num.push_back("2");
				}
				else if (i + 4 < str.size() && str.substr(i, 5) == "three")
				{
					num.push_back("3");
				}
			}
			else if (str[i] == 'f')
			{
				if (i + 3 < str.size() && str.substr(i, 4) == "four")
				{
					num.push_back("4");
				}
				else if (i + 3 < str.size() && str.substr(i, 4) == "five")
				{
					num.push_back("5");
				}
			}
			else if (str[i] == 's')
			{
				if (i + 2 < str.size() && str.substr(i, 3) == "six")
				{
					num.push_back("6");
				}
				else if (i + 4 < str.size() && str.substr(i, 5) == "seven")
				{
					num.push_back("7");
				}
			}
			else if (str[i] == 'e')
			{
				if (i + 4 < str.size() && str.substr(i, 5) == "eight")
				{
					num.push_back("8");
				}
			}
			else if (str[i] == 'n')
			{
				if (i + 3 < str.size() && str.substr(i, 4) == "nine")
				{
					num.push_back("9");
				}
			}
		}
		std::string current_value = num[0] + num[num.size() - 1];
		calibration_value += stoi(current_value);
	}
	std::cout << calibration_value << std::endl;

	return 0;
}