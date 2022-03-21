/*
## 객체지향 패러다임에서는 상속(Inheritance)이라 불리는 코드를 재활용하기 위한 계측정인 구성구조이다.

일반적인 클래스 : 상위 클래스, 부모 클래스, 슈퍼클래스

서브 클래스 : 유도된 클래스, 자식 클래스	
			-> 기본 클래스를 특수화, 확장화하는 클래스들을 의미한다.


유의 사항
	1. 서브 클래스의 객체는 상위 클래스의 객체에 접근할 수 있다. 상위 클래스의 public부문의 객체에만
	2. 상위 클래스의 객체는 서브 클래스의 객체에 접근할 수 없다.
	3. 생성자의 경우, 자식 생성자 안에 부모 생성자가 호출되어야한다.
	4. 소멸자의 경우, 자식 소멸자 안에 부모 소멸자가 없어도 된다.
*/

#include <iostream>
#include <string>

using namespace std;

class Person{ // Person(기본 클래스)
	private:
		string name; // 이름
		string idNum; // 학번

	public:
		Person(const string& na, const string& id); // 생성자가 꼭 필요하다
		void print(); // 정보출력
		string getName(); // 이름 검색

};

class Student : public Person{ // Student (자식 클래스)
	// -> public Person : Person 클래스로부터 유도되었으며, 공용 상속이라는 뜻이다.
	private :
		string major; // 전공
		int gradYear; // 졸업연도

	public:
		Student(const string& na, const string& id, const string& ma, int gr); // 생성자
		void print(); // 정보 출력
		void changeMajor(const string& newMajor); // 전공변경
};

Person::Person(const string& na, const string& id)
	: name(na),idNum(id) {}

void Person::print(){
	cout << "Name " << name << endl;
	cout << "IDnum " << idNum << endl;
};

void Student::print(){
	Person::print();
	// 상위 클래스의 함수를 호출할 때는 다음과 같이 부른다.
	cout << "Major " << major << endl;
	cout << "Year " << gradYear << endl;
};

string Person::getName(){
	return name;
};

Student::Student(const string& na, const string& id, const string& ma, int gr)
	: Person(na,id),major(ma),gradYear(gr) {}

void Student::changeMajor(const string& newMajor){
	major = newMajor;
};

int main(){
	Person person("Mary","12-345");
	Student student("Bod","34-789","Math",2012);
	cout << student.getName() << endl;
	return 0;
};

