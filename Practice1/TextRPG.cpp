//#include<iostream>
//#include<string>
//#include<vector>
//#include<windows.h>
//#include<time.h>
//using namespace std;
//
//
//
//class defaultobj
//{
//public:
//	string name;
//	int hp;
//	int att;
//	int def;
//	int str;
//	int age;
//	int hunger;
//	int thirsty;
//	int damage;
//
//	float day;
//
//	defaultobj()
//	{
//		name = "object";
//		hp = 100;
//		att = 5;
//		def = 1;
//		str = 50;
//	}
//};
//
//
//class servivor : public defaultobj
//{
//public:
//
//
//
//
//	servivor()
//	{
//		name = "default";
//		hp = 150;
//		str = 30;
//		age = 25;
//		hunger = 150;
//		thirsty = 120;
//		day = 0;
//
//		att = 20;
//		def = 1;
//	}
//
//	void servivorinfo(servivor _name)
//	{
//		system("cls");
//		cout << "==================================================================================" << endl<<endl;
//		cout << "                                 "  <<_name.name<<"                                          " << endl;
//		cout << _name.age << "세               공격력:" << _name.att << "              방어력:" << _name.def << "       " << endl;
//		cout << "                   체력:"<<_name.hp<<"               기력:"<<_name.str<<"   " << endl;
//		cout << "                   배고픔:"<<_name.hunger<<"             목마름:"<<_name.thirsty<<"                 " << endl;
//		cout << "==================================================================================" << endl;
//		system("PAUSE");
//	}
//	
//	bool serch(servivor* _name)
//	{
//		int d = 0;
//		if (str < 10)
//		{
//			cout << "==================================================================================" << endl;
//			cout << "기력이 없어서 섬을 수색 할 수 없다.." << endl;
//			cout << "==================================================================================" << endl;
//			system("PAUSE");
//		}
//		else
//		{
//			str -= 10;
//			thirsty -= 20;
//			hunger -= 15;
//			day += 0.2;
//
//			system("cls");
//			cout << "수색중."; Sleep(1000); system("cls"); cout << "수색중.."; Sleep(1000); system("cls"); cout << "수색중..."; Sleep(1000); system("cls"); cout << "수색중...."; Sleep(1000); system("cls"); cout << "수색중....."; Sleep(1000);
//
//			d = rand() % 12;
//			if (d <= 4 && d >= 0)
//			{
//				cout << endl<<"==================================================================================" << endl;
//				cout << "아무것도 발견하지 못했다..." << endl;
//				cout << "==================================================================================" << endl;
//				system("PAUSE");
//			}
//			else if (d >= 5 && d <= 7)
//			{
//				cout << endl<<"==================================================================================" << endl;
//				cout << "과일과 마실 물을 찾았다! 배고픔과 목마름이 보충되었다. " << endl;//추후에 아이템 획득, 랜덤한 아이템 획득으로 변경할것
//				cout << "==================================================================================" << endl;
//				_name->thirsty =_name->thirsty + 40;
//				_name->hunger = _name->hunger + 45;
//				system("PAUSE");
//			}
//			else if (d >= 8)
//			{
//					cout << endl<<"==================================================================================" << endl;
//					cout << "야생 동물과 조우했다!" << endl;
//					cout << "==================================================================================" << endl;
//					system("Pause");
//					return 1;
//					
//			}
//
//		}
//
//
//	}
//
//	void ship()
//	{
//		if (str < 5)
//		{
//			cout << "==================================================================================" << endl;
//			cout <<name<< "는 기력이 없어서 해안가를 확인 할 수 없었다.." << endl;
//			cout << "==================================================================================" << endl;
//			system("PAUSE");
//		}
//		
//
//		else
//		{
//			str -= 5;
//			thirsty -= 5;
//			hunger -= 10;
//			day += 0.2;
//			int s = 0;
//			s=rand() % 450;
//
//			if (s >= 400)
//			{
//				cout << "==================================================================================" << endl;
//				cout << "배가 지나가고 있다!" << endl;
//				Sleep(1000);
//				cout << "당신은 급하게 불을 피워 구조신호를 보냈다..." << endl;
//				cout << "==================================================================================" << endl;
//				system("PAUSE");
//				int s = 0;
//				s = rand() % 500;
//				if (s >= 250)
//				{
//					cout << "==================================================================================" << endl;
//					cout << "당신은 지나가던 배에 의해 발견되어 구조되었습니다." << endl << "Happy End      생존일수:" << (int)day << endl;
//					cout << "==================================================================================" << endl;
//					system("PAUSE");
//					exit(0);
//				}
//				else
//				{
//					cout << "==================================================================================" << endl;
//					cout << "당신은 지나가던 배를 향해서 필사적으로 구조신호를 보냈지만, 당신을 발견하지 못하고 그냥 지나가버렸다...." << endl;
//					cout << "==================================================================================" << endl;
//					system("PAUSE");
//				}
//			}
//
//			else
//			{
//				cout << "==================================================================================" << endl;
//				cout << "지나가는 배는 없는 것 같다.."<<endl;
//				cout << "==================================================================================" << endl;
//				system("PAUSE");
//			}
//		}
//	}
//
//	void rest()
//	{
//		day += 0.5;
//		hp += 30;
//		str += 30;
//		thirsty -= 5;
//		hunger -= 10;
//		cout << "==================================================================================" << endl;
//		cout << name << "은 근처 동굴에서 푹 쉬었다..\n 체력과 기력이 천천히 회복된다.." << endl;
//		cout << "==================================================================================" << endl;
//		system("PAUSE");
//	}
//
//	void itemuse()
//	{
//		
//		cout << "==================================================================================" << endl;
//		cout << name << " 은 구급약을 사용했다! " <<name<<"의 HP가 100만큼 회복되었다!" << endl;
//		cout << "==================================================================================" << endl;
//
//		cout << "==================================================================================" << endl;
//		cout << name << " 은 고기를 먹었다! " << name << "의 HP가 30, 배고픔이 50만큼 회복되었다!" << endl;
//		cout << "==================================================================================" << endl;
//
//		cout << "==================================================================================" << endl;
//		cout << name << " 은 물을 마셨다! " << name << "의 HP가 10, 목마름이 50만큼 회복되었다!" << endl;
//		cout << "==================================================================================" << endl;
//
//		cout << "==================================================================================" << endl;
//		cout << name << " 은 영양제를 먹었다! " << name << "의 HP가 10, 기력이 50만큼 회복되었다!" << endl;
//		cout << "==================================================================================" << endl;
//
//
//
//
//
//	}
//
//};
//
//class wild : public defaultobj
//{
//public:
//	wild()
//	{
//		name = "WildDefault";
//		hp = 100;
//		str = 30;
//		att = 3;
//		def = 1;
//	}
//
//	void wildset(string _name,int _hp,int _str,int _att,int _def)
//	{
//		name = _name;
//		hp = _hp;
//		str = _str;
//		att = _att;
//		def = _def;
//	}
//};
//
//class item : public servivor
//{
//public:
//	string name;
//	int weight;
//
//
//	void setitem(string _name, int _weight)
//	{
//		name = _name;
//		weight = _weight;
//	}
//
//	void inventorylist()
//	{
//		
//		cout << name <<"\t\t" << weight << endl;
//
//	}
//};
//
//class inventory : public item
//{
//public:
//
//	int item_list[3];
//
//	void itemlist()
//	{
//
//	}
//
//
//};
//
//
//
//
//
//void fightinfo(servivor* _servivor, wild* _wild)
//{
//	system("cls");
//	cout << "==================================================================================" << endl << endl;
//	cout << "                                 " << _servivor->name << "                                          " << endl;
//	cout << _servivor->age << "세               공격력:" << _servivor->att << "              방어력:" << _servivor->def << "       " << endl << endl;
//	cout << "                    체력:" << _servivor->hp << "                           " << endl;
//	cout << "==================================================================================" << endl;
//	cout << "==================================================================================" << endl << endl;
//	cout << "                                 " << _wild->name << "                                          " << endl;
//	cout << "                  공격력:" << _wild->att << "              방어력:" << _wild->def << "       " << endl << endl;
//	cout << "                    체력:" << _wild->hp << "                           " << endl;
//	cout << "==================================================================================" << endl;
//	system("PAUSE");
//};
//
//void servivorattack(servivor* _servivor, wild* _wild)
//{
//	if (_servivor->att - _wild->def <= 0)
//	{
//		cout << "==================================================================================" << endl;
//		cout << _servivor->name << "의 공격!!" << endl;
//		Sleep(1000);
//
//		cout << _servivor->name << "의 공격은 허무하게 빗나갔다!" << endl;
//		cout << "==================================================================================" << endl;
//	}
//	else if(_servivor->att - _wild->def > 0)
//	{
//		int R = 0;
//		R = rand();
//		if (R > 3276)
//		{
//			cout << "==================================================================================" << endl;
//			cout << _servivor->name << "의 공격!!" << endl;
//			Sleep(1000);
//
//			_wild->hp = _wild->hp - (_servivor->att - _wild->def);
//
//			cout << _wild->name << "은(는)" << _servivor->att - _wild->def << "의 피해를 입었다!" << endl;
//			cout << "==================================================================================" << endl;
//		}
//		else
//		{
//			cout << "==================================================================================" << endl;
//			cout << _servivor->name << "의 통한의 일격!!" << endl;
//			Sleep(1000);
//
//			_wild->hp = _wild->hp - ((3 * _servivor->att) - _wild->def);
//
//			cout << _wild->name << "은(는)" << (3*_servivor->att) - _wild->def << "의 치명타를 입었다!" << endl;
//			cout << "==================================================================================" << endl;
//		}
//	}
//	
//}
//
//void wildattack(servivor* _servivor, wild* _wild)
//{
//	if (_wild->att - _servivor->def <= 0)
//	{
//		cout << "==================================================================================" << endl;
//		cout << "야생동물 " << _wild->name << "의 공격!!" << endl;
//		Sleep(1000);
//
//		cout << _servivor->name << "은(는)" << _wild->name << "의 공격을 가볍게 피했다!" << endl;
//		cout << "==================================================================================" << endl;
//	}
//
//	else if(_wild->att - _servivor->def > 0)
//	{
//		int R = 0;
//		R = rand();
//		if (R > 3276)
//		{
//			cout << "==================================================================================" << endl;
//			cout << "야생동물 " << _wild->name << "의 공격!!" << endl;
//			Sleep(1000);
//
//			_servivor->hp = _servivor->hp - (_wild->att - _servivor->def);
//
//			cout << _servivor->name << "은(는)" << _wild->att - _servivor->def << "의 피해를 입었다!" << endl;
//			cout << "==================================================================================" << endl;
//		}
//		else
//		{
//			cout << "==================================================================================" << endl;
//			cout << "야생동물 " << _wild->name << "의 통한의 일격!!" << endl;
//			Sleep(1000);
//
//			_servivor->hp = _servivor->hp - ((3 * _wild->att) - _servivor->def);
//
//			cout << _servivor->name << "은(는)" << (3*_wild->att) - _servivor->def << "의 치명타를 입었다!" << endl;
//			cout << "==================================================================================" << endl;
//		}
//	}
//
//}
//
//
//bool playerfight(servivor* _servivor, wild* _wild)
//{
//	int i = 0;
//	int d = 0;
//	while (i <= 9)
//	{
//		if (_servivor->hp <= 0)
//		{
//			system("cls");
//			cout << "==================================================================================" << endl;
//			cout << _servivor->name << "은 야생동물 "<<_wild->name<<" 에 의해 사망하였습니다." << endl << "생존일수:" << (int)_servivor->day << "일";
//			cout << endl<<"==================================================================================" << endl;
//			exit(0);
//		}
//		else if (_wild->hp <= 0)
//		{
//			cout << "==================================================================================" << endl;
//			cout << _servivor->name << "은 야생동물 " << _wild->name << " 을(를) 잡았다!" << endl;
//			cout << "==================================================================================" << endl;
//			system("pause");
//			return 1;
//		}
//
//		system("cls");
//		int sw = 0;
//		cout << "==================================================================================" << endl;
//		cout << _wild->name << "의 출현!!" << endl;
//		cout << _servivor->name << "은 무엇을 할까?" << endl << endl;
//		cout << "1.싸운다           2.도구를쓴다          3.상태를 본다         4.도망간다" << endl;
//		cout << "==================================================================================" << endl;
//		cin >> sw;
//
//		switch (sw)
//		{
//		case 1:
//			servivorattack(_servivor, _wild);
//			system("pause");
//			wildattack(_servivor, _wild);
//			system("pause");
//			break;
//		case 2:
//			break;
//		case 3:
//			fightinfo(_servivor, _wild);
//			break;
//		case 4:
//			d = rand() % (0 - 10 + 1);
//			if (d >= 5)
//			{
//				i = 10;
//				cout << "==================================================================================" << endl;
//				cout << "겨우 따돌린 것 같다..." << endl;
//				cout << "==================================================================================" << endl;
//				system("pause");
//			}
//			else
//			{
//				cout << "==================================================================================" << endl;
//				cout << "도망칠 수 없었다!" << endl;
//				_servivor->hp = _servivor->hp - (_wild->att - _servivor->def);
//				cout << _servivor->name << "은(는) 도망치려다 " << _wild->name << " 에게 공격을 받았다!" << endl;
//				cout << "==================================================================================" << endl;
//				system("pause");
//			}
//		default:
//			break;
//		}
//
//
//	}
//}
//
//
//
//
//int in()
//{
//
//	srand((unsigned int)time(0));
//
//	string setname; 
//	int age=0;
//	int act=0;
//	int R = 0;
//	int sw = 0;
//	bool reward = 0;
//	servivor player;
//
//	vector<item*> item_list;
//	vector<wild*> wild_mob;
//	for (int i = 0; i < 5; i++)
//	{
//		wild_mob.push_back(new wild);//wildmob 배열 히프 영역에 5개 할당
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		item_list.push_back(new item);//item_list 배열 히프 영역에 5개 할당
//	}
//
//	wild_mob[0]->wildset("야생 토끼", 60, 30, 1, 10);
//	wild_mob[1]->wildset("멧돼지", 300, 300, 30, 5);
//	wild_mob[2]->wildset("늑대", 100, 130, 50, 3);
//	wild_mob[3]->wildset("야생 닭", 60, 30, 1, 1);
//	wild_mob[4]->wildset("야생 곰", 1000, 500, 100, 20);
//
//	item_list[0]->setitem("물", 10);
//	item_list[1]->setitem("고기", 10);
//	item_list[2]->setitem("구급약", 5);
//	item_list[3]->setitem("영양제", 3);
//	item_list[4]->setitem("권총", 3);
//
//
//	cout << "당신의 이름은?:";//opening
//	cin >> setname;
//	player.name = setname;
//	system("cls");
//	cout << "당신의 나이는?:";
//	cin >> age;
//	player.age = age;
//	system("cls");
//	cout <<player.name<< "은 배를 타고 바다를 항해하던 중 사고로 인해 당신은 홀로 무인도에 조난당했습니다..." << endl;
//	Sleep(1000);
//	system("cls");
//	cout<<"떠내려 온 가방을 열어 물건을 확인 해 보니 권총,물,구급약이 있었습니다! " << endl;
//	Sleep(1000);
//	system("cls");
//	cout << "이제 세가지 아이템으로 당신은 무인도에서 구조 될 때 까지 살아남으셔야 합니다..." << endl;
//	Sleep(1000);
//	system("cls");
//
//	
//	while (1)
//	{
//		system("cls");
//		cout << "==================================================================================" << endl;
//		cout << "1.현재상태                    2.소지품                     3.섬 수색 " << endl<<endl;
//		cout << "4.제작                        5.휴식                       6.해안가 확인하기                          " << endl;
//		cout << "                                                                                " << endl;
//					if (player.hunger <= 30)	cout << player.name << "은 아사하기 직전까지 굶주렸다.." << endl;
//					if (player.thirsty <= 20)	cout << player.name << "은 당장 마실 물이 필요하다.." << endl;
//		cout << "                                "<<(int)player.day<<" 일차                                                 " << endl;
//		cout << "==================================================================================" << endl;
//		cin >> act;
//
//		switch (act)
//		{
//		case 1:
//		{
//			player.servivorinfo(player);
//			break;
//		}
//		case 2:
//
//			cout << "현재 가지고 있는 아이템 목록들" << endl;
//			cout << "이름" << "\t\t" << "무게" << endl<<endl;
//			for (int i = 0; i < item_list.size(); i++)
//				item_list[i]->inventorylist();
//			system("Pause");
//			break;
//
//		case 3:
//			sw = player.serch(&player);
//			if (sw == 1)
//			{
//				sw = 0;
//				R = rand();
//					if (R <= 6553)//추후에 아이템 획득식으로 변경할것
//					{
//						reward=playerfight (&player, wild_mob[0]);
//						if (reward == 1);
//						{
//							player.hunger = player.hunger + 50;
//							reward = 0;
//						}
//					}
//					else if (R >= 6554 && R <= 13106)
//					{
//						reward=playerfight(&player, wild_mob[1]);
//						if (reward == 1);
//						{
//							player.hunger = player.hunger + 70;
//							reward = 0;
//						}
//					}
//					else if (R >= 13107 && R <= 19659)
//					{
//						reward=playerfight(&player, wild_mob[2]);
//						if (reward == 1);
//						{
//							player.hunger = player.hunger + 90;
//							reward = 0;
//						}
//					}
//					else if (R >= 19660 && R <= 26212)
//					{
//						reward=playerfight(&player, wild_mob[3]);
//						if (reward == 1);
//						{
//							player.hunger = player.hunger + 30;
//							reward = 0;
//						}
//					}
//					else
//					{
//						reward=playerfight(&player, wild_mob[4]);
//						if (reward == 1);
//						{
//							player.hunger = player.hunger + 150;
//							reward = 0;
//						}
//					}
//
//			}
//			break;
//		case 4://미완성 도끼 제작.불 제작, 무기 제작, 뼈방어구 제작 넣을것
//			break;
//		case 5:
//			player.rest();
//			break;
//		case 6:
//			player.ship();
//			break;
//		default:
//			break;
//		}
//
//		if (player.thirsty < 0)
//		{
//			system("cls");
//			cout << "==================================================================================" << endl;
//			cout << player.name<<"은 마실 물이 없어서 무인도에서 홀로 사망하였습니다......" << endl;
//			cout << "생존일수:" << (int)player.day << "일" << endl;
//			cout << "==================================================================================" << endl;
//			break;
//		}
//		if (player.hunger < 0)
//		{
//			system("cls");
//			cout << "==================================================================================" << endl;
//			cout << player.name << "은 먹을 식량이 없어서 무인도에서 홀로 아사하였습니다......" << endl;
//			cout << "생존일수:" << (int)player.day << "일"<<endl;
//			cout << "==================================================================================" << endl;
//			break;
//		}
//
//
//		
//	}
//	return 0;
//}
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
//
//
//






































