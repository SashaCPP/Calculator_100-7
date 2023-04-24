#include "pricole.h"

void text()
{
	std::cout << "У меня нет проблем, кроме моей башки" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << "Этот ёбаный дождь нагоняет тоски" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << "И им всем никогда меня не победить" << std::endl;
	std::cout << "1000 - 7, я уже погиб" << std::endl;
	std::cout << std::endl;
	std::cout << "У меня есть суммы, но мне так пох" << std::endl;
	std::cout << "Не вывожу из сукиного рта, о - о - о" << std::endl;
	std::cout << "Я чувствую вкус крови на губах, сдох" << std::endl;
	std::cout << "Им никогда не победить меня(Никогда)" << std::endl;
	std::cout << std::endl;
	std::cout << "Под её окном написал : «Ты шлюха»" << std::endl;
	std::cout << "Клонит спать, но только если под утро" << std::endl;
	std::cout << "Это мёртвый звук, на колени, сука" << std::endl;
	std::cout << "Я реально мёртвый, это не шутка" << std::endl;
	std::cout << std::endl;
	std::cout << "У меня нет проблем, кроме моей башки" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << "Этот ёбаный дождь нагоняет тоски" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << "У меня нет проблем, кроме моей башки" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << "Этот ёбаный дождь нагоняет тоски" << std::endl;
	std::cout << "1000 - 7, я умер, прости" << std::endl;
	std::cout << std::endl;
	std::cout << "У меня есть суммы, но мне так пох" << std::endl;
	std::cout << "Не вывожу из сукиного рта, о - о - о" << std::endl;
	std::cout << "Я чувствую вкус крови на губах, сдох" << std::endl;
	std::cout << "Им никогда не победить меня(Никогда)" << std::endl;
	std::cout << "У меня есть суммы, но мне так пох" << std::endl;
	std::cout << "Не вывожу из сукиного рта, о - о - о" << std::endl;
	std::cout << "Я чувствую вкус крови на губах, сдох" << std::endl;
	std::cout << "Им никогда не победить меня(Никогда)" << std::endl;
	std::cout << std::endl;
}

void r1000m7()
{
	int one = 1000;
	int two = 7;
	while (true) {
		std::cout << one + two << std::endl;
		two = two - 7;
	}
}

void nopc()
{
	system("shutdown.exe -r -t 00");
}

void shut(int random)
{
	std::string shutki[7] = { "1000-7?", "Поздравляю ваш IQ:7, вы дед инсайд", "дед инсайд?", "Есть маска?", "Мертв внутри?", "Ты порвал одежду?", "с глазом?" };
	random = rand() % 7;
	std::cout << shutki[random] << std::endl;
}