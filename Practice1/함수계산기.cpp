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
//	cout << "����� ��, ������, ����� �� ������ �Է� �� ���� �� �ּ���." << endl << "EX)9+3 �Է� �� ����";
//	cout << endl << endl << "��� �� ���ڸ� �Է����ּ���:";
//	while (Rep < 99)
//	{
//		cin >> Num1 >> Ad >> Num2;
//
//		if (Num1 <= -999999999999 || Num2 <= -999999999999 || Num1 >= 999999999999 || Num2 >= 999999999999)
//		{
//			cout << "��� ������ �ʰ��߾��!!" << endl;
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
//					cout << "0���� ���� �� �����ϴ�!";
//					break;
//				}
//				else
//				{
//					cout << Num1 << " / " << Num2 << " = " << Div(Num1, Num2);
//					break;
//				}
//
//			default:
//				cout << "�����ڸ� �Է��ϼ���!(+,-,*,/)";
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