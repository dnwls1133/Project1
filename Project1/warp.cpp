//220926
//이름공간
//레퍼런스

//클래스
//#include <iostream>
//#include <string>
//
//class Sample {
//	// 디폴트 접근 지정자는 클래스 안에서 private이다.
//	std::string name{ "Sample" };
//	int num = 10;
//
//public:
//	// 함수 오버로딩
//	// 함수 이름은 같고 매개변서의 종류와 개수가 다름
//	
//
//	//생성자
//	// - 생성자도 함수이다.
//	//생성자는 객체가 생성될 시 딱 한 번 호출된다!
//
//
//	// 디폴트 생성자
//
//	// 컴파일러가 알아서 불러준다.
//	/*Sample()
//	{
//
//	}*/
//
//	// 생성자 오버로딩
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
//	////값 복사를 방지하겠다.
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
//	//내가 생성자를 하나이상 오버로딩 하게되면
//
//	//디폴트 생성자는 자동으로 불러지지 않는다.
//
//	//만약, 디폴트 생성자를 만들고 싶지 않다면
//	//방법이 있다
//
//	//그것은 오버로딩한 생성자에서 초기화를 해주면 된다!
//	Sample s1; // Sample s1()은 함수 선언이기때문에 ()을 빼고 쓴다.
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
	//디폴트 생성자
	Sample()
	{
		name = new char[50];//name포인터이름으로 char 50칸 힙메모리에 할당하라
		cin >> *name;
	}
	//생성자 오버로딩
	/*Sample(const std::string& nameIn, const int& numIn)

		:name{ nameIn }, num{ numIn }
	{
		name = "check";
		num = 20;
	}*/
	

	//복사 생성자
	Sample(const Sample& other)
	{
		//얕은 복사 < - > 깊은 복사
		/*name = other.name;
		num = other.num;*/
		name = new char[50]; // 복사 받을애
		strcpy(name, other.name); // memcpy(name, other.name)
	}
	~Sample()
	{
		if (nullptr != name) {
			delete name;
			name = nullptr;
		}
	}
	
	//얕은 복사
	// 
	//맴버함수
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