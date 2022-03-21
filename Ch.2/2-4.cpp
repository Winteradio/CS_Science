/*
"동적 바인딩과 가상함수"

	"동적 바인딩" : 객체의 내용이 어떠한 멤버 함수를 호출할지를 결정한다.
				
					멤버 함수는 동적 바인딩을 사용해야 한다는 것을 알리기 위해
					virtual 이라는 키워드를 함수의 정의에 추가한다.
*/

class Person{  // Person(기본 클래스)
	virtual void print() {...} // 출력
	...
};

class Student : public Person{ // Student(유도 클래스)
	virtual void print() {...} // 출력
	...
};

int main(){
	Person* pp[100]; // Person 100명의 포인터 배열
	pp[0] = new Person(...); // Person 1명 추가
	pp[1] = new Student(...); // Student 1명 추가
	pp[0] -> print(); // Person::print() 호출 
	pp[1] -> print(); // Student::print() 호출

>> 이러한 현상 : 어떤 함수가 호출될지를 결정하는 것이 실행시간에 이루어지므로 이를
	"동적 바인딩"이라고 한다.
