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
//		cout << "책이름:" << name<< endl;
//		cout << "책저자:" << auth << endl;
//		cout << "출판사:" << publ << endl;
//		cout << "도서번호:" << num << endl;
//
//		if (borrow == 0)
//		{
//			cout << "현재 빌릴 수 있어요!!" << endl;
//			cout << "================================================================" << endl;
//		}
//		else
//		{
//			cout << "현재 책을 누가 빌려갔어요 ㅠㅠ" << endl;
//			cout << "================================================================" << endl;
//		}
//	}
//
//
//	void book_borrow()//빌리는 함수
//	{
//		int sw;
//		int _borrow;
//
//		
//		cout << "어떤 책을 빌리실건가요? 도서번호를 입력해주세요" << endl;
//		cin >> _borrow;
//
//			if (num == _borrow)
//			{
//				if (borrow == 1)
//				{
//					cout << "책을 이미 누가 빌려갔어요 ㅠㅠ 빌릴 수 없습니다 아무 숫자나 누르면 돌아갑니다" << endl;
//					cin >> sw;
//				}
//				else
//				{
//					cout << name << " 책을 빌리고 싶다면 1번 아니면 아무 숫자나 눌러주세요." << endl;
//					cin >> sw;
//					if (sw == 1)
//					{
//						borrow = 1;
//						cout << name << "책을 빌리셨습니다! 재밋게 보세요~ 반납기한은 일주일 이에요! 아무 숫자나 누르면 돌아갑니다!" << endl;
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
	//int book_return(Books _B[])//반납하는 함수
	//{
	//	int sw;
	//	int _borrow;
	//	//book_serch(_B);
	//	cout << "책을 반납하러 오셨군요~ 재미있게 읽으셨나요? 어떤 책을 반납 하시나요?" << endl;
	//	cin >> _borrow;
	//	for (int i = 0; i < 11; i++)
	//	{
	//		if (_B[i].num == _borrow)
	//		{
	//			if (_B[i].borrow == 0)
	//			{
	//				cout << "이 책은 이미 도서관에 있는 책이에요! 아무 숫자나 누르면 돌아갑니다" << endl;
	//				cin >> sw;
	//				break;
	//			}
	//			else
	//			{
	//				cout << _B[i].name << " 책을 반납 하시나요? 맞으면 1번, 틀리면 아무 숫자나 눌러주세요" << endl;
	//				cin >> sw;
	//				if (sw == 1)
	//				{
	//					_B[i].borrow = 0;
	//					cout << _B[i].name << "책을 반납하셨습니다! 또 이용해주세요~ 아무 숫자나 누르면 돌아갑니다" << endl;
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
//		Book_vector.push_back(new Books);//북벡터 10개공간 할당
//	}
//	Book_vector[0]->book_info("란마1/2", "다카하시 루미코", "서울미디어코믹스", 0, 11111);
//	Book_vector[1]->book_info("어린왕자", "생택쥐 베리", "문학동네", 0, 22222);
//	Book_vector[2]->book_info("연금술사", "파울로 코엘코", "문학동네", 0, 33333);
//	Book_vector[3]->book_info("그레이의 50가지 그림자", "E L 제임스", "시공사", 0, 44444);
//	Book_vector[4]->book_info("풍경", "원성", "이레", 0, 55555);
//	Book_vector[5]->book_info("무소유", "법정", "범우사", 0, 66666);
//	Book_vector[6]->book_info("클릭! 미래 속으로", "페이스 팝콘", "21세기 북스", 0, 77777);
//	Book_vector[7]->book_info("영어공부 절대로 하지마라!", "사회평론", "한겨레출판", 0, 88888);
//	Book_vector[8]->book_info("몰입의 즐거움", "미하이 칙센트미하이", "시공사", 0, 99999);
//	Book_vector[9]->book_info("해리포터와 마법사의 돌", "조앤K.롤링", "문학수첩", 0, 10101010);
//
//	while (1)
//	{
//		system("cls");//실행 할 때마다 화면 정리해줌
//
//
//		cout << "================================================================" << endl << "--도서관리 시스템--" << endl << "어떤 서비스를 원하시나요 ? " << endl << endl << "1.도서 목록 조회하기         " << "2.책 대출하기" << endl;
//		cout << "3.책 반납하기        " << "        4.신규 도서 등록" <<endl<<"5.등록 도서 삭제             " << "6.종료" << endl << "================================================================" << endl;
//		cin >> sw;
//
//
//		//만약 sw가 인트가 아니라면 다시 입력하게 해준다 (예외처리)
//		if (cin.fail() == true) {
//			//에러버퍼를 깨끗하게 해주고,남은 공백 없애준다
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
//			cout << "아무 숫자나 누르면 돌아갑니다."<<endl;
//			cin>>sw;
//			break;
//		case 2:		
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				Book_vector[i]->book_serch();
//			}
//			cout << "빌리고 싶은 책의 도서번호를 입력해주세요!" << endl;
//			cin >> sw;
//			check = 0;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (sw == Book_vector[i]->num)
//				{
//					if (1 == Book_vector[i]->borrow)
//					{
//						cout << "책을 이미 누가 빌려갔어요ㅠㅠ 아무 숫자나 누르면 초기 화면으로 돌아갑니다." << endl;
//							cin>>temp;
//							check = 10;
//							break;
//					}
//					cout << "빌리고 싶은 책은 | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | 입니다. 이 책을 빌리시곘습니까?" << endl;
//					cout << "빌리고 싶다면 1을 누르시고, 초기화면으로 돌아가시려면 아무 숫자나 눌러주세요." << endl;
//					cin >> borrow;
//					if (borrow == 1)
//					{
//						Book_vector[i]->borrow = 1;
//						cout << Book_vector[i]->name << " 책을 빌렸습니다! 반납기한은 일주일 이에요!" << endl<<"아무 숫자나 누르면 초기화면으로 돌아갑니다.";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "요청하신 책의 도서번호를 찾을 수 없습니다" << endl << "아무 숫자나 누르면 초기 화면으로 돌아갑니다" << endl;
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
//			cout << "반납하실 책의 도서번호를 입력해주세요!" << endl;
//			cin >> sw;
//			check = 0;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (sw == Book_vector[i]->num)
//				{
//					if (0 == Book_vector[i]->borrow)
//					{
//						cout << "해당 책은 이미 도서관에 있는 책이에요" << endl<<"아무 숫자나 누르시면 초기 화면으로 돌아갑니다";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//					cout << "반납하실 책은 | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | 입니다. 이 책을 반납하시겠습니까?" << endl;
//					cout << "반납 하신다면 1을 누르시고, 초기화면으로 돌아가시려면 아무 숫자나 눌러주세요." << endl;
//					cin >> borrow;
//					if (borrow == 1)
//					{
//						Book_vector[i]->borrow = 0;
//						cout << Book_vector[i]->name << " 책을 반납했습니다! 또 이용해주세요~" << endl << "아무 숫자나 누르면 초기화면으로 돌아갑니다.";
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "요청하신 책의 도서번호를 찾을 수 없습니다" << endl << "아무 숫자나 누르면 초기 화면으로 돌아갑니다" << endl;
//				cin >> temp;
//				break;
//			}
//
//			break;
//		case 4:
//				cout << "등록할 책 이름을 입력하세요:"; cin >> Mname;
//				cout << endl << "등록할 책의 저자를 입력하세요:"; cin >> Mauth;
//				cout << endl << "등록할 책의 출판사를 입력하세요:"; cin >> Mpubl;
//				cout << endl << "등록할 책의 도서번호를 입력하세요:"; cin >> Mnum;
//				for (int i = 0; i < Book_vector.size(); i++)
//				{
//					if (Book_vector[i]->num == Mnum)
//					{
//						cout << Book_vector[i]->name << "  (도서번호:" << Book_vector[i]->num << ")  책과 도서번호가 중복 되었어요! 다시 시도해주세요. 아무키나 누르면 돌아갑니다."<<endl;
//						cin >> temp;
//						check = 1;
//						break;
//					}
//				}
//				if (check != 1)
//				{
//					Book_vector.push_back(new Books);
//					Book_vector[Book_vector.size() - 1]->book_info(Mname, Mauth, Mpubl, 0, Mnum);
//					cout << endl << "등록성공! 아무 숫자나 누르면 돌아갑니다"<<endl;
//					cin >> sw;
//					check = 0;
//					break;
//				}
//				else
//					check = 0;
//					break;
//
//		case 5:
//			cout << "삭제할 책의 도서번호를 입력하세요:"; cin >> Mnum;
//			for (int i = 0; i < Book_vector.size(); i++)
//			{
//				if (Book_vector[i]->borrow == 1)
//				{
//					cout << "해당 책은 누가 빌려간 상태입니다 삭제 할 수 없습니다!" << endl<<"아무 숫자나 누르시면 초기 화면으로 돌아갑니다"<<endl;
//					check = 10;
//					cin >> temp;
//					break;
//				}
//				if (Book_vector[i]->num == Mnum)
//				{
//					cout << "삭제 하시려는 책은 | " << Book_vector[i]->name << " | " << Book_vector[i]->auth << " | " << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | 입니다. 정말 삭제하시겠습니까 ? "<<endl<< "관리자 비밀번호를 누르시면 해당 책이 삭제됩니다.(비밀번호1111)" << endl;
//					cin >> sw;
//
//					if (sw == 1111)
//					{
//						cout << "| " << Book_vector[i]->name << " | " << Book_vector[i]->auth << " | " << Book_vector[i]->publ << " | " << Book_vector[i]->num << " | 책을 삭제하였습니다!" << endl << "아무 숫자나 누르면 초기화면으로 돌아갑니다.";
//						delete Book_vector[i];
//						Book_vector.erase(Book_vector.begin() + i);
//						check = 10;
//						cin >> temp;
//						break;
//					}
//					else if (sw != 1111)
//					{
//						cout << "비밀번호 오류! 초기화면으로 돌아갑니다." << endl;
//						cin >> temp;
//						check = 10;
//						break;
//					}
//				}
//			}
//			if (check == 0)
//			{
//				cout << "요청하신 도서 번호를 찾을 수 없습니다. 아무 숫자나 누르면 돌아갑니다." << endl;
//				check = 0;
//				cin >> temp;
//				break;
//			}
//
//			break;
//
//		case 6:
//			cout << "도서 대출 시스템을 종료합니다" << endl;
//			return 0;
//		default:
//			cout << "잘못 입력하셨습니다. 아무 숫자나 누르면 돌아갑니다." << endl;
//			cin >> sw;
//			break;
//		}
//	}
//	return 0;
//}
