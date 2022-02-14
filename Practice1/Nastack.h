#pragma once
/*���� �����迭 ���ͷ� ����*/
#include <assert.h>
#include <vector>
template <typename T>
class Nastack
{
public:
	T Datas;
	unsigned int sizes;

	Nastack();//������ ����
	~Nastack();//�Ҹ��� ����

	void push(T datas);//�о�ֱ�(����) ����
	T    top();//������ ����
	void pop();//������ ����
	unsigned int size();//������ Ȯ��
	bool empty();//�����?
};

template<typename T>
Nastack<T>::Nastack()//�����ڿ���
{
	vector<Nastack>* Datas;
	sizes = 0;
}
template<typename T>
Nastack<T>::~Nastack()//�Ҹ��ڿ���
{
}

template<typename T>
void Nastack<T>::push(T nandatas)//�о�ֱ� (������)
{
	if (sizes == 0)//ù���Խ� ����Ÿ��[0] �� ù �����ͷ� �Ӹ�
	{
		Datas.push_back(nandatas);
	}

	/*�Լ� �ڵ带 �����ϱ� ���� �����ؼ� �����ϱ�
	õ���� ����ȣ���� �ִµ� ���� ���Ѵ�� ���Ƽ� �� ���� ���� ����                                  <<�迭
	����� õ�簡 õ�����(���) �ʹ� ���Ƽ� ���� �� á�ٴ� �ָ��� �޾Ҵ�
	õ�� �ϳ��� �ͼ� ���ϳ��� �޶�� �ֿ� �Ѵٸ�??				                                    << ����߰�

	����ִ� ��� õ�翡�� ���� ������ �̵��ش޶�� �Ѵ�	 1����õ��>>2���� 2����õ��>>3����.....     	<<<<<<<���� �ؾ��Ұ�
	*/
	else
	{
		for (int i = sizeof(Datas); i > 0; i--)//�ι�°���� ���Խ� ��ĭ�� >>�� �б�  ex... ������ 10�̸� 0 �ɋ�����
		{
			Datas.push_back(i) = Datas[i - 1];// �ٷ� �޹��� �չ����� �Ҵ��ϱ�   ex... 10ȣ���� 9ȣ���ִ� �����,  9ȣ���� 8ȣ���ִ������ ............ 2ȣ���� 1ȣ�� �ִ������ 
		}
		Datas[0] = nandatas;//���� ���� �����ʹ� 0������ �Ҵ�     ex... ���� ���� õ��� 1ȣ�ǿ� ����
	}
	sizes++;
}
template<typename T>
T Nastack<T>::top()
{
	return Datas[0];//�̷��� ������ �ִ� ����Ÿ�� ��µɰ��̾� ù��°����(������) �����
}




/*õ�� ȣ���� �չ� �ֹ��� �̻縦 ���� �չ����� ���� �ؾ� �ϴ� ��Ģ�� �ִ� �������� ������ ȣ���ε�*/
template<typename T>
void Nastack<T>::pop()
{
	if (sizes == 0)
		assert(false);//������ ���µ� ���Ϸ� �ϸ� ���̱�

	else if (sizes == 1)//������ 1�ϋ� �� ���̰� ����
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
	return sizes;//������ ����
}  
template<typename T>
bool Nastack<T>::empty()//�������??
{
	if (sizes == 0)
	{
		return true;//������� 1 ����
	}
	else
	{
		return false;//���� ������ 0 ����
	}
}