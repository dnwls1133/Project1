//220926
//�̸�����
//���۷���

//Ŭ����
//#include <iostream>
//#include <string>
//
//class Sample {
//	// ����Ʈ ���� �����ڴ� Ŭ���� �ȿ��� private�̴�.
//	std::string name{ "Sample" };
//	int num = 10;
//
//public:
//	// �Լ� �����ε�
//	// �Լ� �̸��� ���� �Ű������� ������ ������ �ٸ�
//	
//
//	//������
//	// - �����ڵ� �Լ��̴�.
//	//�����ڴ� ��ü�� ������ �� �� �� �� ȣ��ȴ�!
//
//
//	// ����Ʈ ������
//
//	// �����Ϸ��� �˾Ƽ� �ҷ��ش�.
//	/*Sample()
//	{
//
//	}*/
//
//	// ������ �����ε�
//	Sample(std::string _name = "default", int _num = 0)
//	{
//		name = _name;
//		num = _num;
//	}
//
//	////setter, getter
//
//	//void setname(std::string _name)
//	//{
//	//	name = _name;
//	//}
//	//void setnum(int _num)
//	//{
//	//	num = _num;
//	//}
//
//	////�� ���縦 �����ϰڴ�.
//
//	//const std::string& getname() const
//	//{
//	//	return name;
//	//}
//
//	//int num()
//	//{
//	//	return num;
//	//}
//	
//};
//int main()
//{
//	/*Sample sample;
//	std::cout << " nameL " << sample.getName();
//	sample.*/
//
//
//	//���� �����ڸ� �ϳ��̻� �����ε� �ϰԵǸ�
//
//	//����Ʈ �����ڴ� �ڵ����� �ҷ����� �ʴ´�.
//
//	//����, ����Ʈ �����ڸ� ����� ���� �ʴٸ�
//	//����� �ִ�
//
//	//�װ��� �����ε��� �����ڿ��� �ʱ�ȭ�� ���ָ� �ȴ�!
//	Sample s1; // Sample s1()�� �Լ� �����̱⶧���� ()�� ���� ����.
//	Sample s2("seongyeol", 2);
//}

#include <iostream>
#include <cstring>
using namespace std;
class Sample {
private:
	char* name = nullptr;
	int num;
public:
	//����Ʈ ������
	Sample()
	{
		name = new char[50];//name�������̸����� char 50ĭ ���޸𸮿� �Ҵ��϶�
		cin >> *name;
	}
	//������ �����ε�
	/*Sample(const std::string& nameIn, const int& numIn)

		:name{ nameIn }, num{ numIn }
	{
		name = "check";
		num = 20;
	}*/
	

	//���� ������
	Sample(const Sample& other)
	{
		//���� ���� < - > ���� ����
		/*name = other.name;
		num = other.num;*/
		name = new char[50]; // ���� ������
		strcpy(name, other.name); // memcpy(name, other.name)
	}
	~Sample()
	{
		if (nullptr != name) {
			delete name;
			name = nullptr;
		}
	}
	
	//���� ����
	// 
	//�ɹ��Լ�
	void print() const
	{
		std::cout << name << "," << num << std::endl;
	}
};


int main()
{
	
	Sample s1("default",10);
	Sample s2{ s1 };

	s1.print();
	s2.print();
}