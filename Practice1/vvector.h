//#pragma once
//#include<assert.h>    // ���Ʈ h �Լ� ���
//#define VEC_SIZE    30//VEC_SIZE�� 30���� ������.
//template <typename T>
//class CMyVector
//{
//private:
//    T*           pData;  //���� �����͸� ���� �ּҰ�
//    unsigned int m_size;//���� �迭�� ����ִ� ��� ����
//    unsigned int m_capacity;//���� �迭 ��ü ������
//
//public:
//     CMyVector();//������
//     ~CMyVector();//�Ҹ���
//
//    //���Ϳ� ����� �Լ� ����   
//    void push_back(const T& data);//�ǵں��� �ִ´�
//    void pop_back();            //�ǵں��� �����
//    void resizing(unsigned int resize);//�迭 ����� ũ�� �������� �Լ�
//    unsigned int size();        //�迭��Ұ��� Ȯ��
//    unsigned int capacity();    //�迭��ü ������ Ȯ��
//
//    T& operator[](unsigned int index);//�ε��� ������ ������
//    T& at(long long int index);
//
//    class iterator
//    {
//        friend CMyVector // cmyvector ���� ���� ������ ���� ��� ���ְڴ�.  �ٱ� ���� ģ������ ���� �� �ִ� ����
//
//    private :z
//        CMyVector* pVector;//������ ����
//        T*         witch;//�迭�� ��ġ(??)
//        int        m_index;
//        //1.�ڷᱸ���� �����͸� ����Ŵ
//        //2.�ڷᱸ���� �����͸� ����Ű�µ� ++ -- �� ���� ����, ������ �ٸ� �����͸� ����ų���ִ�
//        //3.���� �ڷḦ ����Ű�� ���ͷ����ʹ� ���� ���ͷ����� (?????)
//        //4.���ͷ����Ͱ� ����Ű�� �ִ� �����ʹ� *�������� ����ü� �ִ� ����Ű�ϱ�
//
//    public:
//        T& operator*(); //������ �������� ������ ����( �����ͷ� ��������)
//
//        iterator& operator++();//���� ��ġ����
//        iterator operator++(int);//���� ��ġ����
//
//        iterator& operator--();//���� ��ġ����
//        iterator operator--(int);//���� ��ġ����
//
//        bool operator == (const iterator& _other);//== ���� ���� 1 Ʋ���� 0
//        bool operator != (const iterator& _other);//!= ����
//    };
//};
//
//template<typename T>
//CMyVector<T>::CMyVector()
//{
//    pData = new T[10];
//    m_size = 0;
//    m_capacity = 10;
//}
//
//
//
//template<typename T>
//void CMyVector<T>::push_back(const T& data)
//{
//    if (m_size >= m_capacity)
//    {
//        T* newData = new T[m_capacity * 2];
//        for (int i = 0; i < m_size; ++i)
//        {
//            newData[i] = pData[i];
//        }
//        delete[] pData;
//        pData = newData;
//        m_capacity *= 2;
//    }
//
//    pData[m_size] = data;
//    m_size += 1;
//}
//
//template<typename T>
//void CMyVector<T>::pop_back()
//{
//
//    if (m_size == 0)       return;//0���� ������ �� ���Ϸ� �ϸ� �׳� �Լ�����
//    if (m_size < m_capacity/3)//������� ������ �������ٸ�(ĳ�н�Ƽ/3 > ��������)
//    {
//        resizing(m_capacity/2);//ĳ�н�Ƽ ����� ���丷��
//    }
//    m_size -= 1;
//}
//
//template<typename T>
//void CMyVector<T>::resizing(unsigned int resize)
//{
//    if (m_size > resize)
//    {
//        resize = m_size;
//    }
//
//    T* Arr = new T[resize];
//
//    for (unsigned int i = 0; i < m_size; i++)
//    {
//        Arr[i] = pData[i];
//    }
//    delete[] pData;//->���ﲨ��[](�迭��)�� � []? pData
//    pData = Arr;
//}
//
//template<typename T>
//unsigned int CMyVector<T>::size()
//{
//    return m_size;
//}
//
//template<typename T>
//unsigned int CMyVector<T>::capacity()
//{
//    return m_capacity;
//}
//
//template<typename T>
//T& CMyVector<T>::at(long long int index)
//{
//    if (m_size < index);  //m_size���� �� ū �ε����� ����Ų�ٸ� ���Ʈ ȣ��� ��������
//    return pData[index];//A.at(1)��  A[1]�� ���⿡ �̰͹ۿ� ������ �ȳ��ϴ�
//}
//
//template<typename T>
//T& CMyVector<T>::operator[](unsigned int index)
//{
//    assert(index >=! m_size);
//
//    return pData[index];
//}
//
//template<typename T>
//T& CMyVector<T>::iterator::operator*()
//{
//    if (pVector->pDataArray != pData || pVector->m_size <= m_index || m_index == -1)//todo:
//        assert(nullptr);
//
//    return pData[m_index];
//}
//
//template<typename T>
//typename CMyVector<T> iterator& CMyVector<T>::iterator::operator++()
//{
//    if (pVector -> pDAtaArray != pData|| -1 = m_index)
//
//        if (pVector->size()-1 ==m_index)//�����������͸� ����Ű�� ������
//
//        else
//        {
//            m_index++;
//        }
//    return *this;
//}
//
//template<typename T>
//typename CMyVector<T>::iterator& CMyVector<T>::iterator::operator--()
//{
//    //1.���ͷ����Ͱ� ������ ������ ����(������ ������ ������ ��) ���� �߸��� ���� ����ų ��?
//    if (pVector->pDataArray != pData)
//        assert(nullptr);
//
//    //2.���ͷ����Ͱ� �̹� ��� �ε� �� ���Ϸ� �ϸ� �ı��Ѵ�
//    if (0 == m_index)
//        assert(nullptr)
//
//    //3. ���ͷ����Ͱ� ���� ���ͷ����͸� �̺����� ���� �� �����͸� ����Ű��
//    if (-1 == m_index)
//    {
//        m_index = pVector->size - 1;
//    }
//    else
//    {
//        m_index--;
//    }
//
//    m_index--;
//    return *this;//<<�ڱ⸦ ����Ű�� ���� �� �̴� ������ �𽺴� �ڱ��� ������ �������ִ°�
//}
//
//template<typename T>
//inline iterator CMyVector<T>::iterator::operator--(int)
//{
//    iterator tempiter(*this);
//    --(*this);
//    return tempiter;
//}
//
//template<typename T>
//bool CMyVector<T>::iterator::operator==(const iterator& _other)
//{
//    if (this->pData == _other.pData &&
//        this->pVector == _other.pVector &&
//        this->m_index == _other.m_index)
//        return true;
//
//    return false;
//}
//
//template<typename T>
//bool CMyVector<T>::iterator::operator!=(const iterator& _other)
//{
//    return !(*this == _other);
//}
//
//
//template<typename T>
//typename CMyVector<T>::iterator CMyVector<T>::begin()
//{
//    //�ڷᰡ ������ �Ѵ� ���� ��� �Ѵ� ������ ����Ŵ.
//    iterator newiter;
//    newiter.pVector - this;
//    newiter.pData - this->pDataAttay;
//    newiter.m_index = 0 == m_size ? -1 : 0;
//    return newiter;
//}
//
//typename CMyVector<T>::iterator CMyVector<T>::end()
//{
//    iterator newiter;
//    newiter.pVector = this;
//    newiter.pData = this->pDataArray;
//    newiter.m_index = -1;
//    return newiter;
//}
//
//void CMyVector<T>::erase(const iterator& iter)
//{
// //����ó��:���Ͱ� �̻��Ѱ� ����ų��( ex ����)
////���Ͱ� ������ ���µ� ������� �Ҷ�   (ex end�� ����ٴ���)
//    if (iter.pVector != this || iter.m_index >= m_size || -1 == m_size)
//        assert(nullptr);
//
//    int index = iter.m_index;
//    for (int i = index; i < m_size - 1; i++)
//    {
//        pDataArray[i] = pDataArray[i + 1];
//    }
//    m_size--;
//}