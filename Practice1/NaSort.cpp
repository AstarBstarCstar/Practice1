//#include <iostream>
//#include <vector>
//using namespace std;
//
///*��ü������ �ѹ� �� �y�� ���� ���� �� �y�� ��ĭ���� �� �y�� ������ ������ �Ѵ�. �ð����⵵ ��������On2*/
//void select(vector<int>& vec);
//
////���������� ��  1 5 47 8 7  �̷��� �־��� ġ�� 1: 1 5 47 8 7    2: 1 5 47 8 7    3: 1 5 8 47 7  4: 1 5 7 8 47 �̴ϱ� �ϳ��� �� ���鼭 ������ �ؾ߰���?
////�׷��ϱ� on2���� �ϳ��� ���� �ٽ� �ϳ��� ���� �鸸�� ���̱� �ϸ� �����ŷ� ���� �ȴ�
////�ٵ�! �ѹ��� ���Ҵµ�(1ȸ�� �ߴµ�) ������ ���� �ȵǸ� �ǵ��� �� ���� �ؾߵǴ� ���� ���� �Ǿ����� ( ������ ���Ļ��°� �ƴ� �� ) ȿ���� ���� �� ����.
//void insert(vector<int>& vec);
//
///*�� �������� �ڵ带 ¥�� �� ������������ �� �� ���� ��ġ ������ ū���ڰ� ���ӿ� ��ǰ���� �ǱۻǱ� �ö���°�ó�� ���� ���� õõ�� ���ߴ� ������ ���
//�ϴ� ¥��� ������� �츮�� ����Ⱑ �ǳ� ���� �����̶�� ���׿��� ���ͼ� ¥�� �ٽ� ��*/
//void bubble(vector<int>& vec);//�����ϱ� ����������
//
///*���������� ���� ���� �ٽ� ¥ �f���� ��ü������ Ǯ����ġ�� �ٽ� ���̴� ������ ���ߴ�
//���� �����ϸ� ���� �̾��� Į�� �� �߶���� �ٽ� �ɵ�� �̾���̴´���*/
//void mermer(vector<int>& vec, int start, int mid, int end);
//void merge(vector<int>& vec, int start, int end);
//
//void quick(vector<int>& vec, int start, int finish);//��Ȥ�� �鸸�� ���̱��� �������� ��Ȥ�ؼ� ���ļӵ��� ���� 
//
//int main()
//{
//	srand((unsigned int)time(NULL));//  <- ���ۿ� �ɵ��ְ� �˾ƺ��� �� �ߴٰ� ����
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
//	cout << "���� �������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	select(selecter);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << selecter.at(i) << " , ";
//	}
//
//	merge(merger, 0, merger.size() - 1);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << merger.at(i) << " , ";
//	}
//
//	bubble(bubbler);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << bubbler.at(i) << " , ";
//	}
//
//	insert(inserter);
//
//	cout << endl << endl << "���� ���������̾�:";
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << inserter.at(i) << " , ";
//	}
//
//	quick(quicker, 0, (quicker.size() - 1));
//
//	cout << endl << endl << "���� �������̾�:";
//
//	for (int i = 0; i <= 100; i++)
//	{
//		cout << quicker.at(i) << " , ";
//	}
//
//	return 0;
//} 
//
//void select(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++)//�������� 0���� ��������� 
//	{
//		int target = i;//���� �ε��� i�� �Ҵ��Ѵ� �ٱ� ó���� �����ε����� 0 1 2 3 4 .... �ϸ鼭 ���� �ε����� ���� Ŀ����.
//		for (int j = i + 1; j < vec.size(); j++)//i �ȿ� j�� �� �־ 2�������� ������ j�� ��ġ�� �ٽ� i+1 �Ǵ½�
//		{
//			if (vec[j] < vec[target])//���࿡ j�� ó���� i������ ū�� �߰��Ѵٸ� (������ �ָ� �߰��Ѵٸ�)
//				target = j;//�������� j�� �ٲ��ش�
//		}
//		//���� �ֱ��夸â�ϴ���
//		int temp = vec[i];
//		vec[i] = vec[target];
//		vec[target] = temp;   //�Ʊ� Ÿ�ٰ��ϰ� i���ϰ� �ٲ��ش�. ������ ����
//	}
//}
//
//void insert(vector<int>& vec)
//{
//	int j;
//	for (int i = 1; i < vec.size(); i++)           //���ڱ� �������� ��������: ������ ù��°���� ������ �ʿ䰡 ���µ� ���Ϸ� 0���� ������ �ߴ���  
////������:for (int i = 0; i < vec.size(); i++)                                       
//	{
//		int mid = vec[i]; //�������� �����մ� i�� �������� ����ش�. �׷��ϱ� �ٳ����� �������� ���� �ǳ����� �������ΰ��� �̷�����
//		for (j = i - 1; j >= 0 && vec[j] > mid; j--)
//		{
//			vec[j + 1] = vec[j];//��Ȥ�� ������ ���� 
//		}
//
//		vec[++j] = mid;
//	}
//}
//
//void bubble(vector<int>& vec)
//{
//	for (int i = 0; i < vec.size(); i++) //i0���� ���»��������
//	{
//		for (int j = 0; j < (vec.size() - 1) - i; j++)//j0���� ���»�������� 
//		{
//			if (vec[j] > vec[j + 1])//�� �̳༮ �����ʹ迭���� ũ�ٴ�! (������ �迭���� ũ��!)
//			{
//				int temp = vec[j];//���� ���� �ֱ���â �ϰڴ� �ٷ� ���� ��� �ٲ�ġ�� �Ұž�
//				vec[j] = vec[j + 1];
//				vec[j + 1] = temp;
//
//			}
//		}
//	}
//}
//
//void mermer(vector<int>& vec, int start, int mid, int end)
//{
//	vector<int> caramelsortedmukgoshipda;//ī����Ƽ��԰�ʹٸ� ���ͷ� ����
//	int left = start;  //���ʰ� = ����
//	int right = mid + 1; // �����ʰ� = ���+1
//
//	while (left <= mid && right <= end)//�������� ������ �Ǹ� �ѹ� �� ���Ҵٴ� ����.
//	{
//		if (vec[left] < vec[right])//���� ���ʷ� ����Ʈ ����Ʈ �������� �����Ѵ�.
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
//	if (left > mid)//���� �Ǿ����� ������ ���� ���� �� �ʿ䰡 ������ �׳� �ִ� ������� �ָ����� ���� �ϰ� ��ģ��. 
//	{
//		for (int i = right; i <= end; i++)
//		{
//			caramelsortedmukgoshipda.push_back(vec[i]);
//		}
//	}
//	else if (right > end)
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
//}
//
//void merge(vector<int>& vec, int start, int end)
//{
//	if (start == end)
//		return;
//
//	int mid = (start + end) / 2; //�ϴ� ���� ������
//	merge(vec, start, mid); //���� �������� �ɰ���
//	merge(vec, mid + 1, end); //�ڸ� �������� �ɰ���
//
//	mermer(vec, start, mid, end);//���ĵ��� ������ �� ������ ��(�ָ� �Լ� ȣ��) 
//}
//
//void quick(vector<int>& vec, int start, int finish)
//{
//	if (start >= finish)//������͸� ���� ������ �ֹ� (����! ��ŸƮ�� �� ũ�ų� �ǴϽö� ���� . <= �̼Ҹ��� �����Ͱ� (��Ұ�) �ϳ��ۿ� �ȳ��Ұų� �ϳ��ۿ� ����
//	{                                                                               //�̰��� ���ϸ� ������Ϳ� ������ ��
//		return;//�鸸�� ���̱⸦ �ߴ��ϴ� ������ �ֹ�
//	}
//
//	int piv = start;//�Ǻ갪 ��ŸƮ�� �Ҵ�
//	int i = piv + 1;  //i �� �Ǻ갪+1 ���� �⵿�Ѵ� (�Ǻ�+1���� ���)
//	int j = finish;      //j �� �ǴϽ� ���κ��� �⵿�Ѵ� (������������ �ڷΰ��¾�)
//	int temp;         //�ӽ� ����� ���ڱ�������
//
//	while (i <= j)//i���� j������ Ŀ�������� ( ����� �� ������ ) ������ �Ѵ�.     i���� ++ �ǰ� j����-- �Ǵϱ� �������� �ֽ� ���󸶳� �׷��� �ȴ�
//	{
//		while (i <= finish && vec[i] <= vec[piv])//i �� �Ǻ꺸�� ū���� ã�� ���ù����� �����̴�. ���� ���̾𽺺��� 
//		{
//			i++;// �Ʒ����� �������� �˹��ϴ¾� (�迭 1���� �y�´�)(�����ʿ��� �����)
//		}
//
//		while (j > start && vec[j] >= vec[piv])// �ݴ�� k �� �Ǻ꺸�� ���� ���� ã�� �ؾǹ����� �����̴�. ���� �����ε� 
//		{
//			j--;// ������ �Ʒ������� �˹��ϴ¾� 
//		}
//		/*���������� ������ i�� j�� ���� �ݴ���⿡�� �y�ٰ� �Ǻ긦 �������� �Ǻ� ���� ū ��, �������� ������ �Ʒ��� ����*/
//
//		/*�Ҽ����ڸ� ���ϰ� ������ִ� ��*/
//		if (i > j)//i���� j������ ũ�ٸ�?
//		{
//			temp = vec[j];
//			vec[j] = vec[piv];
//			vec[piv] = temp;//j�� �Ǻ� ���� ��ȯ���ش�.
//		}
//		else if (i <= j)//i���� j������ �۰ų� ���ٸ�?
//		{
//			temp = vec[i];
//			vec[i] = vec[j];
//			vec[j] = temp;//i���� j���� ��ȯ���ش� 
//		}
//
//		/*������ �ɸ��� j�� �Ǻ갪�� �ٲ�� (���ذ��� ���� ������ j���� ���������� �ٽ� �����)  �Ʒ��� �ɸ��� i��j���� �ٲ��(�Ʒ��ִ� ū ���� ���� ������)*/
//	}
//	quick(vec, start, j - 1);// j�� �������� ��� ������ ���� ���� ������ �ָ��� ������
//	quick(vec, j + 1, finish);// �� ������ ��ġ�� return�� �ɷ��� �ٽ� ���������� �ָ��� ������ �ݺ��Ѵ�. ���������� ������ ������ ���� ���������� ������.
//}
