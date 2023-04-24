#include <iostream>
#include <string>
#include <cmath>
#include "argument.h"
#include "id_input.h"
#include "matesh.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	std::string str_namber;
	std::string str_namber2;
	int id;
	char znak;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	std::cout << "V4                                                 ����������� ��� �������" << std::endl;
	std::cout << "����� �������� ���������� ������� �� ����� D, ��������� ������ ������ �� ����������.\n����� � ����� ����������� +-*/ ����� ������� ������ ������ 2 + 2, 2 * 2 � ��.\n������:_ ��� ������\n�����:t ��� �������\n�����:i ��� in\n�����:d ��� log10\n�����:s ��� sin\n�����:c ��� cos\n�����:a ��� arcsin\n�����:r ��� arccos\n�����:g ��� arctg(x)\n�����:G ��� arctg(x, y)" << std::endl<<std::endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		id_input(&id);
		double* namber1 = new double;
		double* namber2 = new double;
		if (id == 33)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			std::cout << factorial(*namber1) << std::endl;
		}
		else if (id == 95)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			koren(&namber1);
		}
		else if (id == 84 || id == 116)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			tang(&namber1);
		}
		else if (id == 73 || id == 105)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			inch(&namber1);
		}
		else if (id == 100)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			lg(&namber1);
		}
		else if (id == 115)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			sin2(&namber1);
		}
		else if (id == 99)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			cos2(&namber1);
		}
		else if (id == 97)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			arcs(&namber1);
		}
		else if (id == 114)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			arcc(&namber1);
		}
		else if (id == 103)
		{
			std::cin >> str_namber;
			input2(&str_namber, *namber1);
			arct(&namber1);
		}
		else if (id == 71)
		{
			std::cin >> str_namber >> str_namber2;
			input(str_namber, *namber1, str_namber2, *namber2);
			arcg(&namber1, &namber2);
		}
		else
		{
			std::cin >> str_namber >> znak >> str_namber2;
			input(str_namber, *namber1, str_namber2, *namber2);
			switch (znak)
			{
			case('+'):
				plus(&namber1, &namber2);
				break;
			case('-'):
				minus(&namber1, &namber2);
				break;
			case('*'):
				umnoh(&namber1, &namber2);
				break;
			case('/'):
				delit(&namber1, &namber2);
				break;
			case('^'):
				step(&namber1, &namber2);
				break;
			default:
				break;
			}

		}

		delete namber1;
		namber1 = nullptr;
		delete namber2;
		namber2 = nullptr;
		system("pause");
		std::cout << std::endl;
	}
	return 0;
}