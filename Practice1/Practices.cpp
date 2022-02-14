/*#include <iostream>
using namespace std;
int main()
{

	int Num1=0;
	int Num2=0;
	int Sum = 0;
	char op;

	cout << "Num1입력= ";
	cin >> Num1;

	cout <<endl<< "연산자입력(+,-,*,/)=";
	cin >> op;

	cout << endl << "Num2입력=";
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

		if (Num2 == 0) { cout << "0으로 나눌 수 없음!" << endl; }

		else  {
		Sum = Num1 / Num2;
		cout << Num1 << "/" << Num2 << "=" << Sum;
	}

	}

	else {
		cout << "연산자만 입력하세요" << endl;
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
//	//변수 : 값이 항상 변하는 수
//	//상수 : 값이 항상 고정된 수 EX)그냥 숫자 적은것
//
//
//	bool isTest = true;
//	int Num = 0;
//	cout << "숫자를 입력하거라=";
//	cin >> Num;
//	cout <<endl<< "확실한가요?(y/n)" << endl;
//
//	cin >> Sel;
//	if (Sel == 'y') {
//
//
//
//		if (Num == Target) {
//			cout << Num << "은" << Num << "이다" << endl;
//		}
//		else if (Num < Target) {
//			cout << Num << "은" << "10보다작다" << endl;
//
//		}
//		else {
//			cout << Num << "은 10보다 크다" << endl;
//		}
//	}
//
//	else if (Sel == 'n') {
//       
//		cout << endl<<"그럼 다시 선택해=" << endl;
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
//			cout << "0으로 못나누는데" << endl;
//		}
//
//	default:
//		cout << "오류!" << endl;
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
//중괄호를 벗어나면 똑같은 변수를 쓸 수 없다.

//
//#include <iostream>
//#include <string>//문자열 여러개 함수
//using namespace std;
//int main() {
//
//	int i=0;
//	int a=0;
//	int b=0;
//	int c=0;
//	cout << "1부터 10까지의 짝수를 출력합니다:";
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
//	for (b = 0; b < 5; b++) //세로로 5번 실행 for
//{
//	for (a = 0; a < 3; a++) //가로로 3번 실행후 탈출 
//	{
//
//		cout << "안녕 ";
//
//	}
//	cout << endl<<endl;
//}
//	return 0;
//}
// 
// 별찍기
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
//		cout << "입력값은" << Input << "이다." << endl;
//	}
//
//
//
//
//	return 0;
//}


///*3일차 함수*/
//
//함수는 기능
//인풋이 있으면 아웃풋이 있다.
//함수의 선언
//데이터타입 함수명(){ }
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
//	cout << Sum(10.5f, 20.5f) << endl;//매개변수에 맞춰서 함수이름이 같아도, 변수를 맞춰 들어감. 3.5>>sum float  3 >> sum int 로. 
//	//Drawstar(); //매개변수가 없으니 기본으로감
//	Drawstar(50); //매개변수가 있으니 인풋으로감
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
////디폴트 매개변수
////호출할 때 
//void Drawstar(int input=1)
//{
//	for (int i = 0; i < input; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//
//void Func()//함수의 실기능 영역 (함수의 정의)
//{
//	cout << "func테스트테스트" << endl;
//}
//
//int Sum(int input1, int input2)
//{
//	return input1 + input2;
//}
//
//// 함수의 이름은 동일하지만 매개변수의 차이로 다른 기능을 수행하는것을 함수의 오버로딩이라고 한다. 그러니까 이름은 같은데 변수가 다름
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
//void star1(int k=5,int j=5)//1번과제
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
//void star2(int k = 5, int j = 5)//2번과제
//{
//	int C, R, s;
//	for (C = 0; C < k + 1; C++)//k는 세로값 ex)5
//	{
//		for (R = j; R > k - C; R--)//j는 가로값 ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}
//void star3(int k = 5, int j = 5)//3번과제
//{
//	int C, R, s;
//	for (C = 0; C < k; C++)//k는 세로값 ex)5
//	{
//		for (s = 0; s < C; s++)
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < j - C; R++)//j는 가로값 ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}
//void star4(int k = 5, int j = 5)//4번과제
//{
//	int C, R, s;
//	for (C = k - j; C < k; C++)//k는 세로값 ex)5
//	{
//		for (s = k - 1; C < s; s--)
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < C + 1 + (j - k); R++)//j는 가로값 ex)5
//		{
//			cout << "*";
//		}
//	  cout << endl;
//	}
//
//}
//void piramid(int k = 5, int j = 5)//5번과제 피라미드
//{
//	int C, R, s;
//	for (C = 0; C < j; C++)//k는 세로값 ex)5
//	{
//		for (k = j - 1; k > C; k--)//j는 가로값 ex)5
//		{
//			cout << " ";
//		}
//
//		for (R = 0; R < 2 * C + 1; R++)//j는 가로값 ex)5
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//void unpiramid(int k = 5, int j = 5)//6번과제 역피라미드
//{
//	int C, R, s;
//	for (C = 0; C < k + 1; C++)//k는 세로값 ex)5
//	{
//		for (j = 0; j < C; j++)
//		{
//			cout << " ";
//		}
//		for (R = 2 * k - 1; R  > C * 2; R--)//j는 가로값 ex)5
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
//	cout << "x값을 입력하세요:";
//		cin >> num1;
//
//	cout << endl << "y값을 입력하세요:";
//		cin >> num2;
//
//	Swap(num1, num2);//참조자 데이터타입& (변수의 별명을 지어주는것이다)
//
//	cout << "num1의원래값10 : " << num1 << endl;
//	cout << "num2의원래값20 : " << num2 << endl;
//	//함수를 썻는데 바뀌지 않은 이유 : 파라메터에 들어갈떈 값이 복사되서 들어간것임. 그래서 값만 집어넣었음. 그래서 오리지널엔 영향이없다. 
//
//
//	SSap(num1, num2);//Call by Reference 주소에 의한 호출 참조 
//	//SSap에 값이 아니라 주소를 보내 주소를 스왑해서 복귀되었다.
//	//따라서 오리지널 값을 바꾸기 위해선  num1, num2의 주소를 바꿔버리면 가능하다. 
////	//ex 0x01엔 num1 10   0x05엔 num2 20이 들어있음.   0x01과 0x05의 주소를 뒤바꾸면 값이 바뀐다. 
////	//결론적으로 주소를 참조했기 때문에, 오리지날 값이 바뀌었다.
////
////	cout << "num1의원래값10 : " << num1 << endl;
////	cout << "num2의원래값20 : " << num2 << endl;
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
//	cout << "5지롱" << aple << endl;
//	cout << "10이지롱" << bple << endl;
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
//	cout <<"나는10이야" << aple << endl;
//	cout <<"나는5야" << bple << endl;
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

// Const >>상수취급 값을 고정시켜버림. ex const int a = 0; >> a값은 0으로 고정시킴. a값을 변경하려 하면, 에러가남

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
//	std::cout << "나는a야" << a << std::endl;
//	std::cout << "나는a의 주소야" << &a << std::endl;
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
//		std::cout << "arr의" << i << "번째 값" << arr[i] << std::endl;
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
//					cout << "ㅁ";
//				else if (Map[z][y][x] == 2)
//					cout << "파";
//				else if (Map[z][y][x] == 3)
//					cout << "신";
//				else if (Map[z][y][x] == 9)
//					cout << "자";
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
////	cout << "arr은" << arr<<endl;
////	cout << "*arr은" << *arr<<endl;
////	cout << "**arr은" << **arr << endl<<endl<<endl;
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
//	/*만들거 체력 지력 기력 프라이드 도덕성 기품 성품 센스 매력 무술 신뢰도 스트레스*/
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
//		cout << "   체력=" << hp << endl << "   지능=" << in << endl << "   기력=" << str << endl << "   자존심=" << prid << endl << 
//			"   도덕심=" << doduk << endl << "   성품=" << sungpum << endl << "   기품=" << gipum << endl << "   센스=" << sense << endl << "   매력=" << charm << endl << "   무술=" << att << endl;
//
//		cout << "   신뢰도=" << bil << endl << "   스트레스=" << stress << endl;
//	}
//};
//int main()
//{
//	//같은 데이터타입의 묶음 = 배열
//	//서로 다른 데이터타입의 묶음 = 구조체
//
//	Daughter ddal[5];//Daughter 구조체에 ddal이라는 배열공간을 세개 만든다.
//
//	Daughter D1;//Daughter 구조체에 D1이란 변수를 생성한다.
//	Daughter D2;
//	Daughter D3;
//	Daughter D4;
//	Daughter D5;
//	/*          이름 체력 지능 기력 자존 도덕 성품 기품 센스 매력 무술 신뢰 스트  */
//	D1.Stat("앙기모디",30, 15, 10, 10, 20, 20, 10, 20, 30, 10, 35, 0);
//	D2.Stat("기모디",45, 10, 20, 20, 10, 10, 9, 7, 3, 20, 35, 10);
//	D3.Stat("모디",25, 30, 15, 9, 17, 30, 5, 20, 9, 15, 35, 0);
//	D4.Stat("디",35, 15, 13, 12, 13, 19, 20, 5, 20, 15, 35, 0);
//	D5.Stat("디디디",50, 5, 15, 30, 20, 10, 0, 0, 10, 20, 35, 0);
//
//	//D1.Info();D1 인포 함수
//	ddal[0] = D1;//배열에 D1~D5 구조체를 담음
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
////Garagon.name="가래곤";
////Garagon.HP=50000;
////Garagon.DEF=2;
//
//	//string Naragon = "가래곤";
//	//int HP = 50000;
//	//float Att = 500;
//	//float Def = 2;
//
//	//string Naragon = "나래곤";
//	//int HP = 100000;
//	//float Att = 3000;
//	//float Def = 5;
//
//	//string Naragon = "드래곤";
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
//	monsterA.name = "몬스터a";
//
//	//구조체의 포인터 변수
//	Monster* monsterPtr;
//	monsterPtr = &monsterA;
//
//	//구조체 포인터 변수는 멤버에 접근 할 때 주소를 통해 접근하기에
//	//. 이 아닌 ->로 접근한다.
//	cout << monsterPtr->name << endl;
//
//
//
//
//	return 0;
//}
// 


//함수를 만들것
//findid(몬스터의배열,찾을id)
//이놈아이디출력
// #include<iostream>
//#include<string>
//using namespace std;
//
//monster* findif(monster monstersp[], int key)//원본을 수정하려고 포인터 변수로 호출함. 콜바이 레퍼런스
//{
//	monster* targetPtr =
//}
//
//struct monster
//{ㅍ
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
//	monsterA.Set("드래곤", 0);
//	monsterB.Set("슬라임", 1);
//	monsterC.Set("해골", 2);
//	monsterD.Set("해골a", 3);
//	monsterE.Set("슬라임a", 4);
//
//	M[0] = monsterA;
//	M[1] = monsterB;
//	M[2] = monsterC;
//	M[3] = monsterD;
//	M[4] = monsterE;
//
//	for (int i = 0; i < MONSTER_COUNT; i++)//함수에 배열
//	{
//		M[i].info();
//	}
//
//	cout << "찾을 애를 골라라" << endl;
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
//#include <vector>//가변배열 함수
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
//void Print(int* aaㅂㅈㄷㄱㅈㅂㄷㄱㅂㅈrr)//가능([]가 없어서 포인터로 불러오면가능)>>시작번지부터 슥불러옴
//{
//	for (int i = 0; i < 10; i++)
//		cout << aaㅂㅈㄷㄱㅈㅂㄷㄱㅂㅈrr[i] << endl;//얘랑
//}
//void printmons(monster monsters [])//얘랑은 차이가 없다 구조적으로 같음
//{
//	for (int i = 0; i < 5; i++)
//		monsters[i].info();
//}
////void Print(int ar)//불가능
////{
////	for (int i = 0; i < 10; i++)
////		cout << ar[i] << endl;
////}//몬스터 구조체식별자 앞에 포인터 표시를 해줘야 함. 왜냐 이러면 콜바이 밸류가 되거든 안되려면 별을 해서 콜바이 레퍼런스 해야댐
//
//
//
//void Prin(int aㅂㅈㄷㄱㅈㅂㄷㄱㅂㅈr[])//가능>>배열을 꼴아박음
//{
//	cout << endl << endl;
//	for (int i = 0; i < 10; i++)
//		cout << aㅂㅈㄷㄱㅈㅂㄷㄱㅂㅈr[i] << endl;
//}
//void printmon(monster monsters[])//얘랑은 차이가 없다 구조적으로 같음 배열을 꼴아박은 형태
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
//		cout << "찾음" << i + 1 << "번쨰" << endl;
//	}	
//
//}//이것과 아래 파인몬과 구조적으로 차이가 없음!
//void Findmonster(monster* monsterArr, int key)//몬스터의 배열을 받아야하기에 몬스터 몬스터알[] ok?
//{
//	for (int i = 0; i < 5; i++)
//	{
//		if (monsterArr[i].id == key)
//			cout << "찾음" << i + 1 << "번째에 있음" << endl;
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
//			cout << "찾음" << i + 1 << "번째에 있음" << endl;
//			return &_arr[i];
//		}
//	}
//}//마찬가지로 위 아래는 같음
//monster* monnumre(/*int* 가 아님! 구조체임!*/monster* _ang, int _key)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (_ang[i].id == _key)
//		{
//			cout << "찾았어요" << i + 1 << "번째에 있네요" << endl;
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
////	monster M[5];//몬스터를 a부터 e까지 선언하고 M이라는 배열변수도 몬스터로 
////	        //선언해서 5칸으로 생성할것이야
////
////	monsterA.Set("드래곤", 0);
////	monsterB.Set("슬라임", 1);
////	monsterC.Set("해골", 2);
////	monsterD.Set("해골a", 3);
////	monsterE.Set("슬라임a", 4);//A~E를 Set(몬스터구조체 내 함수)에 넣을것이야
////	
////	M[0] = monsterA;
////	M[1] = monsterB;
////	M[2] = monsterC;
////	M[3] = monsterD;
////	M[4] = monsterE;//몬스터 M 배열에 몬스터A~E까지 넣을것이야
////
////	Print(arr);//ar
////
////	printmon(M);
////	printmons(M);
////	Findmonster(M, 2);//M변수값들과 2를 가지고 파인드몬스터로 가서 그걸 시행할거야
////	
////	monnumre(M, 2)->Set("난변했어", 999);
////	printmons(M);
////	printmon(M);
////
////	monnumre(M, 1)->Set("나도변했어", 9999);
////	printmon(M);
////
////	//printmons(M);//M에 들어있는 배열정보들을 프린트 몬스에 보내고 프린트 몬스에 있는 기능을 수행함.
////	//printmon(M);//위와 같음
////
////	return 0;
////}
////
////#include <iostream>
////#include <string>
////using namespace std;
//////포인터 변수는 주소를 담는 변수임
////
//////구조체는 사용자 정의 데이터타입. 하우스란 데이터타입을만든거임
//struct House
//{
//	string name;
//	string soum;
//	int min;
//};
//
//void Houseinfo(House house)
//{
//	cout << house.name << endl;//House 아님 house임
//	cout << house.soum << endl;
//	cout << house.min << endl << endl << endl;//매개변수란?
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
//	monster* monsterPtr = &monsterValue;*///몬스터피티알은 몬스터 밸류의 주소값을 담는다.
//
//	monster* monsterPtr = new monster();
//	monsterPtr->Set("테스트", 10);
//	monsterPtr->info();
//	delete monsterPtr;
//
//	vector<monster*> monsterss;
//
//	//벡터 선언 vecter<datatype> 변수명;
//	//           변수.push_back(데이터타입에 맞는 변수); 
//	//           푸쉬 백이란 벡터의 맨 뒤에 요소를 추가한다는 것
//	// 
//	// //변수.erase(변수.begin(), 변수.begin() + 3);//변수 시작위치와 시작위치에서 +3 한 위치를 지울거야 erase(반복자 시작위치 + 지울 요소의 인덱스) 해당 인덱스의 요소를 지움
//	// 
//	// for (int i=0; i< 변수.size(); i++)// size() 는 벡터 속 요소의 갯수를 반환한다.
////	// {
////	//     cout<< 벡터.at(i)<<endl;//at벡터의 몇번째 요소를 가져올지 
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
//	int* numHeapP;//포인터 변수 넘힙피 선언
//	numHeapP = new int;//포인터 변수 넘힙피를 인트형으로 동적할당 한다
//	*numHeapP = 9999;//넘힙피가 가르키는 주소에 값 9999를 넣는다
//
//	cout << *numHeapP;//넘힙피가 가르키는 주소의 값을 출력한다
//
//	delete numHeapP;//넘힙피가 가르키는 Heap영역 주소의 int를 할당 해제 한다.
//
//	numHeapP = new int;//넘힙피를 다시 동적할당할거다;
//	*numHeapP = 3232;
//	cout <<endl<< "넘힙피:" << *numHeapP;
//
//	cout << endl << endl << endl << endl;
//
//
//	villa vilA;//구조체 빌라 빌A를 선언 class 빌라 빌a를 선언
//	villa* vilP;//빌P를 빌라형 포인터 변수로 선언 
//	vilP = &vilA;//빌P는 빌A의 주소값을 가리킨다.
//	vilA.Set("비바", 72);//빌A를 셋함수에 넣을것임.
//	vilP->show_info();//빌P를 쇼인포 함수에 넣고, 포인터형이라 . 대신 ->를 사용함. 
//	////빌p는 빌A의 값을 가르킨다.
//	//int numA;//위 행동을 인트형으로 바꾸면 아래와 같다.
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




//#include <iostream>//구조체
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
//		cout <<id<< name << "은 공부중이야" << endl;
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
//	studentA.name = "니니나나";
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
////사용자 정의 데이터타입
//
//class Studen
//{
//
//	string name = "용규";
//	int id;
//	int hp = 1000;
//public:
//
//	//게터 private의 멤버 변수를 반환함
//	string GetName()
//	{
//		return name;
//	}
//	//세터 private의 멤버 변수에 값을 세팅함
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
//		cout << "남은 hp : " << hp << endl;
//		if (hp <= 0)
//			Die();
//	}
//
//	void Die()
//	{
//		cout << name << "은 공부하다 죽음" << endl;
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
//		cout << name << "은 공부한다" << endl;
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
//		cout << name << "은"<<grade<<"를 배운다" << endl;
//		cout << id << "이 학생의 학번" << endl;
//
//	}
//
//
//};
////상속: 부모클래스의 멤버변수와 멤버함수를 가진다
////사용법: class 상속 받을 클래스 : public 상속할 클래스
////private 은 상속안됨 protected
//
//class Teacher :public person
//{
//public:
//	string subject;
//	void Teach()
//	{
//		cout << name << "은" << subject << "를 가르친다" << endl;
//		cout << id << "이 선생의 교번" << endl;
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
//		cout << name << "죽어요";
//	}
//	void eat()
//	{
//		cout << name<<"밥먹기";
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
////사용자 정의 데이터타입
//
//class Person
//{
//protected:
//	string name;
//	int id;
//
//public:
//
//	//게터 private의 멤버 변수를 반환함
//	string GetName()
//	{
//		return name;
//	}
//	//세터 private의 멤버 변수에 값을 세팅함
//	void SetName(string value)
//	{
//		name = value;
//	}
//
//	void Die()
//	{
//		cout << name << "은 죽었다" << endl;
//	}
//	void Eat()
//	{
//		cout << name << "은 밥을 먹었다" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << name << endl;
//		cout << id << endl;
//	}
//};
//// 상속 : 부모클래스의 멤버변수와 멤버함수를 가짐 
////class 상속받을 클래스 : public 상속할 클래스
//class Student : public Person
//{
//private:
//	int achievement;
//	int grade;
//public:
//
//	//생성자 : 메모리에 할당될 때 호출 됨
//	Student()
//	{
//		cout << "생성자 호출" << endl;
//		name = "";
//	}
//
//	//생성자 오버로딩
//	Student(string _name)
//	{
//		cout << "생성자 호출" << endl;
//		name = _name;
//	}
//
//
//	void Study()
//	{
//		cout << name << "은 공부한다" << endl;
//	}
//
//	void StudentShowInfo()
//	{
//		cout << "-------학생의 정보 출력--------" << endl;
//		cout << "이름 : " << name << endl;
//		cout << "학번 : " << id << endl;
//		cout << "학년 : " << grade << endl;
//		cout << "성적 : " << achievement << endl;
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
//		cout << name << "은" << responsibleSubject << "를 가르친다" << endl;
//	}
//
//	void TeacherShowInfo()
//	{
//		cout << "-------선생의 정보 출력--------" << endl;
//		cout << "이름 : " << name << endl;
//		cout << "교번 : " << id << endl;
//		cout << "담당과목 : " << responsibleSubject << endl;
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
//	studentA.SetName("훈교");
//	studentA.Eat();
//
//	Teacher teacherA;
//	teacherA.SetName("용규");
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
////사용자 정의 데이터타입
//
//class Person
//{
//protected:
//	string name;
//	int id;
//
//public:
//
//	//게터 private의 멤버 변수를 반환함
//	string GetName()
//	{
//		return name;
//	}
//	//세터 private의 멤버 변수에 값을 세팅함
//	void SetName(string value)
//	{
//		name = value;
//	}
//
//	void Die()
//	{
//		cout << name << "은 죽었다" << endl;
//	}
//	void Eat()
//	{
//		cout << name << "은 밥을 먹었다" << endl;
//	}
//
//	//가상 함수
//	virtual void ShowInfo()
//	{
//		cout << name << endl;
//		cout << id << endl;
//	}
//};
//// 상속 : 부모클래스의 멤버변수와 멤버함수를 가짐 
////class 상속받을 클래스 : public 상속할 클래스
//class Student : public Person
//{
//private:
//	int achievement;
//	int grade;
//public:
//
//	//생성자 : 메모리에 할당될 때 호출 됨
//	Student()
//	{
//		cout << "생성자 호출" << endl;
//		name = "";
//	}
//
//	//생성자 오버로딩
//	Student(string _name)
//	{
//		cout << "생성자 호출" << endl;
//		name = _name;
//	}
//
//
//	void Study()
//	{
//		cout << name << "은 공부한다" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << "-------학생의 정보 출력--------" << endl;
//		cout << "이름 : " << name << endl;
//		cout << "학번 : " << id << endl;
//		cout << "학년 : " << grade << endl;
//		cout << "성적 : " << achievement << endl;
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
//		cout << name << "은" << responsibleSubject << "를 가르친다" << endl;
//	}
//
//	void ShowInfo()
//	{
//		cout << "-------선생의 정보 출력--------" << endl;
//		cout << "이름 : " << name << endl;
//		cout << "교번 : " << id << endl;
//		cout << "담당과목 : " << responsibleSubject << endl;
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
//	studentA.SetName("훈교");
//	studentA.Eat();
//
//	Teacher teacherA;
//	teacherA.SetName("용규");
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

//클래스 상속+
//업캐스팅 다운캐스팅
//오버라이딩
//가상함수


//class Charactor
//{
//public:
//	string name;
//	int hp;
//	int att;
//
//	Charactor()
//	{
//		cout << "캐릭터 나는 생성자야" << endl;
//	}
//
//	~Charactor()
//	{
//		cout << "캐릭터 나는 소멸자야" << endl;
//	}
//
//	void Hit()
//	{
//		cout << "캐릭터 맞음" << endl;
//	}
//	void Attack()
//	{
//		cout << "캐릭터 때림" << endl;
//	}
//	virtual void Die()
//	{
//		cout << "캐릭터 죽음" << endl;
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
//		cout << "몬스터 나는 생성자야" << endl;
//	}
//	~Monster()
//	{
//		cout << "몬스터 나는 소멸자야" << endl;
//	}
//
//	void Drop()
//	{
//		cout << dropItem << "을 떨구었다" << endl;
//	}
//
//	void Hit()
//	{
//		cout << "몬스터 맞음" << endl;
//	}
//	void Attack()
//	{
//		cout << "몬스터 때림" << endl;
//	}
//	void Die()
//	{
//		//스코프 연산자(::)를 사용하면 부모클래스의 함수에도 접근 할 수 있음.
//		Charactor::Die();
//		cout << "몬스터 죽음" << endl;
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
//		cout << "플레이어 맞음" << endl;
//	}
//	void Attack()
//	{
//		cout << "플레이어 때림" << endl;
//	}
//	void Die()
//	{
//		cout << "플레이어 죽음" << endl;
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
//		cout << name << "은" << damage << "만큼 처맞았다" << endl;
//		hp -= damage;
//		if (hp <= 0)
//			Die();
//	}
//	void Attack(Character* target)
//	{
//		cout << "캐릭터 때림 퍽퍽" << endl;
//	}
//	virtual void Die()//가상함수 사용으로 다운캐스팅 알림,사용
//	{
//		cout << "캐릭터 사망" << endl;
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
//		name = "몬스터";
//		hp = 10;
//		att = 1;
//		drop = "쓸모없는것";
//	}
//	
//	void Drop()
//	{
//		cout << drop << "을 떨궜다" << endl;
//	}
//
//	void Attack(Character* player)
//	{
//		cout << name << "은 플레이어" << player->name << "을 팻다" << endl;
//		player->hit(att);
//	}
//	void Die()
//	{
//		Character::Die();//부모클래스에 접근했기에 캐릭터 사망도 같이 뜸
//		//스코프 연산자(::)를 사용하면 부모클래스의 함수에도 접근 가능하다.
//		cout << "몬스터 뒤짐" << endl;
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
//		name = "플레이어";
//		hp = 1000;
//		att = 20;
//	}
//	void Attack(Character* monster)
//	{
//		cout << name << "은 몬스터 " << monster->name << "을 공격" << endl;
//		monster->hit(att);
//	}
//
//	void Die()
//	{
//		cout << "플레이어 죽음" << endl;
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
////함수 포인터 정의 형 (*변수명) (반환할거)
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
//	random_device NanRandom;//시드값을 얻기위한 랜덤 디바이스 NanRandom에 두기
//
//	mt19937 gen(NanRandom());//랜덤디바이스를 통해 난수생성엔진을 초기화 한다.
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




//식별자를 찾을 수 없습니다 오류 해결법
//맨 위에 함수를 미리 선언한다. int sum(int left,int right); 맨위에 그리고 기능은 아래 단 선언하고 없으면 안됨

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
//	virtual void attack() { cout << "휘둘럿다"; };//휘두르는것
//	void drop() {};
//};
//
//class Gun : public Weapon
//{
//public:
//	virtual void attack() { cout << "쐇다"; };//쏘는것 
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
//	std::cout << "동물의 이름?:";
//	std::cin >> animal->name;
//	std::cout << "동물의 나이?:";
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
//		std::cout << "1.추가" << std::endl;
//		std::cout << "2.놀기" << std::endl;
//		std::cout << "3.상태보기" << std::endl;
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
//				std::cout << "누구랑 놀게? : ";
//				std::cin >> play_with;
//
//				if (play_with < animal_num) play(list[play_with]);
//
//				break;
//
//			case 3:
//				std::cout << "누구껄 보게? : ";
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




/*첫번째 과제 재귀함수*/
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

/*두번째과제배열에 숫자 i가 포함되어 있는지 확인하는 함수*/

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

/*세번째 과제 재귀함수 피보나치 수열 합*/
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
//		std::cout <<std::endl<< "n의 값은 무엇이느냐";
//		std::cin >> n;
//
//		result = Fibonacci(n);
//
//		std::cout << result;
//	}
//	return 0;
//}


/*네번째 과제 피보나치 알고리즘 개선하기*/
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
//		std::cout << "n의 값이 무엇이야:";
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

/*다섯번째 과제*/
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
//		std::cout << "x의 값은 무엇이야:";
//		std::cin >> x;
//		std::cout <<std::endl<< "n의 값은 무엇이느냐:";
//		std::cin >> n;
//
//		result = nMult(x, n);
//		std::cout << result<<std::endl;
//	}
//	return 0;
//}




//빅 오 빅ㅂ

//재앙게이지<<<<<<<<




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
////빅오의 엔 방식은 등기율적으로 올라가는 성질이 있다. 그냥 데이터가 늘어날수록 늘어난만큼 늘어난단 소리 포문 돌리면 그럼
////O(n)
//
//// i =>10 , 100, 1000 ,100000000...
//// sts += i
////데이터가 1이든 100000이든 1조든 걸린시간은 같다
////빅오의 일 방식 O(1)
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
///*전체적으로 한번 쓱 흝고 조금 가서 또 흝고 한칸가고 또 흝고 식으로 정렬을 한다. 시간복잡도 개느리쥬On2*/
//void select(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++)//선택정렬 0부터 사이즈까지 
//	{
//		int target = i;//작은 인덱스 i에 할당한다 근까 처음엔 작은인덱스가 0 1 2 3 4 .... 하면서 작은 인덱스가 점점 커진다.
//		for (int j = i + 1; j < vec.size(); j++)//i 안에 j를 또 넣어서 2중포문을 돌린다 j가 마치면 다시 i+1 되는식
//		{
//			if (vec[j] < vec[target])//만약에 j가 처음에 i값보다 큰걸 발견한다면 (정렬할 애를 발견한다면)
//				target = j;//작은값을 j로 바꿔준다
//		}
//		//스왑 주구장ㅈ창하던것
//		int temp = vec[i];  
//		vec[i] = vec[target];
//		vec[target] = temp;   //아까 타겟값하고 i값하고 바꿔준다. 정렬의 현장
//	}
//}
//
////삽입정렬은 음  1 5 47 8 7  이렇게 있었다 치면 1: 1 5 47 8 7    2: 1 5 47 8 7    3: 1 5 8 47 7  4: 1 5 7 8 47 이니까 하나씩 다 돌면서 삽입을 해야겠지?
////그러니까 on2마냥 하나씩 돌고 다시 하나씩 돌고 백만년 조이기 하면 끝날거로 예상 된다
////근데! 한번다 돌았는데(1회전 했는데) 아직도 정렬 안되면 또돌고 또 돌고 해야되니 대충 정렬 되었을때 ( 개막장 정렬상태가 아닐 때 ) 효율이 좋을 것 같다.
//void insert(vector<int>& vec)
//{
//	int j;
//	for (int i = 1; i < vec.size(); i++)           //갑자기 난데없이 떠오른것: 어차피 첫번째값은 정렬할 필요가 없는데 뭐하러 0부터 시작을 했느냐  
////수정전:for (int i = 0; i < vec.size(); i++)                                       
//	{               
//		int mid = vec[i]; //기준점을 돌고잇는 i를 기준으로 잡아준다. 그러니까 다끝내고 다음으로 간다 또끝내고 다음으로간다 이런느낌
//		for (j = i - 1; j >= 0 && vec[j] > mid; j--)
//		{
//			vec[j + 1] = vec[j];//잔혹한 정렬의 현장 
//		}
//
//		vec[++j] = mid;
//	}
//}
//
///*이 버블정렬 코드를 짜니 왜 버블정렬인지 알 것 같다 마치 느낌이 큰숫자가 물속에 거품마냥 뽀글뽀글 올라오는거처럼 순서 순서 천천히 맞추는 느낌이 든다
//일단 짜기는 디따쉬움 우리집 물고기가 맨날 보던 버블이라고 어항에서 나와서 짜고 다시 들어감*/
//void bubble(vector<int> &vec)//만만하기 그지없구나
//{
//	for (int i = 0; i < vec.size(); i++) //i0부터 들어온사이즈까지
//	{
//		for (int j = 0; j < (vec.size() - 1) - i; j++)//j0부터 들어온사이즈까지 
//		{
//			if (vec[j] > vec[j + 1])//앗 이녀석 오른쪽배열보다 크다니! (오른쪽 배열보다 크다!)
//			{
//			int temp = vec[j];//스왑 나도 주구장창 하겠다 바로 옆에 얘랑 바꿔치기 할거야
//				vec[j] = vec[j + 1];
//				vec[j + 1] = temp;
//		
//			}
//		}
//	}
//}
//
//
///*병합정렬은 보고 나서 다시 짜 봣을때 전체적으로 풀어헤치고 다시 붙이는 느낌이 강했다
//굳이 비유하면 꼬인 이어폰 칼로 다 잘라놓고 다시 뽄드로 이어붙이는느낌*/
//void mermer(vector<int> &vec, int start,int mid, int end)
//{
//	vector<int> caramelsortedmukgoshipda;//카라멜솔티드먹고싶다를 벡터로 정의
//	int left=start;  //왼쪽값 = 시작
//	int right=mid +1; // 오른쪽값 = 가운데+1
//
//	while (left <= mid && right <= end)//이조건이 거짓이 되면 한번 다 돌았다는 뜻임.
//	{
//		if (vec[left] < vec[right])//값을 차례로 레프트 라이트 차곡차곡 정렬한다.
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
//	if (left > mid)//소진 되었을때 나머지 값은 정렬 할 필요가 없으니 그냥 있던 순서대로 주르르륵 정렬 하고 마친다. 
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
//	int mid = (start + end) / 2; //일단 반을 나눈다
//	merge(vec,start, mid); //앞을 기준으로 쪼갠다
//	merge(vec, mid + 1, end); //뒤를 기준으로 쪼갠다
//
//	mermer(vec, start, mid, end);//정렬되지 않으면 못 나오는 방(멀멀 함수 호출) 
//}
//
//void quick(vector<int>& vec,int start,int finish)//잔혹한 백만년 조이기의 정렬현장 잔혹해서 정렬속도가 빠름 
//{
//	if (start>=finish)//무한재귀를 막는 마법의 주문 (만약! 스타트가 더 크거나 피니시랑 같다 . <= 이소리는 데이터가 (요소가) 하나밖에 안남았거나 하나밖에 없다
//	{                                                                               //이것을 안하면 무한재귀에 빠지게 됨
//		return;//백만년 조이기를 중단하는 마법의 주문
//	}
//
//	int piv = start;//피브값 스타트값 할당
//	int i = piv + 1;  //i 는 피브값+1 에서 출동한다 (피브+1에서 출발)
//	int j = finish;      //j 는 피니시 라인부터 출동한다 (끝날지점에서 뒤로가는얘)
//	int temp;         //임시 저장소 직박구리폴더
//
//	while (i <= j)//i값이 j값보다 커질때까지 ( 가운데로 올 때까지 ) 이짓을 한다.     i값은 ++ 되고 j값은-- 되니까 언젠가는 주식 떡상마냥 그렇게 된다
//	{                                                                           
//		while (i <= finish && vec[i] <= vec[piv])//i 는 피브보다 큰값을 찾는 무시무시한 변수이다. 거의 사이언스베슬 
//		{     
//			i++;// 아래부터 위쪽으로 검문하는얘 (배열 1부터 흝는다)(오른쪽에서 출발함)
//		}
//
//		while (j > start && vec[j] >= vec[piv])// 반대로 k 는 피브보다 작은 값을 찾는 극악무도한 변수이다. 거의 오버로드 
//		{
//			j--;// 위부터 아래쪽으로 검문하는얘 
//		}
//		/*종합적으로 봤을때 i와 j는 서로 반대방향에서 흝다가 피브를 기준으로 피브 보다 큰 값, 작은값을 가지고 아래로 간다*/
//
//		/*불순분자를 착하게 만들어주는 곳*/
//		if (i > j)//i값이 j값보다 크다면?
//		{
//			temp = vec[j];
//			vec[j] = vec[piv];
//			vec[piv] = temp;//j와 피브 값을 교환해준다.
//		}
//		else if (i <= j)//i값이 j값보다 작거나 같다면?
//		{
//			temp = vec[i];
//			vec[i] = vec[j];
//			vec[j] = temp;//i값과 j값을 교환해준다 
//		}
//
//		/*위에서 걸리면 j와 피브값이 바뀌고 (기준값을 위로 보낸뒤 j값을 기준점으로 다시 맞춘다)  아래서 걸리면 i와j값이 바뀐다(아래있는 큰 값을 위로 보낸다)*/
//	}	
//	quick(vec, start, j - 1);// j를 기준으로 잡고 나머지 안한 정렬 왼쪽을 주르륵 정렬함
//	quick(vec, j + 1, finish);// 위 정렬을 마치면 return이 걸려서 다시 오른쪽으로 주르륵 정렬은 반복한다. 마찬가지로 끝나면 리턴을 통해 순차적으로 끝난다.
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//  <- 진작에 심도있게 알아보길 잘 했다고 생각
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
//	cout << "나는 노정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i)<<" , ";
//	}
//
//	select(selecter);
//
//	cout <<endl<<endl<< "나는 선택정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	merge(merger, 0 , merger.size()-1 );
//
//	cout << endl << endl << "나는 병합정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << merger.at(i) << " , ";
//	}
//
//	bubble(bubbler);
//
//	cout << endl << endl << "나는 버블정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << bubbler.at(i) << " , ";
//	}
//
//	insert(inserter);
//
//	cout << endl << endl << "나는 삽입정렬이야:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << inserter.at(i) << " , ";
//	}
//
//	quick(quicker , 0 , (quicker.size()-1) );
//
//	cout << endl << endl << "나는 퀵정렬이야:";
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
//	btsQ.push(start);//0부터 시작할것
//
//	while (!btsQ.empty())//큐가비었을때까지 (stl empty 함수 이용)
//	{
//		int next = btsQ.front();
//		btsQ.pop();
//		cout << "나는 밀접방문자야:" <<next+1<< endl;
//		for (int i = 0; i < 10; i++)
//		{
//			if (!visit[i] && graph[next][i])//방문한적 없고 연결되어있는얘
//			{
//				btsQ.push(i);//대기열에 넣어버리기
//				visit[i] = true;//얘가 없으면 트루로 안하고 계속 돌아가니까 무한루프 빠지니 꼭 넣을것
//			}
//		}
//	}
//}
//
//void dfs(bool graph[MAX_SIZE][MAX_SIZE],int start)
//{
//		 visit[start] = true;
//		 cout << "오미크론방문했지롱:" << start +1 << endl;
//		 for (int i = 0; i < MAX_SIZE; i++)
//		 {
//			 if (!visit[i] && graph[start][i])//안방문했고, 연결되어있는얘가 있다!
//				 dfs(graph,i);//재귀로 다시 시전
//		 }
//
//}
//
//int main()
//{
//	bool graph1[MAX_SIZE][MAX_SIZE] =  //그래프1 니가그린기린그림 참조
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
//	bool graph2[MAX_SIZE][MAX_SIZE] =  //그래프2 니가그린기린그림 참조
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
//	bool graph3[MAX_SIZE][MAX_SIZE] =  //그래프3 니가그린기린그림 참조
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
//	/* 그래프1 최단 거리 결과
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
//	/* 그래프2 최단거리 결과
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
//	/* 그래프3 최단거리 결과
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
































































































































































































