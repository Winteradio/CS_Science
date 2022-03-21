/*
"정적 바인딩" : Student와 Person의 관계처럼 클래스가 기본 클래스로부터 상속될 때 
				유도된 클래스(Student)를 기본 클래스(Person)의 특수형(Subtype)이라고 한다.

				특수형이란 의미는 기본 클래스가 언제든지 받아들일 수 있다면 유도된 클래스를 사용할 수 있다는 뜻이다. 

				예를 들어 학생을 가리키는 포인터의 배열로 생성한다고 가정하자.

*/

Person* pp[100];

pp[0] = new Person(...);
pp[1] = new Student(...);

cout << pp[i] -> getName() << "\n"; // OK
pp[0] -> print(); // Person::print() 호출
pp[1] -> print(); // Person::print() 호출 
pp[1] -> changeMajor("English"); // 오류 !!

이러한 오류의 이유는 "정적 바인딩" 때문이다.
"정적 바인딩"이란, 어떠한 멤버함수를 호출할지 결정할 때 C++의 기본 행동은 실제적인
내용이 아니라 객체의 선언된 타입을 고려한다는 것이다.

즉, pp[100]은 Person 클래스의 객체로 선언이 되었기에, 
	Student 클래스 내의 함수들을 호출할 수 없는 것이다.
