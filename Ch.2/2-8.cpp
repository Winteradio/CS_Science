/*
"상속 계층에서의 형변환"
	객체 변수는 다양한 타입으로 보여질 수 있으나 오직 하나의 타입으로만 선언될 수 있다.
		
		"강한 형(strong typing)" : 모든 변수가 타입을 가지고 그 연산들이 원하는 타입으로 
								선언하도록 강제하는 것

*/

Person* pp[100];
pp[0] = new Person(...);
pp[1] = new Student(...);
pp[1] -> changeMajor("English"); // 오류

>>> 해결 >>>

Student* sp = dynamic_cast<Student*>(pp[1]); // pp[1]을 Student*로 형변환
sp -> changeMajor("Chemi"); // OK
