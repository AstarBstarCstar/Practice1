#pragma once
/*스택 동적배열 벡터로 구현*/
#include <assert.h>
#include <vector>
template <typename T>
class Nastack
{
public:
	T Datas;
	unsigned int sizes;

	Nastack();//생성자 정의
	~Nastack();//소멸자 정의

	void push(T datas);//밀어넣기(삽입) 정의
	T    top();//맨위값 추출
	void pop();//맨위것 삭제
	unsigned int size();//사이즈 확인
	bool empty();//비었니?
};

template<typename T>
Nastack<T>::Nastack()//생성자영역
{
	vector<Nastack>* Datas;
	sizes = 0;
}
template<typename T>
Nastack<T>::~Nastack()//소멸자영역
{
}

template<typename T>
void Nastack<T>::push(T nandatas)//밀어넣기 (위부터)
{
	if (sizes == 0)//첫삽입시 데이타즈[0] 을 첫 데이터로 임명
	{
		Datas.push_back(nandatas);
	}

	/*함수 코드를 이해하기 위한 비유해서 이해하기
	천국에 무한호텔이 있는데 방이 무한대로 많아서 다 차는 법이 없다                                  <<배열
	어느날 천사가 천사들이(요소) 너무 많아서 방이 다 찼다는 팻말을 달았다
	천사 하나가 와서 방하나만 달라고 애원 한다면??				                                    << 요소추가

	살고있는 모든 천사에게 다음 방으로 이동해달라고 한다	 1번방천사>>2번방 2번방천사>>3번방.....     	<<<<<<<지금 해야할거
	*/
	else
	{
		for (int i = sizeof(Datas); i > 0; i--)//두번째부터 삽입시 한칸씩 >>로 밀기  ex... 사이즈 10이면 0 될떄까지
		{
			Datas.push_back(i) = Datas[i - 1];// 바로 뒷번지 앞번지에 할당하기   ex... 10호실은 9호실있던 사람이,  9호실은 8호실있던사람이 ............ 2호실은 1호실 있던사람이 
		}
		Datas[0] = nandatas;//새로 들어온 데이터는 0번지에 할당     ex... 새로 들어온 천사는 1호실에 입주
	}
	sizes++;
}
template<typename T>
T Nastack<T>::top()
{
	return Datas[0];//이러면 맨위에 있는 데이타가 출력될것이야 첫번째방을(맨위를) 출력함
}




/*천사 호텔은 앞방 주민이 이사를 가면 앞방으로 이주 해야 하는 규칙이 있다 생각보다 귀찮은 호텔인듯*/
template<typename T>
void Nastack<T>::pop()
{
	if (sizes == 0)
		assert(false);//사이즈 없는데 줄일려 하면 죽이기

	else if (sizes == 1)//사이즈 1일떈 걍 줄이고 리턴
	{
		delete[] Datas;
		sizes--;
		return;
	}

	for (int i = 0; i < sizeof(Datas); i++)
	{
		Datas.push_back(i) = Datas[i + 1];
	}
	delete[] Datas;
	sizes--;
}

template<typename T>
unsigned int Nastack<T>::size()
{
	return sizes;//사이즈 리턴
}  
template<typename T>
bool Nastack<T>::empty()//비었느냐??
{
	if (sizes == 0)
	{
		return true;//비었으면 1 리턴
	}
	else
	{
		return false;//뭐라도 있으면 0 리턴
	}
}