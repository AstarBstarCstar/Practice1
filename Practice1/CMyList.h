#pragma once
#include <assert.h>
//Node ����Ʈ�� �⺻����

template <typename T>
struct Node
{
    T        m_data;//���ȿ� �� �����Ͱ� ����ִ�
    Node*    pNext;//�ؽ�Ʈ�� ��� ����ü�� ������ ������ ����  4����Ʈ
    Node*    pPrev;//�����긦 ��� ����ü�� ������ ������ ����  4����Ʈ 

    Node()
    {
        pPrev = nullptr;//������� �켱 �ΰ�
        pNext = nullptr;//�ǳؽ�Ʈ�� �켱 �ΰ�
    }
    Node(T _m_data, Node* _pNext, Node* _pPrev)//�����ε� ������ ������
    {
        m_data = _m_data;//��>>�� �� Ŭ������ ����ü�� ������ ����
        pPrev = _pPrev;
        pNext = _pNext;
    }

    ~Node()
    {}
};


template <typename T>
class CMyList
{
    Node<T>*     pHeadNode;
    Node<T>*     pTailNode;
    int          m_size;//����Ż��

public:
    CMyList();//������ ����
    ~CMyList();//�Ҹ��� ����

    void push_back(const T& data);
    void pop_back();
    void push_front(const T& data);
    void pop_front();
    int size();
    bool empty();
    void clear();//������ �Լ��� ����
    void at();//TODO:���� �̱��� 
};

template<typename T>
CMyList<T>::CMyList()//����ȣ ���� �����ھ� �⺻���Ǹ� ����
{
    pHeadNode = nullptr;
    pTailNode = nullptr;
    m_size = 0;
}


template<typename T>
CMyList<T>::~CMyList()
{
    clear();//���������� �׳� �Ҹ��ڿ� ���� Ŭ���� �Լ� ����;
}


template<typename T>
void CMyList<T>::push_back(const T& data)//�ڿ� �ϳ��� �ִ´� 
{
    //if (m_size > 0)
    //{
    //    
    //    Node<T>* newNode = new Node<T>(data, nullptr, nullptr);
    //    
    //    pTailNode->pPrev = newNode;
    //    pTailNode = newNode;
    //}

    //else
    //{
    //    Node<T>* newNode = new Node<T>(data, nullptr, nullptr); 
    //    pTailNode = newNode;
    //     //    pHeadNode = newNode;
    //}
    //m_size++;
     
    if (m_size > 0)
    {
        /*ó�� ���� ������ ��� ó�� ���ٰ� �����ϴ��� if else��*/
        Node<T>* newNode = new Node<T>(data, pTailNode , nullptr);
        newNode->pPrev = pTailNode;
        pTailNode->pNext = newNode;
        pTailNode = newNode;
        m_size++;
    }
    else
    {
        Node<T>* newNode = new Node<T>(data, nullptr, nullptr);
        pHeadNode = newNode;
        pTailNode = newNode;
        m_size++;
    }
}

template<typename T>
void CMyList<T>::push_front(const T& data)//����� ������ ���´� ex)12345 ���� new ������  new12345 ��
{
    if (m_size > 0)
    {
       /* ó�� ���� ������ ��� ó�� ���ٰ� �����ϴ��� if else��*/
        Node<T>* newNode = new Node<T>(data, pHeadNode, nullptr);

        pHeadNode->pPrev = newNode;
        pHeadNode = newNode;
        m_size++;
    }

    else
    {
        Node<T>* newNode = new Node<T>(data, nullptr, nullptr);

        pHeadNode = newNode;
        pTailNode = newNode;
        m_size++;
    }
}

template<typename T>
void CMyList<T>::pop_back()//���� �ڿ��ִ� ��Ҹ� �ϳ� ���� �Ѵ���
{
    assert(m_size != 0);//����ȣ m_size�� 0���� ������ �� ���� ������ �Ѵٸ� ��1���� ���̰ڴ�

    if (1 == m_size)
    {

        Node<T>* pDeleteNode = pTailNode;
        pTailNode = nullptr;
        pHeadNode = nullptr;
        delete pDeleteNode;
    }
    else
    {
        Node<T>* pDeleteNode = pTailNode;
        pTailNode = pTailNode->pPrev;
        pTailNode->pNext = nullptr;//TODO: �ڲ� ���⼭ ������ ���µ� ������ �𸣰ڽ��ϴ�. �м� �� ���� �� �Լ��� �ƴ϶�, push_back �Լ����� ������ ���� �� �����ϴ�.
        delete pDeleteNode;
    }

    m_size--;
}

template<typename T>
void CMyList<T>::pop_front()//���� �տ��ִ� ��Ҹ� �ϳ� �����Ѵ���
{
    assert(m_size != 0);//����ȣ m_size�� 0���� ������ �� ���� ������ �Ѵٸ� ��1���� ���̰ڴ�
    if (1 == m_size)
    {
        Node<T>* pDeleteNode = pHeadNode;//�켱 ����� ��带 ����Ʈ ��忡 �ش�
        pTailNode = nullptr;//����� �ϳ��ۿ� �������������� �ΰ�
        pHeadNode = nullptr;//����� �ϳ��ۿ� ����������嵵 �ΰ�
        delete pDeleteNode;//������ ��1�̱�
    }
    else
    {
        Node<T>* pDeleteNode = pHeadNode;//����� >>����� �Ҵ�
        pHeadNode = pHeadNode->pNext;//������� �ǳ��� ����忡 �Ҵ�
        pHeadNode->pPrev = nullptr;//�տ��� ���� ������ �ΰ��Ҵ�
        delete pDeleteNode;//����� ����
    }

    m_size--;//����Ż��--
}

template<typename T>
int CMyList<T>::size()//����� ���� �׷��� ĳ�н�Ƽ�� ���� ������ ����Ʈ�� ������ �����ϸ� �˵�
{
    return m_size;
}

template<typename T>
bool CMyList<T>::empty()//����� ���� �׷��� 1�� ���� �ƴϸ� 0�� ��´�
{
    if (size() == 0)   return true;
    else            return false;
}

template<typename T>
void CMyList<T>::clear()//�ȳ� ���� ����� ��� ��Ҹ� ������
{
    int Num = m_size;//������� �ѿ� �Ҵ��ϰ� �׸�ŭ �˹��� ����
    for (int i = 0; i < Num; i++)
    {
        pop_back();
    }
}

template<typename T>
void CMyList<T>::at()
{
}

//����Ʈ ���� ��� ������ �����͸� ����ϴ� �Լ� �����ϱ�
//����Ʈ ���� n��° ����� �����͸� ��ȯ�ϴ� []������ ������
//��������� ����
//����Ʈ ���� �ٸ� ����Ʈ�� ó���� ������ ����Ʈ�� ��ȯ�ϴ� + ������ ������
//����Ʈ ���� �ٸ� ����Ʈ�� ó���� �����ϴ� += ������ ������

