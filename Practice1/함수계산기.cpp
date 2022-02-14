//#include <iostream>
//using namespace std;
//
//
//float Plus(float x,float y)
//{
//	return x + y;
//}
//
//float Minus(float x,float y)
//{
//	return x - y;
//}
//
//float Time(float x, float y)
//{
//	return x * y;
//}
//
//float Div(float x, float y)
//{
//	return (double)x / (double)y;
//}
//
//
//
//
//int Car()
//{
//	float Num1 = 0, Num2 = 0, Sum = 0;
//	int Rep = 0;
//	char Ad = '\n';
//
//
//	cout << "계산할 수, 연산자, 계산할 수 순으로 입력 후 엔터 해 주세요." << endl << "EX)9+3 입력 후 엔터";
//	cout << endl << endl << "계산 할 숫자를 입력해주세요:";
//	while (Rep < 99)
//	{
//		cin >> Num1 >> Ad >> Num2;
//
//		if (Num1 <= -999999999999 || Num2 <= -999999999999 || Num1 >= 999999999999 || Num2 >= 999999999999)
//		{
//			cout << "계산 범위를 초과했어요!!" << endl;
//		}
//
//		else {
//			switch (Ad)
//			{
//			case '+':
//				cout << Num1 << " + " << Num2 << " = " << Plus(Num1, Num2);
//				break;
//
//			case '-':
//				cout << Num1 << " - " << Num2 << " = " << Minus(Num1, Num2);
//				break;
//
//			case '*':
//				cout << Num1 << " * " << Num2 << " = " << Time(Num1, Num2);
//				break;
//
//			case '/':
//				if (Num2 == 0)
//				{
//					cout << "0으로 나눌 수 없습니다!";
//					break;
//				}
//				else
//				{
//					cout << Num1 << " / " << Num2 << " = " << Div(Num1, Num2);
//					break;
//				}
//
//			default:
//				cout << "연산자만 입력하세요!(+,-,*,/)";
//				break;
//			}
//
//			cout << endl;
//		}
//
//	}
//		return 0;
//	
//}
//
//#include <iostream>
//
//int main()
//{
//	int b = 100;
//	int* a = &b ;
//	int* c = &b;
//	
//
//
//
//	std::cout << &b<<std::endl;
//	std::cout << a<<std::endl;
//	std::cout << *a << std::endl;
//	std::cout << *c << std::endl;
//	std::cout << &b << std::endl;
//
//
//
//
//
//
//
//	return 0;
//}