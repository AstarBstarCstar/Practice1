/*#include <iostream>
using namespace std;
int main()
{

	int Num1=0;
	int Num2=0;
	int Sum = 0;
	char op;

	cout << "Num1�Է�= ";
	cin >> Num1;

	cout <<endl<< "�������Է�(+,-,*,/)=";
	cin >> op;

	cout << endl << "Num2�Է�=";
	cin >> Num2;
	cout << endl;

	if (op=='+') {

		Sum = Num1 + Num2;
		cout << Num1 << "+" << Num2 << "=" << Sum;


	}

	else if (op=='-') {

		Sum = Num1 - Num2;
		cout << Num1 << "-" << Num2 << "=" << Sum;


	}

	else if (op=='*') {

		Sum = Num1 * Num2;
		cout << Num1 << "*" << Num2 << "=" << Sum;

	}

	else if (op == '/') {

		if (Num2 == 0) { cout << "0���� ���� �� ����!" << endl; }

		else  {
		Sum = Num1 / Num2;
		cout << Num1 << "/" << Num2 << "=" << Sum;
	}

	}

	else {
		cout << "�����ڸ� �Է��ϼ���" << endl;
	}

	return 0;
}*/


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a = 10;
//	int Target = 10;
//	char Sel;
//
//	//���� : ���� �׻� ���ϴ� ��
//	//��� : ���� �׻� ������ �� EX)�׳� ���� ������
//
//
//	bool isTest = true;
//	int Num = 0;
//	cout << "���ڸ� �Է��ϰŶ�=";
//	cin >> Num;
//	cout <<endl<< "Ȯ���Ѱ���?(y/n)" << endl;
//
//	cin >> Sel;
//	if (Sel == 'y') {
//
//
//
//		if (Num == Target) {
//			cout << Num << "��" << Num << "�̴�" << endl;
//		}
//		else if (Num < Target) {
//			cout << Num << "��" << "10�����۴�" << endl;
//
//		}
//		else {
//			cout << Num << "�� 10���� ũ��" << endl;
//		}
//	}
//
//	else if (Sel == 'n') {
//       
//		cout << endl<<"�׷� �ٽ� ������=" << endl;
//		
//	}
//
//	return 0;
//}

//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//	int Num1=0;
//	int Num2=0;
//
//	char Op;
//
//	int Sum=0;
//	
//
//	switch (Op) {
//
//	case '+':
//		Sum = Num1 + Num2;
//		cout << Sum << endl;
//		break;
//
//	case '-':
//		Sum = Num1 - Num2;
//		cout << Sum << endl;
//		break;
//
//
//
//	case '*':
//		Sum = Num1 * Num2;
//		cout << Sum << endl;
//		break;
//
//
//	case '/':
//		if (Num2 >= 1) {
//		Sum = Num1 / Num2;
//		cout << Sum << endl;
//		break;
//	}
//		else if (Num2 == 0) {
//			cout << "0���� �������µ�" << endl;
//		}
//
//	default:
//		cout << "����!" << endl;
//		break;
//
//
//
//
//
//	}
//
//
//
//
//
//
//	return 0;
//}
//�߰�ȣ�� ����� �Ȱ��� ������ �� �� ����.

//
//#include <iostream>
//#include <string>//���ڿ� ������ �Լ�
//using namespace std;
//int main() {
//
//	int i=0;
//	int a=0;
//	int b=0;
//	int c=0;
//	cout << "1���� 10������ ¦���� ����մϴ�:";
//
//	
//
//
//
//
//	
//	for (i = 0; i <= 10; i++) {
//
//
//		c = i % 2;
//
//		if (c == 0 && i >=1) {
//
//			cout << i << " ";
//		}
//
//
//
//	}
//
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	for (b = 0; b < 5; b++) //���η� 5�� ���� for
//{
//	for (a = 0; a < 3; a++) //���η� 3�� ������ Ż�� 
//	{
//
//		cout << "�ȳ� ";
//
//	}
//	cout << endl<<endl;
//}
//	return 0;
//}
// 
// �����
//#include <iostream>
//using namespace std;
//int main()
//{
//	int Row=0;
//	int Column=0;
//	int Star=0;
//
//
//	for (Row = 1; Row < 7; Row++) 
//	{
//
//		for(Column=0; Column < 7-Row; Column++)
//		{
//			cout << " " ;
//		}
//		for (Star = 0; Star<Row; Star++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int Input=0;
//
//	while (Input != 99)
//	{
//		cin >> Input;
//
//		cout << "�Է°���" << Input << "�̴�." << endl;
//	}
//
//
//
//
//	return 0;
//}


///*3���� �Լ�*/
//
//�Լ��� ���
//��ǲ�� ������ �ƿ�ǲ�� �ִ�.
//�Լ��� ����
//������Ÿ�� �Լ���(){ }
//#include <iostream>
//using namespace std;
//
//void Func();
//int Sum(int input1,int input2);
//float Sum(float Test, float Test2);
//void Drawstar();
//void Drawstar(int input);
//
//int main()
//{
//
//	cout << Func << endl;
//
//	cout << Sum(10, 20) << endl;
//	cout << Sum(10.5f, 20.5f) << endl;//�Ű������� ���缭 �Լ��̸��� ���Ƶ�, ������ ���� ��. 3.5>>sum float  3 >> sum int ��. 
//	//Drawstar(); //�Ű������� ������ �⺻���ΰ�
//	Drawstar(50); //�Ű������� ������ ��ǲ���ΰ�
//
//	Drawstar(Sum(Sum(1, 2),Sum(1,2)));
//
//	return 0;
//}
//
//
//void Drawstar()
//{
//	cout << "*" << endl;
//}
////����Ʈ �Ű�����
////ȣ���� �� 
//void Drawstar(int input=1)
//{
//	for (int i = 0; i < input; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//
//void Func()//�Լ��� �Ǳ�� ���� (�Լ��� ����)
//{
//	cout << "func�׽�Ʈ�׽�Ʈ" << endl;
//}
//
//int Sum(int input1, int input2)
//{
//	return input1 + input2;
//}
//
//// �Լ��� �̸��� ���������� �Ű������� ���̷� �ٸ� ����� �����ϴ°��� �Լ��� �����ε��̶�� �Ѵ�. �׷��ϱ� �̸��� ������ ������ �ٸ�
//float Sum(float Test, float Test2)
//{
//	return Test + Test2;
//}
 
//#include <iostream>
//using namespace std;
//
//void Swap(int input1, int input2)
//{
//	int temp;
//	temp = input1;
//	input1 = input2;
//	input2 = temp;
//}
//void SSap(int& input1, int& input2)
//{
//	int temp;
//	temp = input1;
//	input1 = input2;
//	input2 = temp;
//}
//
//void star1(int k=5,int j=5)//1������
//{
//		int C, R, s;
//		for (C = 0; C < k; C++)
//	{
//		for (R = 0; R < j; R++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//void star2(int k = 5, int j = 5)//2������
//{
//	int C, R, s;
//	for (C = 0; C < k + 1; C++)//k�� ���ΰ� ex)5
//	{
//		for (R = j; R > k - C; R--)//j�� ���ΰ� ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}
//void star3(int k = 5, int j = 5)//3������
//{
//	int C, R, s;
//	for (C = 0; C < k; C++)//k�� ���ΰ� ex)5
//	{
//		for (s = 0; s < C; s++)
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < j - C; R++)//j�� ���ΰ� ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}
//void star4(int k = 5, int j = 5)//4������
//{
//	int C, R, s;
//	for (C = k - j; C < k; C++)//k�� ���ΰ� ex)5
//	{
//		for (s = k - 1; C < s; s--)
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < C + 1 + (j - k); R++)//j�� ���ΰ� ex)5
//		{
//			cout << "*";
//		}
//	  cout << endl;
//	}
//
//}
//void piramid(int k = 5, int j = 5)//5������ �Ƕ�̵�
//{
//	int C, R, s;
//	for (C = 0; C < j; C++)//k�� ���ΰ� ex)5
//	{
//		for (k = j - 1; k > C; k--)//j�� ���ΰ� ex)5
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < 2 * C + 1; R++)//j�� ���ΰ� ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//void unpiramid(int k = 5, int j = 5)//6������ ���Ƕ�̵�
//{
//	int C, R, s;
//	for (C = 0; C < k + 1; C++)//k�� ���ΰ� ex)5
//	{
//		for (j = 0; j < C; j++)
//		{
//			cout << " ";
//		}
//		for (R = 2 * k - 1; R  > C * 2; R--)//j�� ���ΰ� ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	cout << "x���� �Է��ϼ���:";
//		cin >> num1;
//
//	cout << endl << "y���� �Է��ϼ���:";
//		cin >> num2;
//
//	Swap(num1, num2);//������ ������Ÿ��& (������ ������ �����ִ°��̴�)
//
//	cout << "num1�ǿ�����10 : " << num1 << endl;
//	cout << "num2�ǿ�����20 : " << num2 << endl;
//	//�Լ��� ���µ� �ٲ��� ���� ���� : �Ķ���Ϳ� ���� ���� ����Ǽ� ������. �׷��� ���� ����־���. �׷��� �������ο� �����̾���. 
//
//
//	SSap(num1, num2);//Call by Reference �ּҿ� ���� ȣ�� ���� 
//	//SSap�� ���� �ƴ϶� �ּҸ� ���� �ּҸ� �����ؼ� ���͵Ǿ���.
//	//���� �������� ���� �ٲٱ� ���ؼ�  num1, num2�� �ּҸ� �ٲ������ �����ϴ�. 
////	//ex 0x01�� num1 10   0x05�� num2 20�� �������.   0x01�� 0x05�� �ּҸ� �ڹٲٸ� ���� �ٲ��. 
////	//��������� �ּҸ� �����߱� ������, �������� ���� �ٲ����.
////
////	cout << "num1�ǿ�����10 : " << num1 << endl;
////	cout << "num2�ǿ�����20 : " << num2 << endl;
////
////
////	return 0;
////}
////
////
//#include <iostream>
//using namespace std;
//
//void a(int& aple,int& bple)
//{
//	int temp;
//
//	temp = aple;
//	aple = bple;
//	bple = temp;
//
//	cout << "5����" << aple << endl;
//	cout << "10������" << bple << endl;
//}
//
//int main()
//{
//	int aple = 10;
//	int bple = 5;
//	int temp;
//	
//	
//	a(aple,bple);
//
//	cout <<"����10�̾�" << aple << endl;
//	cout <<"����5��" << bple << endl;
//
//	return 0;
//}	

//
//#include <iostream>
//
//int main()
//{
//	int j=0, k=0;
//
//
//
//	for (j = 1; j < 10; j++)
//	{
//		for (k = 1; k < 10; k++)
//		{
//			std::cout << j << " x " << k << " = " << j * k<<std::endl;
//		}
//
//
//	}
//
//
//
//
//
//	return 0;
//}

// Const >>������ ���� �������ѹ���. ex const int a = 0; >> a���� 0���� ������Ŵ. a���� �����Ϸ� �ϸ�, ��������

//#include <iostream>
//
//int a = 30;
//int* p = &a;
//
//int main()
//{
//	
//	std::cout << *p<<std::endl;
//	std::cout << p<<std::endl;
//
//	std::cout << "����a��" << a << std::endl;
//	std::cout << "����a�� �ּҾ�" << &a << std::endl;
//
//
//
//	return 0;
//}


//#include <iostream>
//int main() {
//	int arr[10] = { 2, 10, 30, 21, 34, 23, 53, 21, 9, 1 };
//	int i;
//	for (i = 0; i < 10; i++) {
//
//		std::cout << "arr��" << i << "��° ��" << arr[i] << std::endl;
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <conio.h>
//using namespace std;
//int main()
//{
//	int i;
//	int z;
//	int y;
//	int x;
//	int Map[10][10][10] =
//	{
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		},
//		{
//			{1,1,1,1,1,1,1,1,1,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,0,2,0,0,0,0,2,0,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,0,2,2,0,3,3,1},
//			{1,0,0,2,0,0,2,0,0,1},
//			{1,0,2,0,9,0,0,2,0,1},
//			{1,2,0,0,0,0,0,0,2,1},
//			{1,1,1,1,1,1,1,1,1,1}
//		}
//	};
//
//	for (int z = 0; z < 10; z++)
//	{
//		for (int y = 0; y < 10; y++)
//		{
//			for (int x = 0; x < 10; x++)
//			{
//				if (Map[z][y][x] == 0)
//					cout << "  ";
//				else if (Map[z][y][x] == 1)
//					cout << "��";
//				else if (Map[z][y][x] == 2)
//					cout << "��";
//				else if (Map[z][y][x] == 3)
//					cout << "��";
//				else if (Map[z][y][x] == 9)
//					cout << "��";
//			}
//			cout << endl;
//
//		}
//	
//	}
//	//
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//
//
//void SSANG(int* x,int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//
//
//int main()
//{
//	int num = 10;
//	int num2 = 20;
//
//	int* N=&num;
//	int* N1=&num2;
//
//	SSANG(&num, &num2);
//
//	cout << num << num2<<endl<<endl;
//
//	SSANG(N,N1);
//
//	cout << num << num2;
//
//
//
//
//
//
//	
//
//
//	//cout << endl << endl << endl << endl << endl;
//	//cout << Ang << endl;
//	//cout << *Ang << endl;
//	//cout << &num << endl;
//	//cout << &*Ang << endl;
//	//cout << &*&Ang << endl;
//	//cout << *&*&Ang << endl;
//	//cout << &*&*&Ang << endl;
//	//cout << *&*&*&Ang << endl;
//
//
//
//}
// 
//#include <iostream>
//using namespace std;
//int main()
////{
////	int arr[2][5] = {{ 1,2,3,4,5 }, { 6, 7, 8, 9, 10 }
////};
////	
////	cout << arr[0] << endl;
////	cout << arr[1] << endl;
////
////	
////	
////	
////	
////	
////	cout << endl << endl << endl << endl << endl;
////	cout << "arr��" << arr<<endl;
////	cout << "*arr��" << *arr<<endl;
////	cout << "**arr��" << **arr << endl<<endl<<endl;
////
////
////	cout << arr[1][2] << endl;
////	cout << **arr + 7 << endl;
////	cout << &**(arr) + 7 << endl;
////
////	return 0;
////}
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Daughter
//{
//	/*����� ü�� ���� ��� �����̵� ������ ��ǰ ��ǰ ���� �ŷ� ���� �ŷڵ� ��Ʈ����*/
//	string Dname;
//	float hp=0, in=0, str=0, prid=0, doduk=0, gipum=0, sungpum=0, sense=0, charm=0, att=0;
//	int bil=0, stress = 0;
//
//
//	void Stat(string _Dname, float _hp,float _in, float _str, float _prid, float _doduk, float _gipum, float _sungpum, float _sence, float _charm, float _att, int _bil,int _stress)
//	{
//		Dname = _Dname;
//		hp = _hp, in = _in, str = _str, prid = _prid, doduk = _doduk, gipum = _gipum, sungpum = _sungpum, sense = _sence, charm = _charm, att = _att;
//		bil = _bil, stress = _stress;
//	}
//	void Info()
//	{
//		cout << Dname<<endl<<endl;
//
//		cout << "   ü��=" << hp << endl << "   ����=" << in << endl << "   ���=" << str << endl << "   ������=" << prid << endl << 
//			"   ������=" << doduk << endl << "   ��ǰ=" << sungpum << endl << "   ��ǰ=" << gipum << endl << "   ����=" << sense << endl << "   �ŷ�=" << charm << endl << "   ����=" << att << endl;
//
//		cout << "   �ŷڵ�=" << bil << endl << "   ��Ʈ����=" << stress << endl;
//	}
//};
//int main()
//{
//	//���� ������Ÿ���� ���� = �迭
//	//���� �ٸ� ������Ÿ���� ���� = ����ü
//
//	Daughter ddal[5];//Daughter ����ü�� ddal�̶�� �迭������ ���� �����.
//
//	Daughter D1;//Daughter ����ü�� D1�̶� ������ �����Ѵ�.
//	Daughter D2;
//	Daughter D3;
//	Daughter D4;
//	Daughter D5;
//	/*          �̸� ü�� ���� ��� ���� ���� ��ǰ ��ǰ ���� �ŷ� ���� �ŷ� ��Ʈ  */
//	D1.Stat("�ӱ���",30, 15, 10, 10, 20, 20, 10, 20, 30, 10, 35, 0);
//	D2.Stat("����",45, 10, 20, 20, 10, 10, 9, 7, 3, 20, 35, 10);
//	D3.Stat("���",25, 30, 15, 9, 17, 30, 5, 20, 9, 15, 35, 0);
//	D4.Stat("��",35, 15, 13, 12, 13, 19, 20, 5, 20, 15, 35, 0);
//	D5.Stat("����",50, 5, 15, 30, 20, 10, 0, 0, 10, 20, 35, 0);
//
//	//D1.Info();D1 ���� �Լ�
//	ddal[0] = D1;//�迭�� D1~D5 ����ü�� ����
//	ddal[1] = D2;
//	ddal[2] = D3;
//	ddal[3] = D4;
//	ddal[4] = D5;
//
//	for (int i = 0; i < 5; i++)
//	{
//		ddal[i].Info();
//		cout << endl << endl;
//	}
//
//	return 0;
//}
////Ragon Garagon;
////Garagon.name="������";
////Garagon.HP=50000;
////Garagon.DEF=2;
//
//	//string Naragon = "������";
//	//int HP = 50000;
//	//float Att = 500;
//	//float Def = 2;
//
//	//string Naragon = "������";
//	//int HP = 100000;
//	//float Att = 3000;
//	//float Def = 5;
//
//	//string Naragon = "�巡��";
//	//int HP = 1000000;
//	//float Att = 5000;
//	//float Def = 10;
//
//	//cout << sizeof(Nam) << endl;
//	//cout << sizeof(Namba) << endl;

//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//int main()
//{
//	Monster monsterA;
//	monsterA.name = "����a";
//
//	//����ü�� ������ ����
//	Monster* monsterPtr;
//	monsterPtr = &monsterA;
//
//	//����ü ������ ������ ����� ���� �� �� �ּҸ� ���� �����ϱ⿡
//	//. �� �ƴ� ->�� �����Ѵ�.
//	cout << monsterPtr->name << endl;
//
//
//
//
//	return 0;
//}
// 


//�Լ��� �����
//findid(�����ǹ迭,ã��id)
//�̳���̵����
// #include<iostream>
//#include<string>
//using namespace std;
//
//monster* findif(monster monstersp[], int key)//������ �����Ϸ��� ������ ������ ȣ����. �ݹ��� ���۷���
//{
//	monster* targetPtr =
//}
//
//struct monster
//{��
//	string name;
//	int id;
//
//
//	void Set(string _name,int _id)
//	{
//		name = _name;
//		id = _id;
//	}
//
//	void info()
//	{
//		cout << name <<"    " << id << endl;
//	}
//	void serch()
//	{
//		
//	}
//
//
//};
//
//const int MONSTER_COUNT = 5;
//
//int main()
//{
//	int findid = 0;
//	monster monsterA;
//	monster monsterB;
//	monster	monsterC;
//	monster monsterD;
//	monster monsterE;
//	monster M[5];
//
//	monsterA.Set("�巡��", 0);
//	monsterB.Set("������", 1);
//	monsterC.Set("�ذ�", 2);
//	monsterD.Set("�ذ�a", 3);
//	monsterE.Set("������a", 4);
//
//	M[0] = monsterA;
//	M[1] = monsterB;
//	M[2] = monsterC;
//	M[3] = monsterD;
//	M[4] = monsterE;
//
//	for (int i = 0; i < MONSTER_COUNT; i++)//�Լ��� �迭
//	{
//		M[i].info();
//	}
//
//	cout << "ã�� �ָ� ����" << endl;
//	cin >> findid;
//	
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//#include <iostream>
//#include <string>
//#include <vector>//�����迭 �Լ�
//using namespace std;
//struct monster
//{
//	string name;
//	int id;
//
//
//	void Set(string _name, int _id)
//	{
//		name = _name;
//		id = _id;
//	}
//
//	void info()
//	{
//		cout << name << "    " << id << endl;
//	}
//};
//
//void Print(int* aa��������������������rr)//����([]�� ��� �����ͷ� �ҷ����鰡��)>>���۹������� ���ҷ���
//{
//	for (int i = 0; i < 10; i++)
//		cout << aa��������������������rr[i] << endl;//���
//}
//void printmons(monster monsters [])//����� ���̰� ���� ���������� ����
//{
//	for (int i = 0; i < 5; i++)
//		monsters[i].info();
//}
////void Print(int ar)//�Ұ���
////{
////	for (int i = 0; i < 10; i++)
////		cout << ar[i] << endl;
////}//���� ����ü�ĺ��� �տ� ������ ǥ�ø� ����� ��. �ֳ� �̷��� �ݹ��� ����� �ǰŵ� �ȵǷ��� ���� �ؼ� �ݹ��� ���۷��� �ؾߴ�
//
//
//
//void Prin(int a��������������������r[])//����>>�迭�� �þƹ���
//{
//	cout << endl << endl;
//	for (int i = 0; i < 10; i++)
//		cout << a��������������������r[i] << endl;
//}
//void printmon(monster monsters[])//����� ���̰� ���� ���������� ���� �迭�� �þƹ��� ����
//{
//	for (int i = 0; i < 5; i++)
//		monsters[i].info();
//}
//
//
//
//void findnum(int* _arr,int key)
//{
//	for (int i = 0; i < 10; i++)
//	{
//	if (_arr[i] == key)
//		cout << "ã��" << i + 1 << "����" << endl;
//	}	
//
//}//�̰Ͱ� �Ʒ� ���θ�� ���������� ���̰� ����!
//void Findmonster(monster* monsterArr, int key)//������ �迭�� �޾ƾ��ϱ⿡ ���� ���;�[] ok?
//{
//	for (int i = 0; i < 5; i++)
//	{
//		if (monsterArr[i].id == key)
//			cout << "ã��" << i + 1 << "��°�� ����" << endl;
//	}
//}
//
//
//
//
//int* pinnumre(int* _arr, int key)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (_arr[i] == key)
//		{
//			cout << "ã��" << i + 1 << "��°�� ����" << endl;
//			return &_arr[i];
//		}
//	}
//}//���������� �� �Ʒ��� ����
//monster* monnumre(/*int* �� �ƴ�! ����ü��!*/monster* _ang, int _key)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (_ang[i].id == _key)
//		{
//			cout << "ã�Ҿ��" << i + 1 << "��°�� �ֳ׿�" << endl;
//			return &_ang[i];
//		}
//	}
//}
////
////
////int ain()
////{
////	int arr[] = { 1,3,5,74,4,8,4,5,4,5 };
////	int findid = 0;
////	monster monsterA;
////	monster monsterB;
////	monster	monsterC;
////	monster monsterD;
////	monster monsterE;
////	monster M[5];//���͸� a���� e���� �����ϰ� M�̶�� �迭������ ���ͷ� 
////	        //�����ؼ� 5ĭ���� �����Ұ��̾�
////
////	monsterA.Set("�巡��", 0);
////	monsterB.Set("������", 1);
////	monsterC.Set("�ذ�", 2);
////	monsterD.Set("�ذ�a", 3);
////	monsterE.Set("������a", 4);//A~E�� Set(���ͱ���ü �� �Լ�)�� �������̾�
////	
////	M[0] = monsterA;
////	M[1] = monsterB;
////	M[2] = monsterC;
////	M[3] = monsterD;
////	M[4] = monsterE;//���� M �迭�� ����A~E���� �������̾�
////
////	Print(arr);//ar
////
////	printmon(M);
////	printmons(M);
////	Findmonster(M, 2);//M��������� 2�� ������ ���ε���ͷ� ���� �װ� �����Ұž�
////	
////	monnumre(M, 2)->Set("�����߾�", 999);
////	printmons(M);
////	printmon(M);
////
////	monnumre(M, 1)->Set("�������߾�", 9999);
////	printmon(M);
////
////	//printmons(M);//M�� ����ִ� �迭�������� ����Ʈ �󽺿� ������ ����Ʈ �󽺿� �ִ� ����� ������.
////	//printmon(M);//���� ����
////
////	return 0;
////}
////
////#include <iostream>
////#include <string>
////using namespace std;
//////������ ������ �ּҸ� ��� ������
////
//////����ü�� ����� ���� ������Ÿ��. �Ͽ콺�� ������Ÿ�����������
//struct House
//{
//	string name;
//	string soum;
//	int min;
//};
//
//void Houseinfo(House house)
//{
//	cout << house.name << endl;//House �ƴ� house��
//	cout << house.soum << endl;
//	cout << house.min << endl << endl << endl;//�Ű�������?
//}
////
////void Houseset(House* house, string _name, string _soum, int _min)
////{
////	house.name = _name;
////	house.soum = _soum;
////	house.min = _min;
////}
////
////void findid(House Houses[], int key)
////{
////	for(int i=0;i<3;i++)
////		if(Houses[].min==)
////}
////
////int main()
////{
////	int NINA;
////	NINA = 10;
////
////	House VIVA;
////	Houseset()
////
////	Houseinfo(VIVA);
////	Houseinfo(NANA);
////
////
////
////	return 0;
////}
//
//
//
//
//int main()
//{
//
//	/*monster monsterValue;
//	monster* monsterPtr = &monsterValue;*///������Ƽ���� ���� ����� �ּҰ��� ��´�.
//
//	monster* monsterPtr = new monster();
//	monsterPtr->Set("�׽�Ʈ", 10);
//	monsterPtr->info();
//	delete monsterPtr;
//
//	vector<monster*> monsterss;
//
//	//���� ���� vecter<datatype> ������;
//	//           ����.push_back(������Ÿ�Կ� �´� ����); 
//	//           Ǫ�� ���̶� ������ �� �ڿ� ��Ҹ� �߰��Ѵٴ� ��
//	// 
//	// //����.erase(����.begin(), ����.begin() + 3);//���� ������ġ�� ������ġ���� +3 �� ��ġ�� ����ž� erase(�ݺ��� ������ġ + ���� ����� �ε���) �ش� �ε����� ��Ҹ� ����
//	// 
//	// for (int i=0; i< ����.size(); i++)// size() �� ���� �� ����� ������ ��ȯ�Ѵ�.
////	// {
////	//     cout<< ����.at(i)<<endl;//at������ ���° ��Ҹ� �������� 
////	// }
////	//  
////	// 
////	// 
////	//
////	//
////	// 
////	// 
////	// 
////	
////	return 0;
////}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//class villa 
//{
//public:
//	string name;
//	int id;
//
//
//	void show_info()
//	{
//		cout << name << id;
//	}
//	void Set(string _name,int _id)
//	{
//			name = _name;
//			id = _id;
//	}
//protected:
//
//};
//
//int main()
//{
//	int num = 10;
//	int* numPP = &num;
//	cout << *numPP;
//
//	cout << endl << endl;
//
//	int* numHeapP;//������ ���� ������ ����
//	numHeapP = new int;//������ ���� �����Ǹ� ��Ʈ������ �����Ҵ� �Ѵ�
//	*numHeapP = 9999;//�����ǰ� ����Ű�� �ּҿ� �� 9999�� �ִ´�
//
//	cout << *numHeapP;//�����ǰ� ����Ű�� �ּ��� ���� ����Ѵ�
//
//	delete numHeapP;//�����ǰ� ����Ű�� Heap���� �ּ��� int�� �Ҵ� ���� �Ѵ�.
//
//	numHeapP = new int;//�����Ǹ� �ٽ� �����Ҵ��ҰŴ�;
//	*numHeapP = 3232;
//	cout <<endl<< "������:" << *numHeapP;
//
//	cout << endl << endl << endl << endl;
//
//
//	villa vilA;//����ü ���� ��A�� ���� class ���� ��a�� ����
//	villa* vilP;//��P�� ������ ������ ������ ���� 
//	vilP = &vilA;//��P�� ��A�� �ּҰ��� ����Ų��.
//	vilA.Set("���", 72);//��A�� ���Լ��� ��������.
//	vilP->show_info();//��P�� ������ �Լ��� �ְ�, ���������̶� . ��� ->�� �����. 
//	////��p�� ��A�� ���� ����Ų��.
//	//int numA;//�� �ൿ�� ��Ʈ������ �ٲٸ� �Ʒ��� ����.
//	//int* numP;
//	//numP = &numA;
//	//int numA = 10;
//	//cout << *numP;
//
//
//	
//
//
//	return 0;
//}




//#include <iostream>//����ü
//#include <vector>
//#include <string>
//
//struct Student
//{
//	string name;
//	int id;
//
//	void study()
//	{
//		cout <<id<< name << "�� �������̾�" << endl;
//	}
//
//};
//
//
//
//int main()
//{
//	Student studentA;
//
//	studentA.name = "�ϴϳ���";
//	studentA.id = 1605118;
//
//	
//
//	return 0;
//}







//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
////����� ���� ������Ÿ��
//
//class Studen
//{
//
//	string name = "���";
//	int id;
//	int hp = 1000;
//public:
//
//	//���� private�� ��� ������ ��ȯ��
//	string GetName()
//	{
//		return name;
//	}
//	//���� private�� ��� ������ ���� ������
//	void SetName(string value)
//	{
//		name = value;
//	}
//
//	int GetHp()
//	{
//		return hp;
//	}
//
//	void SetHp(int value)
//	{
//		hp = value;
//		cout << "���� hp : " << hp << endl;
//		if (hp <= 0)
//			Die();
//	}
//
//	void Die()
//	{
//		cout << name << "�� �����ϴ� ����" << endl;
//	}
//
//	void Hit(int value)
//	{
//		SetHp(GetHp() - value);
//	}
//
//	void PoisonEat()
//	{
//		SetHp(GetHp() - 10);
//	}
//
//	void Study()
//	{
//		cout << name << "�� �����Ѵ�" << endl;
//	}
//};
//
//
//class Student :public person
//{
//public:
//	string grade;
//
//	void Teach()
//	{
//		cout << name << "��"<<grade<<"�� ����" << endl;
//		cout << id << "�� �л��� �й�" << endl;
//
//	}
//
//
//};
////���: �θ�Ŭ������ ��������� ����Լ��� ������
////����: class ��� ���� Ŭ���� : public ����� Ŭ����
////private �� ��Ӿȵ� protected
//
//class Teacher :public person
//{
//public:
//	string subject;
//	void Teach()
//	{
//		cout << name << "��" << subject << "�� ����ģ��" << endl;
//		cout << id << "�� ������ ����" << endl;
//
//	}
//
//
//};
//
//
//class person
//{
//protected:
//	string name;
//	int id;
//public:
//	void die()
//	{
//		cout << name << "�׾��";
//	}
//	void eat()
//	{
//		cout << name<<"��Ա�";
//	}
//
//};
//
//
//
//
//void main()
//{
//	Student studentA;
//	
//	studentA.die();
//
//
//}

//
//
//
//
//
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
////����� ���� ������Ÿ��
//
//class Person
//{
//protected:
//	string name;
//	int id;
//
//public:
//
//	//���� private�� ��� ������ ��ȯ��
//	string GetName()
//	{
//		return name;
//	}
//	//���� private�� ��� ������ ���� ������
//	void SetName(string value)
//	{
//		name = value;
//	}
//
//	void Die()
//	{
//		cout << name << "�� �׾���" << endl;
//	}
//	void Eat()
//	{
//		cout << name << "�� ���� �Ծ���" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << name << endl;
//		cout << id << endl;
//	}
//};
//// ��� : �θ�Ŭ������ ��������� ����Լ��� ���� 
////class ��ӹ��� Ŭ���� : public ����� Ŭ����
//class Student : public Person
//{
//private:
//	int achievement;
//	int grade;
//public:
//
//	//������ : �޸𸮿� �Ҵ�� �� ȣ�� ��
//	Student()
//	{
//		cout << "������ ȣ��" << endl;
//		name = "";
//	}
//
//	//������ �����ε�
//	Student(string _name)
//	{
//		cout << "������ ȣ��" << endl;
//		name = _name;
//	}
//
//
//	void Study()
//	{
//		cout << name << "�� �����Ѵ�" << endl;
//	}
//
//	void StudentShowInfo()
//	{
//		cout << "-------�л��� ���� ���--------" << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "�й� : " << id << endl;
//		cout << "�г� : " << grade << endl;
//		cout << "���� : " << achievement << endl;
//		cout << "------------------------------" << endl;
//	}
//};
//
//
//class Teacher : public Person
//{
//private:
//	string responsibleSubject;
//public:
//
//	void Teach()
//	{
//		cout << name << "��" << responsibleSubject << "�� ����ģ��" << endl;
//	}
//
//	void TeacherShowInfo()
//	{
//		cout << "-------������ ���� ���--------" << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << id << endl;
//		cout << "������ : " << responsibleSubject << endl;
//		cout << "------------------------------" << endl;
//	}
//
//};
//
//void main()
//{
//
//	vector<Person> people;
//
//private
//	Student studentA;
//	studentA.SetName("�Ʊ�");
//	studentA.Eat();
//
//	Teacher teacherA;
//	teacherA.SetName("���");
//	teacherA.Die();
//
//	people.push_back(studentA);
//	people.push_back(teacherA);
//
//
//	for (int i = 0; i < people.size(); i++)
//	{
//		cout << people[i].GetName() << endl;
//	}
//
//
//	int temp;
//	cin >> temp;
//}

//
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
////����� ���� ������Ÿ��
//
//class Person
//{
//protected:
//	string name;
//	int id;
//
//public:
//
//	//���� private�� ��� ������ ��ȯ��
//	string GetName()
//	{
//		return name;
//	}
//	//���� private�� ��� ������ ���� ������
//	void SetName(string value)
//	{
//		name = value;
//	}
//
//	void Die()
//	{
//		cout << name << "�� �׾���" << endl;
//	}
//	void Eat()
//	{
//		cout << name << "�� ���� �Ծ���" << endl;
//	}
//
//	//���� �Լ�
//	virtual void ShowInfo()
//	{
//		cout << name << endl;
//		cout << id << endl;
//	}
//};
//// ��� : �θ�Ŭ������ ��������� ����Լ��� ���� 
////class ��ӹ��� Ŭ���� : public ����� Ŭ����
//class Student : public Person
//{
//private:
//	int achievement;
//	int grade;
//public:
//
//	//������ : �޸𸮿� �Ҵ�� �� ȣ�� ��
//	Student()
//	{
//		cout << "������ ȣ��" << endl;
//		name = "";
//	}
//
//	//������ �����ε�
//	Student(string _name)
//	{
//		cout << "������ ȣ��" << endl;
//		name = _name;
//	}
//
//
//	void Study()
//	{
//		cout << name << "�� �����Ѵ�" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << "-------�л��� ���� ���--------" << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "�й� : " << id << endl;
//		cout << "�г� : " << grade << endl;
//		cout << "���� : " << achievement << endl;
//		cout << "------------------------------" << endl;
//	}
//};
//
//
//class Teacher : public Person
//{
//private:
//	string responsibleSubject;
//public:
//
//	void Teach()
//	{
//		cout << name << "��" << responsibleSubject << "�� ����ģ��" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << "-------������ ���� ���--------" << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << id << endl;
//		cout << "������ : " << responsibleSubject << endl;
//		cout << "------------------------------" << endl;
//	}
//
//};
//
//void main()
//{
//
//	Teacher teacherA;
//	Person* personPtr = &teacherA;
//
//	teacherA.GetName();
//
//	personPtr->ShowInfo();
//
//
//
//
//	/*
//	vector<Person*> people;
//
//	Student studentA;
//	studentA.SetName("�Ʊ�");
//	studentA.Eat();
//
//	Teacher teacherA;
//	teacherA.SetName("���");
//	teacherA.Die();
//
//	people.push_back(&studentA);
//	people.push_back(&teacherA);
//
//	for (int i = 0; i < people.size(); i++)
//	{
//	   people[i]->ShowInfo();
//	}
//	*/
//
//
//
//
//
//
//	int temp;
//	cin >> temp;
//}










//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;

//Ŭ���� ���+
//��ĳ���� �ٿ�ĳ����
//�������̵�
//�����Լ�


//class Charactor
//{
//public:
//	string name;
//	int hp;
//	int att;
//
//	Charactor()
//	{
//		cout << "ĳ���� ���� �����ھ�" << endl;
//	}
//
//	~Charactor()
//	{
//		cout << "ĳ���� ���� �Ҹ��ھ�" << endl;
//	}
//
//	void Hit()
//	{
//		cout << "ĳ���� ����" << endl;
//	}
//	void Attack()
//	{
//		cout << "ĳ���� ����" << endl;
//	}
//	virtual void Die()
//	{
//		cout << "ĳ���� ����" << endl;
//	}
//};
//
//class Monster : public Charactor
//{
//public:
//	string dropItem;
//
//	Monster()
//	{
//		cout << "���� ���� �����ھ�" << endl;
//	}
//	~Monster()
//	{
//		cout << "���� ���� �Ҹ��ھ�" << endl;
//	}
//
//	void Drop()
//	{
//		cout << dropItem << "�� ��������" << endl;
//	}
//
//	void Hit()
//	{
//		cout << "���� ����" << endl;
//	}
//	void Attack()
//	{
//		cout << "���� ����" << endl;
//	}
//	void Die()
//	{
//		//������ ������(::)�� ����ϸ� �θ�Ŭ������ �Լ����� ���� �� �� ����.
//		Charactor::Die();
//		cout << "���� ����" << endl;
//
//	}
//};
//
//class Player : public Charactor
//{
//public:
//	int level;
//	int exp;
//
//	void Hit()
//	{
//		cout << "�÷��̾� ����" << endl;
//	}
//	void Attack()
//	{
//		cout << "�÷��̾� ����" << endl;
//	}
//	void Die()
//	{
//		cout << "�÷��̾� ����" << endl;
//	}
//	void GetthingExp(int value)
//	{
//		exp += value;
//	}
//
//};
//
//void main()
//{
//
//	Monster monsterA;
//	Monster monsterB;
//	Player playerA;
//
//	monsterA.Die();
//	monsterB.Die();
//	playerA.Die();
//
//	vector<Charactor*> monsters;
//
//	monsters.push_back(&monsterA);
//	monsters.push_back(&monsterB);
//	monsters.push_back(&playerA);
//
//	for (int i = 0; i < monsters.size(); i++)
//		monsters[i]->Die();
//
//
//
//
//
//
//
//
//
//
//	int temp;
//
//	cin >> temp;
//
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Character
//{
//public:
//	string name;
//	int hp;
//	int att;
//
//	void hit(int damage)
//	{
//		cout << name << "��" << damage << "��ŭ ó�¾Ҵ�" << endl;
//		hp -= damage;
//		if (hp <= 0)
//			Die();
//	}
//	void Attack(Character* target)
//	{
//		cout << "ĳ���� ���� ����" << endl;
//	}
//	virtual void Die()//�����Լ� ������� �ٿ�ĳ���� �˸�,���
//	{
//		cout << "ĳ���� ���" << endl;
//	}
//};
//
//
//class Monster : public Character
//{
//public:
//	string drop;
//	
//	Monster()
//	{
//		name = "����";
//		hp = 10;
//		att = 1;
//		drop = "������°�";
//	}
//	
//	void Drop()
//	{
//		cout << drop << "�� ���ɴ�" << endl;
//	}
//
//	void Attack(Character* player)
//	{
//		cout << name << "�� �÷��̾�" << player->name << "�� �ִ�" << endl;
//		player->hit(att);
//	}
//	void Die()
//	{
//		Character::Die();//�θ�Ŭ������ �����߱⿡ ĳ���� ����� ���� ��
//		//������ ������(::)�� ����ϸ� �θ�Ŭ������ �Լ����� ���� �����ϴ�.
//		cout << "���� ����" << endl;
//		Drop();
//	}
//};
//
//class Player : public Character
//{
//public:
//	int level;
//	int exp;
//
//	Player()
//	{
//		name = "�÷��̾�";
//		hp = 1000;
//		att = 20;
//	}
//	void Attack(Character* monster)
//	{
//		cout << name << "�� ���� " << monster->name << "�� ����" << endl;
//		monster->hit(att);
//	}
//
//	void Die()
//	{
//		cout << "�÷��̾� ����" << endl;
//	}
//	void GetthingExp(int value)
//	{
//		exp += value;
//	}
//};
//
//
//int main()
//{
//
//	Monster* monsterA = new Monster ();
//	Player* playerA = new Player();
//
//	int input;
//
//	while (1)
//	{
//		cin >> input;
//		playerA->Attack(monsterA);
//		monsterA->Attack(playerA);
//
//	}
//
//
//
/// .., 
//
//
//
//	return 0;
//}
//
////
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
////�Լ� ������ ���� �� (*������) (��ȯ�Ұ�)
//typedef void(*Fun)();
//
//int main()
//{
//	Fun pfun;
//
//
//
//	return 0;
//}
//
//
//#include <iostream>
//#include <stdlib.h>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	int s;
//	int a=0, b=0, c=0, d=0, e=0, f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0;
//
//	srand((unsigned int)time);
//	while (1)
//	{
//		s = rand() % 6 + 1;
//		switch (s)
//		{
//		case 1:
//			a = a + 1;
//			system("cls");
//			cout << a<<" "<< b <<" " << c<<" " << d <<" " << e <<" " << f << endl;
//			break;
//		case 2:
//			b = b + 1;
//			system("cls");
//			cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//			break;
//		case 3:
//			c = c + 1;
//			system("cls");
//			cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//			break;
//		case 4:
//			d = d + 1;
//			system("cls");
//			cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//			break;
//		case 5:
//			e = e + 1;
//			system("cls");
//			cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//			break;
//		case 6:
//			f = f + 1;
//			system("cls");
//			cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
//			break;
//
//			
//
//
//		}
//	}
//
//
//	return 0;
//}



//#include <iostream>
//#include <random>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	random_device NanRandom;//�õ尪�� ������� ���� ����̽� NanRandom�� �α�
//
//	mt19937 gen(NanRandom());//��������̽��� ���� �������������� �ʱ�ȭ �Ѵ�.
//
//	niform_int_distribution<int> dis(0, 1000);
//
//	while (1)
//	{
//
//		cout << dis(gen) << endl;
//
//		Sleep(100);
//}
//
//
//	return 0;
//}




//�ĺ��ڸ� ã�� �� �����ϴ� ���� �ذ��
//�� ���� �Լ��� �̸� �����Ѵ�. int sum(int left,int right); ������ �׸��� ����� �Ʒ� �� �����ϰ� ������ �ȵ�

//
//#include <iostream>
//#include <string>
//#include "Practices.h"
//using namespace std;
//
//class Dragon
//{
//	int hp;
//	int damage;
//	int armor;
//
//	int calculHP() 
//	{
//		return hp - (damage - armor);
//	}
//
//public:
//	int getHP()			{ return hp; }
//	int	getDamage()		{ return damage; }
//};
//
//class Weapon
//{
//public:
//	virtual void attack() { cout << "�ֵѷ���"; };//�ֵθ��°�
//	void drop() {};
//};
//
//class Gun : public Weapon
//{
//public:
//	virtual void attack() { cout << "�i��"; };//��°� 
//
//};
//
//class Sword : public Weapon
//{
//public:
//
//};
//
//int main()
//{
//
//	Gun G;
//	Weapon W;
//
//	W = G;
//
//	W.attack();
//	
//
//	G.attack();
//	W.attack();
//		
//
//
//
//	return 0;
//}
//

//
//#include <iostream>
//#include <conio.h>
//
//
//
//typedef struct Animal
//{
//	char	name[30];
//	int		age;
//
//	int		health;
//	int		food;
//	int		clean;
//} Animal;
//
//void create_animal(Animal* animal)
//{
//	std::cout << "������ �̸�?:";
//	std::cin >> animal->name;
//	std::cout << "������ ����?:";
//	std::cin >> animal->age;
//
//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 100;
//}
//
//void play(Animal* animal)
//{
//	animal->health += 10;
//	animal->food -= 20;
//	animal->clean -= 30;
//}
//
//void day(Animal* animal)
//{
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}
//
//void info(Animal* animal)
//{
//	std::cout << animal->name << std::endl;
//	std::cout << animal->health << std::endl;
//	std::cout << animal->food << std::endl;
//	std::cout << animal->health << std::endl;
//}
//
//int main()
//{
//	Animal* list[10];
//	int animal_num = 0;
//
//	while (1)
//	{
//		std::cout << "1.�߰�" << std::endl;
//		std::cout << "2.���" << std::endl;
//		std::cout << "3.���º���" << std::endl;
//
//		int input;
//		std::cin >> input;
//
//			switch (input)
//			{
//				int play_with;
//			case 1:
//				list[animal_num] = new Animal;
//				create_animal(list[animal_num]);
//
//				animal_num++;
//				break;
//			case 2:
//				std::cout << "������ ���? : ";
//				std::cin >> play_with;
//
//				if (play_with < animal_num) play(list[play_with]);
//
//				break;
//
//			case 3:
//				std::cout << "������ ����? : ";
//				std::cin >> play_with;
//				if (play_with < animal_num) info(list[play_with]);
//				break;
//			}
//
//		for (int i = 0; i != animal_num; i++)
//		{
//			day(list[i]);
//		}
//
//		for (int i = 0; i != animal_num; i++)
//		{
//			delete list[i];
//		}
//	}
//
//	
//
//
//
//	return 0;
//}
//
//
//




/*ù��° ���� ����Լ�*/
//#include <iostream>
//
//int onePlusRepeater(int n)
//{
//	if (n <= 1)
//		return 1;
//
//	else
//	return onePlusRepeater(n - 1) + 1;
//}
//
//
//
//int main()
//{
//	long long int result = 0;
//	int value = 0;
//
//	std::cout << "wkdustn n dml rkqtdms?";
//	std::cin >> value;
//	result = onePlusRepeater(value);
//	std::cout << result << std::endl;
//
//	return 0;
//}

/*�ι�°�����迭�� ���� i�� ���ԵǾ� �ִ��� Ȯ���ϴ� �Լ�*/

//#include <iostream>
//#include <vector>
//
//bool isExist(std::vector<int> array, int i)
//{
//
//	return 1;
//}
//
//
//
//int main()
//{
//	int n = 0;
//
//	return 0;
//}

/*����° ���� ����Լ� �Ǻ���ġ ���� ��*/
//#include <iostream>
//
//long Fibonacci(int index)
//{
//	if (index <= 1)
//		return index;
//
//		return Fibonacci(index - 1) + Fibonacci(index - 2);
//}
//
//int main()
//{
//
//	int n=0;
//	long long result;
//	while (1)
//	{
//		std::cout <<std::endl<< "n�� ���� �����̴���";
//		std::cin >> n;
//
//		result = Fibonacci(n);
//
//		std::cout << result;
//	}
//	return 0;
//}


/*�׹�° ���� �Ǻ���ġ �˰��� �����ϱ�*/
//#include<iostream>
//
//long long Fivo(int n);
//
//int main()
//{
//	int n = 0;
//	long long result = 0;
//	while (1)
//	{
//		std::cout << "n�� ���� �����̾�:";
//		std::cin >> n;
//
//		result = Fivo(n);
//		std::cout << result<<std::endl;
//	}
//	return 0;
//}
//
//long long Fivo(int n)
//{
//	if (n < 2)
//		return n;
//	else
//	{
//		long long i = 1, tmp = 1, current = 1, last = 0;
//		for (i = 2; i <= n; i++)
//		{
//			tmp = current;
//			current += last;
//			last = tmp;
//		}
//		return current;
//	}
//}

/*�ټ���° ����*/
//#include <iostream>
//
//
//
//long long nMult(int x, int n)
//{
//	if (n == 1)
//		return x;
//
//	if (n % 2 == 0)
//	{
//		return nMult(x, n / 2) *nMult(x, n / 2);
//	}
//	else
//	{
//		return nMult(x, (n / 2) + 1)* nMult(x, (n / 2));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	long long result;
//
//	while (1)
//	{
//		std::cout << "x�� ���� �����̾�:";
//		std::cin >> x;
//		std::cout <<std::endl<< "n�� ���� �����̴���:";
//		std::cin >> n;
//
//		result = nMult(x, n);
//		std::cout << result<<std::endl;
//	}
//	return 0;
//}




//�� �� ��

//��Ӱ�����<<<<<<<<




//#include <iostream>
//#include <time.h>
//
//#define DATA_SIZE	10000010
//
//
//
//
//int one(long long  sts);
//
//
///*for (long long i = 0; i < sts; i++)
//	sts += i;
//	*/
//// 10  => 0  
//// 10000000 => 13ms  
//// 100000000 => 136ms
//// 1000000000 => 1435ms
//// 10000000000 =>  15321ms
////����� �� ����� ����������� �ö󰡴� ������ �ִ�. �׳� �����Ͱ� �þ���� �þ��ŭ �þ�� �Ҹ� ���� ������ �׷�
////O(n)
//
//// i =>10 , 100, 1000 ,100000000...
//// sts += i
////�����Ͱ� 1�̵� 100000�̵� 1���� �ɸ��ð��� ����
////����� �� ��� O(1)
//
//
//int main()
//{
//	clock_t start, finish;
//	double du;
//
//	one(DATA_SIZE);
//
//	return 0;
//}
//
//
//int one(long long sts)
//{
//;
//
//
//	return sts;
//
//
//}
//
//
//
//#include <iostream>
//
//int sum(int a, int b) { return a + b; }
//float sum(float a, float b) { return a + b; }
//
//template <typename T>
//T sum(T a, T b) { return a + b; }
//
//class Pointer
//{
//	int x;
//	int y;
//
//public:
//	Pointer(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//};
//
// 
//
//
//
//int main()
//{
//	int i = sum(10, 20);
//	float ii = sum(1.5f, 2.5f);
//	double iii = sum(1.5555, 8.5555);
//
//	Pointer character(3, 4);
//	Pointer delta(1, 1);
//
//	character = character + delta;
//
//
//	return 0;
//}
//
//
//
//
//#include <iostream>
//#include <vector>
//
//int main()
//{	
//	std::vector<int> stlvec;
//
//
//
//
//	return 0;
//}
//



//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
///*��ü������ �ѹ� �� �y�� ���� ���� �� �y�� ��ĭ���� �� �y�� ������ ������ �Ѵ�. �ð����⵵ ��������On2*/
//void select(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++)//�������� 0���� ��������� 
//	{
//		int target = i;//���� �ε��� i�� �Ҵ��Ѵ� �ٱ� ó���� �����ε����� 0 1 2 3 4 .... �ϸ鼭 ���� �ε����� ���� Ŀ����.
//		for (int j = i + 1; j < vec.size(); j++)//i �ȿ� j�� �� �־ 2�������� ������ j�� ��ġ�� �ٽ� i+1 �Ǵ½�
//		{
//			if (vec[j] < vec[target])//���࿡ j�� ó���� i������ ū�� �߰��Ѵٸ� (������ �ָ� �߰��Ѵٸ�)
//				target = j;//�������� j�� �ٲ��ش�
//		}
//		//���� �ֱ��夸â�ϴ���
//		int temp = vec[i];  
//		vec[i] = vec[target];
//		vec[target] = temp;   //�Ʊ� Ÿ�ٰ��ϰ� i���ϰ� �ٲ��ش�. ������ ����
//	}
//}
//
////���������� ��  1 5 47 8 7  �̷��� �־��� ġ�� 1: 1 5 47 8 7    2: 1 5 47 8 7    3: 1 5 8 47 7  4: 1 5 7 8 47 �̴ϱ� �ϳ��� �� ���鼭 ������ �ؾ߰���?
////�׷��ϱ� on2���� �ϳ��� ���� �ٽ� �ϳ��� ���� �鸸�� ���̱� �ϸ� �����ŷ� ���� �ȴ�
////�ٵ�! �ѹ��� ���Ҵµ�(1ȸ�� �ߴµ�) ������ ���� �ȵǸ� �ǵ��� �� ���� �ؾߵǴ� ���� ���� �Ǿ����� ( ������ ���Ļ��°� �ƴ� �� ) ȿ���� ���� �� ����.
//void insert(vector<int>& vec)
//{
//	int j;
//	for (int i = 1; i < vec.size(); i++)           //���ڱ� �������� ��������: ������ ù��°���� ������ �ʿ䰡 ���µ� ���Ϸ� 0���� ������ �ߴ���  
////������:for (int i = 0; i < vec.size(); i++)                                       
//	{               
//		int mid = vec[i]; //�������� �����մ� i�� �������� ����ش�. �׷��ϱ� �ٳ����� �������� ���� �ǳ����� �������ΰ��� �̷�����
//		for (j = i - 1; j >= 0 && vec[j] > mid; j--)
//		{
//			vec[j + 1] = vec[j];//��Ȥ�� ������ ���� 
//		}
//
//		vec[++j] = mid;
//	}
//}
//
///*�� �������� �ڵ带 ¥�� �� ������������ �� �� ���� ��ġ ������ ū���ڰ� ���ӿ� ��ǰ���� �ǱۻǱ� �ö���°�ó�� ���� ���� õõ�� ���ߴ� ������ ���
//�ϴ� ¥��� ������� �츮�� ����Ⱑ �ǳ� ���� �����̶�� ���׿��� ���ͼ� ¥�� �ٽ� ��*/
//void bubble(vector<int> &vec)//�����ϱ� ����������
//{
//	for (int i = 0; i < vec.size(); i++) //i0���� ���»��������
//	{
//		for (int j = 0; j < (vec.size() - 1) - i; j++)//j0���� ���»�������� 
//		{
//			if (vec[j] > vec[j + 1])//�� �̳༮ �����ʹ迭���� ũ�ٴ�! (������ �迭���� ũ��!)
//			{
//			int temp = vec[j];//���� ���� �ֱ���â �ϰڴ� �ٷ� ���� ��� �ٲ�ġ�� �Ұž�
//				vec[j] = vec[j + 1];
//				vec[j + 1] = temp;
//		
//			}
//		}
//	}
//}
//
//
///*���������� ���� ���� �ٽ� ¥ �f���� ��ü������ Ǯ����ġ�� �ٽ� ���̴� ������ ���ߴ�
//���� �����ϸ� ���� �̾��� Į�� �� �߶���� �ٽ� �ɵ�� �̾���̴´���*/
//void mermer(vector<int> &vec, int start,int mid, int end)
//{
//	vector<int> caramelsortedmukgoshipda;//ī����Ƽ��԰�ʹٸ� ���ͷ� ����
//	int left=start;  //���ʰ� = ����
//	int right=mid +1; // �����ʰ� = ���+1
//
//	while (left <= mid && right <= end)//�������� ������ �Ǹ� �ѹ� �� ���Ҵٴ� ����.
//	{
//		if (vec[left] < vec[right])//���� ���ʷ� ����Ʈ ����Ʈ �������� �����Ѵ�.
//		{
//			caramelsortedmukgoshipda.push_back(vec[left]);
//			left++;
//		}
//		else
//		{
//			caramelsortedmukgoshipda.push_back(vec[right]);
//			right++;
//		}
//	}
//
//	if (left > mid)//���� �Ǿ����� ������ ���� ���� �� �ʿ䰡 ������ �׳� �ִ� ������� �ָ����� ���� �ϰ� ��ģ��. 
//	{
//		for (int i = right; i <= end; i++)
//		{
//			caramelsortedmukgoshipda.push_back(vec[i]);
//		}
//	}
//	else if (right>end)
//	{
//		for (int i = left; i <= mid; i++)
//		{
//			caramelsortedmukgoshipda.push_back(vec[i]);
//		}
//	}
//
//	for (int i = start; i <= end; i++)
//	{
//		vec[i] = caramelsortedmukgoshipda[i - start];
//	}
//
//}
//void merge(vector<int>& vec ,int start, int end)
//{
//	if (start == end)
//		return;
//
//	int mid = (start + end) / 2; //�ϴ� ���� ������
//	merge(vec,start, mid); //���� �������� �ɰ���
//	merge(vec, mid + 1, end); //�ڸ� �������� �ɰ���
//
//	mermer(vec, start, mid, end);//���ĵ��� ������ �� ������ ��(�ָ� �Լ� ȣ��) 
//}
//
//void quick(vector<int>& vec,int start,int finish)//��Ȥ�� �鸸�� ���̱��� �������� ��Ȥ�ؼ� ���ļӵ��� ���� 
//{
//	if (start>=finish)//������͸� ���� ������ �ֹ� (����! ��ŸƮ�� �� ũ�ų� �ǴϽö� ���� . <= �̼Ҹ��� �����Ͱ� (��Ұ�) �ϳ��ۿ� �ȳ��Ұų� �ϳ��ۿ� ����
//	{                                                                               //�̰��� ���ϸ� ������Ϳ� ������ ��
//		return;//�鸸�� ���̱⸦ �ߴ��ϴ� ������ �ֹ�
//	}
//
//	int piv = start;//�Ǻ갪 ��ŸƮ�� �Ҵ�
//	int i = piv + 1;  //i �� �Ǻ갪+1 ���� �⵿�Ѵ� (�Ǻ�+1���� ���)
//	int j = finish;      //j �� �ǴϽ� ���κ��� �⵿�Ѵ� (������������ �ڷΰ��¾�)
//	int temp;         //�ӽ� ����� ���ڱ�������
//
//	while (i <= j)//i���� j������ Ŀ�������� ( ����� �� ������ ) ������ �Ѵ�.     i���� ++ �ǰ� j����-- �Ǵϱ� �������� �ֽ� ���󸶳� �׷��� �ȴ�
//	{                                                                           
//		while (i <= finish && vec[i] <= vec[piv])//i �� �Ǻ꺸�� ū���� ã�� ���ù����� �����̴�. ���� ���̾𽺺��� 
//		{     
//			i++;// �Ʒ����� �������� �˹��ϴ¾� (�迭 1���� �y�´�)(�����ʿ��� �����)
//		}
//
//		while (j > start && vec[j] >= vec[piv])// �ݴ�� k �� �Ǻ꺸�� ���� ���� ã�� �ؾǹ����� �����̴�. ���� �����ε� 
//		{
//			j--;// ������ �Ʒ������� �˹��ϴ¾� 
//		}
//		/*���������� ������ i�� j�� ���� �ݴ���⿡�� �y�ٰ� �Ǻ긦 �������� �Ǻ� ���� ū ��, �������� ������ �Ʒ��� ����*/
//
//		/*�Ҽ����ڸ� ���ϰ� ������ִ� ��*/
//		if (i > j)//i���� j������ ũ�ٸ�?
//		{
//			temp = vec[j];
//			vec[j] = vec[piv];
//			vec[piv] = temp;//j�� �Ǻ� ���� ��ȯ���ش�.
//		}
//		else if (i <= j)//i���� j������ �۰ų� ���ٸ�?
//		{
//			temp = vec[i];
//			vec[i] = vec[j];
//			vec[j] = temp;//i���� j���� ��ȯ���ش� 
//		}
//
//		/*������ �ɸ��� j�� �Ǻ갪�� �ٲ�� (���ذ��� ���� ������ j���� ���������� �ٽ� �����)  �Ʒ��� �ɸ��� i��j���� �ٲ��(�Ʒ��ִ� ū ���� ���� ������)*/
//	}	
//	quick(vec, start, j - 1);// j�� �������� ��� ������ ���� ���� ������ �ָ��� ������
//	quick(vec, j + 1, finish);// �� ������ ��ġ�� return�� �ɷ��� �ٽ� ���������� �ָ��� ������ �ݺ��Ѵ�. ���������� ������ ������ ���� ���������� ������.
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//  <- ���ۿ� �ɵ��ְ� �˾ƺ��� �� �ߴٰ� ����
//	vector<int> selecter;
//	vector<int> inserter;
//	vector<int> bubbler;
//	vector<int> merger;
//	vector<int> quicker;
//	int R;
//	for (int i = 0; i <= 100; i++)
//	{
//		R = rand() % 101;
//		selecter.push_back(R);  
//		inserter.push_back(R);
//		bubbler.push_back(R);
//		merger.push_back(R);
//		quicker.push_back(R);
//	}
//
//	cout << "���� �������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i)<<" , ";
//	}
//
//	select(selecter);
//
//	cout <<endl<<endl<< "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	merge(merger, 0 , merger.size()-1 );
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << merger.at(i) << " , ";
//	}
//
//	bubble(bubbler);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << bubbler.at(i) << " , ";
//	}
//
//	insert(inserter);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << inserter.at(i) << " , ";
//	}
//
//	quick(quicker , 0 , (quicker.size()-1) );
//
//	cout << endl << endl << "���� �������̾�:";
//
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << quicker.at(i) << " , ";
//	}
//
//	return 0;
//}

//
//#include<iostream>
//#include<conio.h>
//#include<queue>
//#define MAX_SIZE 8
//using namespace std;
//bool visit[MAX_SIZE] = { false };
//
//void bts(bool graph[MAX_SIZE][MAX_SIZE],int start)
//{
//	bool visit[MAX_SIZE] = { false };
//	queue<int> btsQ;
//	btsQ.push(start);//0���� �����Ұ�
//
//	while (!btsQ.empty())//ť������������� (stl empty �Լ� �̿�)
//	{
//		int next = btsQ.front();
//		btsQ.pop();
//		cout << "���� �����湮�ھ�:" <<next+1<< endl;
//		for (int i = 0; i < 10; i++)
//		{
//			if (!visit[i] && graph[next][i])//�湮���� ���� ����Ǿ��ִ¾�
//			{
//				btsQ.push(i);//��⿭�� �־������
//				visit[i] = true;//�갡 ������ Ʈ��� ���ϰ� ��� ���ư��ϱ� ���ѷ��� ������ �� ������
//			}
//		}
//	}
//}
//
//void dfs(bool graph[MAX_SIZE][MAX_SIZE],int start)
//{
//		 visit[start] = true;
//		 cout << "����ũ�й湮������:" << start +1 << endl;
//		 for (int i = 0; i < MAX_SIZE; i++)
//		 {
//			 if (!visit[i] && graph[start][i])//�ȹ湮�߰�, ����Ǿ��ִ¾갡 �ִ�!
//				 dfs(graph,i);//��ͷ� �ٽ� ����
//		 }
//
//}
//
//int main()
//{
//	bool graph1[MAX_SIZE][MAX_SIZE] =  //�׷���1 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 1, 0, 0, 0, 0, 1},//1
//			{1, 0, 0, 0, 0, 0, 1, 0},//2
//			{1, 0, 0, 1, 1, 0, 0, 0},//3
//			{0, 0, 1, 0, 1, 0, 0, 0},//4
//			{0, 0, 1, 1, 0, 0, 0, 0},//5
//			{0, 0, 0, 0, 0, 0, 1, 0},//6
//			{0, 1, 0, 0, 0, 1, 0, 1},//7
//			{1, 0, 0, 0, 0, 0, 1, 0} //8
//	};
//
//	bool graph2[MAX_SIZE][MAX_SIZE] =  //�׷���2 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 0, 1, 0, 0, 0, 1},//1
//			{1, 0, 0, 0, 1, 0, 1, 0},//2
//			{0, 0, 0, 0, 1, 0, 0, 0},//3
//			{1, 0, 0, 0, 1, 0, 0, 0},//4
//			{0, 1, 1, 1, 0, 1, 0, 1},//5
//			{0, 0, 0, 0, 1, 0, 0, 0},//6
//			{0, 1, 0, 0, 0, 0, 0, 1},//7
//			{1, 0, 0, 0, 1, 0, 1, 0} //8
//	};
//
//	bool graph3[MAX_SIZE][MAX_SIZE] =  //�׷���3 �ϰ��׸��⸰�׸� ����
//	{      /*1  2  3  4  5  6  7  8*/
//			{0, 1, 1, 0, 0, 1, 0, 1},//1
//			{1, 0, 0, 1, 0, 0, 0, 0},//2
//			{1, 0, 0, 0, 1, 0, 0, 1},//3
//			{0, 1, 0, 0, 1, 0, 0, 0},//4
//			{0, 0, 1, 1, 0, 0, 0, 0},//5
//			{1, 0, 0, 0, 0, 0, 0, 0},//6
//			{0, 0, 0, 0, 0, 0, 0, 1},//7
//			{1, 0, 1, 0, 0, 0, 1, 0} //8
//	};
//
//	dfs(graph1,0);
//
//	cout << endl << endl;
//
//	bts(graph1,0);
//
//	return 0;
//}

//#include <iostream>
//#include <conio.h>
//
//#define INF	314159265
//#define GSIZE	9
//using namespace std;
//
//void dajinmanle()
//{
//	
//}
//
//int main()
//{
//	int graph1 [GSIZE][GSIZE] =
//	{
//		{  0, INF,   2, INF, INF, INF, INF, INF,   9},//1
//		{INF,   0,   7, INF, INF, INF,   2, INF, INF},//2
//		{  2,   7,   0, INF,  10,   8, INF, INF, INF},//3
//		{INF, INF, INF,   0, INF, INF, INF, INF,   3},//4
//		{INF, INF,  10, INF,   0, INF, INF,   6, INF},//5
//		{INF, INF,   8, INF, INF,   0, INF, INF, INF},//6
//		{INF,   2, INF, INF, INF, INF,   0, INF,  11},//7
//		{INF, INF, INF, INF,   6, INF, INF,   0, INF},//8
//		{  9, INF, INF,   3, INF, INF, INF,  11,   0}//9
//	};
//	/* �׷���1 �ִ� �Ÿ� ���
//	0, 9, 2, 12, 12, 10, 11, 18, 9,
//	9, 0, 7, 16, 17, 15, 2, 23, 13,
//	2, 7, 0, 14, 10, 8, 9, 16, 11,
//	12, 21, 14, 0, 20, 22, 23, 14, 3,
//	12, 17, 10, 24, 0, 18, 19, 6, 21,
//	10, 15, 8, 22, 18, 0, 17, 24, 19,
//	11, 2, 9, 14, 19, 17, 0, 22, 11,
//	18, 23, 16, 30, 6, 24, 25, 0, 27,
//	9, 18, 11, 3, 17, 19, 20, 11, 0,
//	*/
//
//	int graph2[GSIZE][GSIZE] =
//	{
//		{  0,   1, INF, INF, INF, INF,   6, INF, INF},//1
//		{  1,   0, INF, INF, INF, INF, INF, INF,   7},//2
//		{INF, INF,   0, INF, INF,   2, INF,   3, INF},//3
//		{INF, INF, INF,   0, INF, INF, INF, INF,   4},//4
//		{INF, INF, INF, INF,   0,   6, INF, INF, INF},//5
//		{INF, INF,   2, INF,   6,   0, INF, INF,   1},//6
//		{  6, INF, INF, INF, INF, INF,   0, INF, INF},//7
//		{INF, INF,   3, INF, INF, INF, INF,   0, INF},//8
//		{INF,   7, INF,   4, INF,   1, INF, INF,   0}//9
//	};
//	/* �׷���2 �ִܰŸ� ���
//	0, 1, 11, 12, 15, 9, 6, 14, 8,
//	1, 0, 10, 11, 14, 8, 7, 13, 7,
//	11, 10, 0, 7, 8, 2, 17, 3, 3,
//	12, 11, 7, 0, 11, 5, 18, 10, 4,
//	15, 14, 8, 11, 0, 6, 21, 11, 7,
//	9, 8, 2, 5, 6, 0, 15, 5, 1,
//	6, 7, 17, 18, 21, 15, 0, 20, 14,
//	14, 13, 3, 10, 11, 5, 20, 0, 6,
//	8, 7, 3, 4, 7, 1, 14, 6, 0, 
//	*/
//
//
//	int graph3[GSIZE][GSIZE] =
//	{
//		{  0, INF,   1,   3, INF, INF, INF,   5, INF},//1
//		{INF,   0, INF, INF, INF,   4, INF, INF, INF},//2
//		{INF, INF,   0, INF, INF, INF, INF, INF, INF},//3
//		{  5, INF, INF,   0, INF, INF, INF, INF, INF},//4
//		{INF, INF,   9, INF,   0, INF, INF, INF,   2},//5
//		{  1, INF, INF, INF, INF,   0, INF,   6, INF},//6
//		{INF, INF,   3, INF, INF, INF,   0, INF, INF},//7
//		{INF,   1, INF, INF,   4, INF, INF,   0, INF},//8
//		{INF, INF, INF,   2, INF, INF, INF, INF,   0}//9
//	};
//	/* �׷���3 �ִܰŸ� ���
//	0, 6, 1, 3, 9, 10, 99999, 5, 11,
//	5, 0, 6, 8, 14, 4, 99999, 10, 16,
//	99999, 99999, 0, 99999, 99999, 99999, 99999, 99999, 99999,
//	5, 11, 6, 0, 14, 15, 99999, 10, 16,
//	9, 15, 9, 4, 0, 19, 99999, 14, 2,
//	1, 7, 2, 4, 10, 0, 99999, 6, 12,
//	99999, 99999, 3, 99999, 99999, 99999, 0, 99999, 99999,
//	6, 1, 7, 8, 4, 5, 99999, 0, 6,
//	7, 13, 8, 2, 16, 17, 99999, 12, 0,
//	*/
//
//	return 0;
//}
































































































































































































