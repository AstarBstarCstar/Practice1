//////�����̰�
//#include <iostream>
//using namespace std;
//int main()
//{
//	int PingPingE[5][5];//�����̿� �������� ����
//	int x = -1, y = 0;; 
//	int pause = 25;
//
//	int KkingKkingE[5][5];//�����̿� �������� ����
//	int xx = 0, yy = -1;
//	int unpause = 25;
//
//	int TT = 0 , R4 = 0;//�����̿� ������ �� �� ���� ����
//	int Num = 0;
//	int APP = 5;
//	int NanButton = 1;
//	
//	/* �������� �а��� �����ϴ� �ڵ�*/
//	while (pause > 0)
//	{
//		for (int TT = 0; TT < APP; TT++)//���� ���� �����ϴ� �����̾�
//		{
//			Num++;
//			x = x + NanButton;
//			PingPingE[y][x] = Num;
//		}
//
//		APP = APP - 1;//5,4,4,3,3,2,2,1,1 �� �ϱ����� 1�� ���̱�
//		if (APP <= 0)// ���� 0�� �Ǹ� ��������
//			break;
//
//		for (int R4 = 0; R4 < APP; R4++)//���� ���� �����ϴ� �����̾�
//		{
//			Num++;
//			y = y + NanButton;
//			PingPingE[y][x] = Num;
//		}
//		NanButton = NanButton * (-1);//�ȳ� ���� ����ġ ������
//
//		pause--;
//	}
//	cout << "     ��  ��  " <<endl<< "       ��                           ���� �����̾�  "<<endl<< "      ���  ";//������ ǥ��
//	for (x = 0; x < 5; x++)//�������� �а��� �̻ڰ� ���߱� ���� ���ڰ� �ϳ��� ���� 0���� ���� ����
//	{
//		int y = 0;
//		cout << PingPingE[y][x] << "   ";
//	}
//	cout << endl<<endl;
//
//	for (y = 1; y < 5; y++)//�ȳ� ���� �а��� �������
//	{
//		cout << "      ���  ";
//		for (x = 0; x < 5; x++)
//		{
//			cout << PingPingE[y][x] << "  ";
//		}
//		cout << endl << endl;
//	}
//	cout << "      ��������������" << endl;
//	Num = 0,APP = 5,NanButton = 1;//�����̰� �� �������� �����̸� ���� �ʱ�ȭ �����ִ°��̾�
//
//	/*�������� �а��� �����ϴ� �ڵ�*/
//	while (unpause > 0)
//	{
//		for (int TT = 0; TT < APP; TT++)//�����̴� ����������ؼ� �Ʒ��ΰ��°� ���� �����Ѵ�
//		{
//			Num++;
//			yy = yy + NanButton;
//			KkingKkingE[yy][xx] = Num;
//		}
//
//		APP = APP - 1;//�ȳ� ���� �����Ʈ�� ����
//		if (APP <= 0)//�ȳ� ���� ������ ����
//			break;
//
//		for (int R4 = 0; R4 < APP; R4++)//�������� ���� ó�� 4������ �����ߴ� �پ����� �Ѵ�
//		{
//			Num++;
//			xx = xx + NanButton;
//			KkingKkingE[yy][xx] = Num;
//		}
//		NanButton = NanButton * (-1);//���� û�������� 1�� ���� -1�� �ٲ��� -1�� ���� 1�� �ٲ۴�
//
//		unpause--;
//	}
//	cout << endl << endl;
//
//	cout << "      ����  "<<endl<< "       ��                           ���� ��������  "<<endl;//������ ǥ��
//	for (yy = 0; yy < 4; yy++)//�������� �а��� ����ϴ� �ڵ�
//	{
//
//		cout << "      ���  ";
//		for (xx = 0; xx < 5; xx++)
//		{
//			cout << KkingKkingE[yy][xx] << "  ";
//		}
//		cout << endl << endl;
//	}
//
//	cout << "      ���  ";
//	for (xx = 0; xx < 5; xx++)//�����̴� �Ʒ� 5�ٿ� ���ڰ� �ϳ����� �� ���� �ȸ¾Ƽ� ���� �����
//	{
//		int yy = 4;
//		cout << KkingKkingE[yy][xx] << "   ";
//	}
//	cout << endl<<"      ��������������" << endl;
//	cout << endl << endl;
//
//	return 0;
//}