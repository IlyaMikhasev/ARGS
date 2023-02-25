#include <iostream>
#include <string>
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	std::string strN1=argv[1], strN2=argv[3], strCh=argv[2];
	int num1 = std::stoi(strN1), num2 = std::stoi(strN2),tmp=0;
	char sym = static_cast<char> (strCh[0]);
	switch (sym){
	case '+':std::cout << num1 + num2; break;
	case '-':std::cout << num1 - num2; break;
	case '*':std::cout << num1 * num2; break;
	case '/':
		if (num2 == 0) {
			std::cout << "Деление на ноль запрещено!\n";
		}
		else
		{
			std::cout <<static_cast<double>(num1 / num2);
		}				
	 break;
	case '^':
		tmp = num1;
		if (num2 == 0) {
			std::cout << 1;
			return 0;
		}
		for (int i = 1; i < num2; i++) {
			num1 *= tmp;
		}
		std::cout << num1;	break;
	default:break;
	}
	return 0;
}