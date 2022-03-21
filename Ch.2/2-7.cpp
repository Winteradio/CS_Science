/*
"다중 상속과 제한된 상속"

	"다중 상속" : 다수의 기본 클래스들로부터 클래스를 유도할 수 있다.

	"제한된 상속" : 
				밑의 예제를 살펴보자

*/
#include <iostream>
#include <string>

using namespace std;


class Base{
	protected :
		string Pro = "Pro";

	public :
		string Pub = "Pub";
};

class Derive1 : public Base{
};

class Derive2 : protected Base{
};

class Derive3 : private Base{
};

int main(){
	Derive1 der1;
	Derive2 der2;
	Derive3 der3;

	//cout << der1.Pro << endl; -> 유도 클래스까지만 허용 가능
	//cout << der1.Pub << endl; -> 밖에서도 허용 가능

	//cout << der2.Pro << endl; -> 유도 클래스까지만 허용 가능
	//cout << der2.Pub << endl; -> 유도 클래스까지만 허용 가능

	//cout << der3.Pro << endl; -> 유도된 클래스 private
	//cout << der3.Pub << endl; -> 유도된 클래스 private

	/*
	public 상속 : 부모 public -> 유도 public

	protected 상속 : 부모 public -> 유도 protected

	private 상속 : 부모 public & protected -> 유도 private

	*/
	
	return 0;
}
