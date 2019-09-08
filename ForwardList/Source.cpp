#include<iostream>
using namespace std;
 
#define tab "\t"
#define delim "\n---------------------\n"

class Element
{
	int Data; //�������� ��������
	Element* pNext; //����� ��������� ��������
public:
	Element(int Data, Element* pNext = nullptr) : Data(Data), pNext(pNext) { cout << "EConstructor" << tab << this << endl; }
	~Element()
	{
		cout << "EDestructor" << tab << this << endl;
	}
	friend class List;
};
class List
{
	Element* Head; //����� ������ ������
public:
	List() 
	{
		this->Head = nullptr;
		cout << "LConstructor" << tab << this << endl;
	}
	~List()
	{
		cout << "LDestructor" << tab << this << endl;
	}

	void push_front(int Data)
	{
		//1)������� ����� �������:
		Element* New = new Element(Data);
		//2)����������� ����� ������� � ������ (Head)
		New->pNext = Head;
		//3)������ ��������� �� ����� �������.
		Head = New;
	}

	void print()
	{
		Element* Temp = Head; //eto []
		while (Temp != nullptr)
		{
			cout << Temp << tab << Temp->Data << tab << Temp->pNext << endl;
			Temp = Temp->pNext;

		}
	}

};

void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cout << "������� ������ ������: "; cin >> n;
	List list;
	for (int i = 0; i < n; i++)
	{
		list.push_front(rand() % 100);
	}
	list.print();

}