#include "id_input.h"

void id_input(int* id)
{
	*id = _getch();
	switch (*id)
	{
	case(8):
		std::cout << std::endl;
		id_input(id);
		break;
	case(95):
		std::cout << "_";
		break;
	case(68):
		instuct();
		id_input(id);
		break;
	case(208):
		instuct();
		id_input(id);
		break;
	case(33):
		std::cout << "!";
		break;
	case(27):
		exit(0);
		break;
	case(32):
		std::cout << "";
		break;
	case(40):
		std::cout << "извините такой функции еще нетуб но я усердно работаю над этой функцией";
		break;
	case(41):
		std::cout << "извините такой функции еще нетуб но я усердно работаю над этой функцией";
		break;
	case(48):
		std::cout << "";
		break;
	case(49):
		std::cout << "";
		break;
	case(50):
		std::cout << "";
		break;
	case(51):
		std::cout << "";
		break;
	case(52):
		std::cout << "";
		break;
	case(53):
		std::cout << "";
		break;
	case(54):
		std::cout << "";
		break;
	case(55):
		std::cout << "";
		break;
	case(56):
		std::cout << "";
		break;
	case(57):
		std::cout << "";
		break;
	case(84):
		std::cout << "tg:";

		break;
	case(116):
		std::cout << "tg:";

		break;
	case(73):
		std::cout << "in:";

		break;
	case(105):
		std::cout << "in:";

		break;
	case(100):
		std::cout << "log10:";

		break;
	case(115):
		std::cout << "sin:";

		break;
	case(99):
		std::cout << "cos:";

		break;
	case(97):
		std::cout << "arcsin:";

		break;
	case(114):
		std::cout << "arccos:";

		break;
	case(103):
		std::cout << "arctg(1):";

		break;

	case(71):
		std::cout << "arctg(2):";

		break;
	default:
		std::cout << "eror ";
		exit(0);
	}
}