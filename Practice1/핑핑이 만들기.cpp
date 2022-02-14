//////달팽이관
//#include <iostream>
//using namespace std;
//int main()
//{
//	int PingPingE[5][5];//핑핑이와 핑핑이의 변수
//	int x = -1, y = 0;; 
//	int pause = 25;
//
//	int KkingKkingE[5][5];//낑낑이와 낑낑이의 변수
//	int xx = 0, yy = -1;
//	int unpause = 25;
//
//	int TT = 0 , R4 = 0;//핑핑이와 낑낑이 둘 다 쓰는 변수
//	int Num = 0;
//	int APP = 5;
//	int NanButton = 1;
//	
//	/* 핑핑이의 패각을 저장하는 코드*/
//	while (pause > 0)
//	{
//		for (int TT = 0; TT < APP; TT++)//나는 열을 변경하는 포문이야
//		{
//			Num++;
//			x = x + NanButton;
//			PingPingE[y][x] = Num;
//		}
//
//		APP = APP - 1;//5,4,4,3,3,2,2,1,1 을 하기위해 1을 줄이기
//		if (APP <= 0)// 앱이 0이 되면 끝나지롱
//			break;
//
//		for (int R4 = 0; R4 < APP; R4++)//나는 행을 변경하는 포문이야
//		{
//			Num++;
//			y = y + NanButton;
//			PingPingE[y][x] = Num;
//		}
//		NanButton = NanButton * (-1);//안녕 나는 스위치 변수야
//
//		pause--;
//	}
//	cout << "     ㅅ  ㅅ  " <<endl<< "       오                           나는 핑핑이야  "<<endl<< "      ■■  ";//핑핑이 표정
//	for (x = 0; x < 5; x++)//핑핑이의 패각을 이쁘게 맞추기 위해 숫자가 하나만 들어가는 0열을 따로 만듬
//	{
//		int y = 0;
//		cout << PingPingE[y][x] << "   ";
//	}
//	cout << endl<<endl;
//
//	for (y = 1; y < 5; y++)//안녕 나는 패각을 출력하지
//	{
//		cout << "      ■■  ";
//		for (x = 0; x < 5; x++)
//		{
//			cout << PingPingE[y][x] << "  ";
//		}
//		cout << endl << endl;
//	}
//	cout << "      ■■■■■■■■■■■■■" << endl;
//	Num = 0,APP = 5,NanButton = 1;//핑핑이가 쓴 변수들을 낑낑이를 위해 초기화 시켜주는것이야
//
//	/*낑낑이의 패각을 저장하는 코드*/
//	while (unpause > 0)
//	{
//		for (int TT = 0; TT < APP; TT++)//낑낑이는 행부터증가해서 아래로가는것 먼저 시작한다
//		{
//			Num++;
//			yy = yy + NanButton;
//			KkingKkingE[yy][xx] = Num;
//		}
//
//		APP = APP - 1;//안녕 나는 톨게이트의 요정
//		if (APP <= 0)//안녕 나는 종료의 요정
//			break;
//
//		for (int R4 = 0; R4 < APP; R4++)//낑낑이의 열은 처음 4까지만 증가했다 줄어들었다 한다
//		{
//			Num++;
//			xx = xx + NanButton;
//			KkingKkingE[yy][xx] = Num;
//		}
//		NanButton = NanButton * (-1);//나는 청개구리다 1이 오면 -1로 바꾸지 -1이 오면 1로 바꾼다
//
//		unpause--;
//	}
//	cout << endl << endl;
//
//	cout << "      ㅂㅂ  "<<endl<< "       오                           나는 낑낑이지  "<<endl;//낑낑이 표정
//	for (yy = 0; yy < 4; yy++)//낑낑이의 패각을 출력하는 코드
//	{
//
//		cout << "      ■■  ";
//		for (xx = 0; xx < 5; xx++)
//		{
//			cout << KkingKkingE[yy][xx] << "  ";
//		}
//		cout << endl << endl;
//	}
//
//	cout << "      ■■  ";
//	for (xx = 0; xx < 5; xx++)//낑낑이는 아래 5줄에 숫자가 하나씩만 들어가 줄이 안맞아서 따로 출력함
//	{
//		int yy = 4;
//		cout << KkingKkingE[yy][xx] << "   ";
//	}
//	cout << endl<<"      ■■■■■■■■■■■■■" << endl;
//	cout << endl << endl;
//
//	return 0;
//}