//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Books
//{
//public:
//	string name;
//	string auth;
//	string publ;
//	int bil;
//	int borrow=0;
//	int num;
//
//	void book_info(string _name,string _auth, string _publ, int _borrow, int _num)
//	{
//		name = _name;
//		auth = _auth;
//		publ = _publ;
//		borrow = _borrow;
//		num = _num;
//	}
//
//	void book_serch()
//	{
//		cout << "================================================================" << endl;
//		cout << "å�̸�:" << name<< endl;
//		cout << "å����:" << auth << endl;
//		cout << "���ǻ�:" << publ << endl;
//		cout << "������ȣ:" << num << endl;
//
//		if (borrow == 0)
//		{
//			cout << "���� ���� �� �־��!!" << endl;
//			cout << "================================================================" << endl;
//		}
//		else
//		{
//			cout << "���� å�� ���� ��������� �Ф�" << endl;
//			cout << "================================================================" << endl;
//		}
//	}
//
//
//	void book_borrow()//������ �Լ�
//	{
//		int sw;
//		int _borrow;
//
//		
//		cout << "� å�� �����ǰǰ���? ������ȣ�� �Է����ּ���" << endl;
//		cin >> _borrow;
//
//			if (num == _borrow)
//			{
//				if (borrow == 1)
//				{
//					cout << "å�� �̹� ���� ��������� �Ф� ���� �� �����ϴ� �ƹ� ���ڳ� ������ ���ư��ϴ�" << endl;
//					cin >> sw;
//				}
//				else
//				{
//					cout << name << " å�� ������ �ʹٸ� 1�� �ƴϸ� �ƹ� ���ڳ� �����ּ���." << endl;
//					cin >> sw;
//					if (sw == 1)
//					{
//						borrow = 1;
//						cout << name << "å�� �����̽��ϴ�! ��԰� ������~ �ݳ������� ������ �̿���! �ƹ� ���ڳ� ������ ���ư��ϴ�!" << endl;
//						cin >> sw;
//					}
//				}
//			}
//		
//	}
//	void book_remove()
//	{
//
//
//	}
//};
//
	//int book_return(Books _B[])//�ݳ��ϴ� �Լ�
	//{
	//	int sw;
	//	int _borrow;
	//	//book_serch(_B);
	//	cout << "å�� �ݳ��Ϸ� ���̱���~ ����ְ� �����̳���? � å�� �ݳ� �Ͻó���?" << endl;
	//	cin >> _borrow;
	//	for (int i = 0; i < 11; i++)
	//	{
	//		if (_B[i].num == _borrow)
	//		{
	//			if (_B[i].borrow == 0)
	//			{
	//				cout << "�� å�� �̹� �������� �ִ� å�̿���! �ƹ� ���ڳ� ������ ���ư��ϴ�" << endl;
	//				cin >> sw;
	//				break;
	//			}
	//			else
	//			{
	//				cout << _B[i].name << " å�� �ݳ� �Ͻó���? ������ 1��, Ʋ���� �ƹ� ���ڳ� �����ּ���" << endl;
	//				cin >> sw;
	//				if (sw == 1)
	//				{
	//					_B[i].borrow = 0;
	//					cout << _B[i].name << "å�� �ݳ��ϼ̽��ϴ�! �� �̿����ּ���~ �ƹ� ���ڳ� ������ ���ư��ϴ�" << endl;
	//					cin >> sw;
	//					return _B[i].borrow;
	//					break;
	//				}
	//				else
	//					break;
	//			}
	//		}
	//	}
	//}
//
//
//int main()
//{
//	int i = 0;
//	int sw = 0;
//	int temp = 0;
//	int borrow = 0;
//	int b = 0, s = 0;
//	int check = 0;
//
//	string Mname;
//	string Mauth;
//	string Mpubl;
//	int Mnum = 0;
//
//	vector <Books*> Book_vector;
//	for (int i = 0; i < 10; i++)
//	{
//		Book_vector.push_back(new Books);//�Ϻ��� 10������ �Ҵ�
//	}
//	Book_vector[0]->book_info("����1/2", "��ī�Ͻ� �����", "����̵���ڹͽ�", 0, 11111);
//	Book_vector[1]->book_info("�����", "������ ����", "���е���", 0, 22222);
//	Book_vector[2]->book_info("���ݼ���", "�Ŀ�� �ڿ���", "���е���", 0, 33333);
//	Book_vector[3]->book_info("�׷����� 50���� �׸���", "E L ���ӽ�", "�ð���", 0, 44444);
//	Book_vector[4]->book_info("ǳ��", "����", "�̷�", 0, 55555);
//	Book_vector[5]->book_info("������", "����", "�����", 0, 66666);
//	Book_vector[6]->book_info("Ŭ��! �̷� ������", "���̽� ����", "21���� �Ͻ�", 0, 77777);
//	Book_vector[7]->book_info("������� ����� ��������!", "��ȸ���", "�Ѱܷ�����", 0, 88888);
//	Book_vector[8]->book_info("������ ��ſ�", "������ Ģ��Ʈ������", "�ð���", 0, 99999);
//	Book_vector[9]->book_info("�ظ����Ϳ� �������� ��", "����K.�Ѹ�", "���м�ø", 0, 10101010);
//
//	while (1)
//	{
//		system("cls");//���� �� ������ ȭ�� ��������
//
//
//		cout << "================================================================" << endl << "--�������� �ý���--" << endl << "� ���񽺸� ���Ͻó��� ? " << endl << endl << "1.���� ��� ��ȸ�ϱ�         " << "2.å �����ϱ�" << endl;
//		cout << "3.å �ݳ��ϱ�        " << "        4.�ű� ���� ���" <<endl<<"5.��� ���� ����             " << "6.����" << endl << "================================================================" << endl;
//		cin >> sw;
//
//
//		//���� sw�� ��Ʈ�� �ƴ϶�� �ٽ� �Է��ϰ� ���ش� (����ó��)
//		if (cin.fail() == true) {
//			//�������۸� �����ϰ� ���ְ�,���� ���� �����ش�
//			cin.clear();
//			cin.ignore(1024, '\n');
//		}
//		switch (sw)
//		{
//
//		case 1:
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				Book_vector[i]->book_serch();
//			}
//			cout << "�ƹ� ���ڳ� ������ ���ư��ϴ�."<<endl;
//			cin>>sw;
//			break;
//		case 2:		
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				Book_vector[i]->book_serch();
//			}
//			cout << "������ ���� å�� ������ȣ�� �Է����ּ���!" << endl;
//			cin >> sw;
//			check = 0;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (sw == Book_vector[i]->num)
//				{
//					if (1 == Book_vector[i]->borrow)
//					{
//						cout << "å�� �̹� ���� ���������Ф� �ƹ� ���ڳ� ������ �ʱ� ȭ������ ���ư��ϴ�." << endl;
//							cin>>temp;
//							check = 10;
//							break;
//					}
//					cout << "������ ���� å�� | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | �Դϴ�. �� å�� �����Áٽ��ϱ�?" << endl;
//					cout << "������ �ʹٸ� 1�� �����ð�, �ʱ�ȭ������ ���ư��÷��� �ƹ� ���ڳ� �����ּ���." << endl;
//					cin >> borrow;
//					if (borrow == 1)
//					{
//						Book_vector[i]->borrow = 1;
//						cout << Book_vector[i]->name << " å�� ���Ƚ��ϴ�! �ݳ������� ������ �̿���!" << endl<<"�ƹ� ���ڳ� ������ �ʱ�ȭ������ ���ư��ϴ�.";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "��û�Ͻ� å�� ������ȣ�� ã�� �� �����ϴ�" << endl << "�ƹ� ���ڳ� ������ �ʱ� ȭ������ ���ư��ϴ�" << endl;
//				cin >> temp;
//				break;
//			}
//
//			break;		  
//		case 3:
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				Book_vector[i]->book_serch();
//			}
//			cout << "�ݳ��Ͻ� å�� ������ȣ�� �Է����ּ���!" << endl;
//			cin >> sw;
//			check = 0;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (sw == Book_vector[i]->num)
//				{
//					if (0 == Book_vector[i]->borrow)
//					{
//						cout << "�ش� å�� �̹� �������� �ִ� å�̿���" << endl<<"�ƹ� ���ڳ� �����ø� �ʱ� ȭ������ ���ư��ϴ�";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//					cout << "�ݳ��Ͻ� å�� | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | �Դϴ�. �� å�� �ݳ��Ͻðڽ��ϱ�?" << endl;
//					cout << "�ݳ� �ϽŴٸ� 1�� �����ð�, �ʱ�ȭ������ ���ư��÷��� �ƹ� ���ڳ� �����ּ���." << endl;
//					cin >> borrow;
//					if (borrow == 1)
//					{
//						Book_vector[i]->borrow = 0;
//						cout << Book_vector[i]->name << " å�� �ݳ��߽��ϴ�! �� �̿����ּ���~" << endl << "�ƹ� ���ڳ� ������ �ʱ�ȭ������ ���ư��ϴ�.";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "��û�Ͻ� å�� ������ȣ�� ã�� �� �����ϴ�" << endl << "�ƹ� ���ڳ� ������ �ʱ� ȭ������ ���ư��ϴ�" << endl;
//				cin >> temp;
//				break;
//			}
//
//			break;
//		case 4:
//				cout << "����� å �̸��� �Է��ϼ���:"; cin >> Mname;
//				cout << endl << "����� å�� ���ڸ� �Է��ϼ���:"; cin >> Mauth;
//				cout << endl << "����� å�� ���ǻ縦 �Է��ϼ���:"; cin >> Mpubl;
//				cout << endl << "����� å�� ������ȣ�� �Է��ϼ���:"; cin >> Mnum;
//				for (int i = 0; i < Book_vector.size(); i++)
//				{
//					if (Book_vector[i]->num == Mnum)
//					{
//						cout << Book_vector[i]->name << "  (������ȣ:" << Book_vector[i]->num << ")  å�� ������ȣ�� �ߺ� �Ǿ����! �ٽ� �õ����ּ���. �ƹ�Ű�� ������ ���ư��ϴ�."<<endl;
//						cin >> temp;
//						check = 1;
//						break;
//					}
//				}
//				if (check != 1)
//				{
//					Book_vector.push_back(new Books);
//					Book_vector[Book_vector.size() - 1]->book_info(Mname, Mauth, Mpubl, 0, Mnum);
//					cout << endl << "��ϼ���! �ƹ� ���ڳ� ������ ���ư��ϴ�"<<endl;
//					cin >> sw;
//					check = 0;
//					break;
//				}
//				else
//					check = 0;
//					break;
//
//		case 5:
//			cout << "������ å�� ������ȣ�� �Է��ϼ���:"; cin >> Mnum;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (Book_vector[i]->borrow == 1)
//				{
//					cout << "�ش� å�� ���� ������ �����Դϴ� ���� �� �� �����ϴ�!" << endl<<"�ƹ� ���ڳ� �����ø� �ʱ� ȭ������ ���ư��ϴ�"<<endl;
//					check = 10;
//					cin >> temp;
//					break;
//				}
//				if (Book_vector[i]->num == Mnum)
//				{
//					cout << "���� �Ͻ÷��� å�� | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << " | " << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | �Դϴ�. ���� �����Ͻðڽ��ϱ� ? "<<endl<< "������ ��й�ȣ�� �����ø� �ش� å�� �����˴ϴ�.(��й�ȣ1111)" << endl;
//					cin >> sw;
//
//					if (sw == 1111)
//					{
//						cout << "| " << Book_vector[i]->name << " | " << Book_vector[i]->auth << " | " << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | å�� �����Ͽ����ϴ�!" << endl << "�ƹ� ���ڳ� ������ �ʱ�ȭ������ ���ư��ϴ�.";
//						delete Book_vector[i];
//						Book_vector.erase(Book_vector.begin() + i);
//						check = 10;
//						cin >> temp;
//						break;
//					}
//					else if (sw != 1111)
//					{
//						cout << "��й�ȣ ����! �ʱ�ȭ������ ���ư��ϴ�." << endl;
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "��û�Ͻ� ���� ��ȣ�� ã�� �� �����ϴ�. �ƹ� ���ڳ� ������ ���ư��ϴ�." << endl;
//				check = 0;
//				cin >> temp;
//				break;
//			}
//
//			break;
//
//		case 6:
//			cout << "���� ���� �ý����� �����մϴ�" << endl;
//			return 0;
//		default:
//			cout << "�߸� �Է��ϼ̽��ϴ�. �ƹ� ���ڳ� ������ ���ư��ϴ�." << endl;
//			cin >> sw;
//			break;
//		}
//	}
//	return 0;
//}
