#include <iostream>
#include<cstdlib>
using namespace std;

enum DigitType { SpcialChar = 1, Number = 2, SmallLetter = 3, CapitalLetter = 4 };

#pragma region Functions
char RandomDigit(int from,int to) {
	
	int random = (rand() % (to - from + 1)) + from;

	return char(random);
}

void PrintDigit(DigitType x) {
	switch(x){
	case DigitType::SpcialChar: {
		cout << RandomDigit(21, 47) << endl;
		break;
	}
	case DigitType::Number: {
		cout << RandomDigit(48, 57) << endl;
		break;
	}
	case DigitType::CapitalLetter: {
		cout << RandomDigit(65, 90) << endl;
		break;
	}
	case DigitType::SmallLetter: {
		cout << RandomDigit(97, 122) << endl;
		break;
	}

	};

}
#pragma endregion

int main()
{
#pragma region Input
	srand((unsigned)time(NULL));
#pragma endregion

#pragma region Output

	PrintDigit(DigitType::CapitalLetter);
	PrintDigit(DigitType::SmallLetter);
	PrintDigit(DigitType::SpcialChar);
	PrintDigit(DigitType::Number);

	

#pragma endregion
return 0;
}
