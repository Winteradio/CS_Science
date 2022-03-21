#include <iostream>
#include <string>

using namespace std;

struct Passenger{
	string name; // 승객 이름
	int number; // 좌석번호
	string card; // 결제숫자
};

bool operator==(const Passenger& x, const Passenger& y){
	return x.name == y.name
		&& x.number == y.number
		&& x.card == y.card;
};

ostream& operator<<(ostream& out, const Passenger& pass){
	out << pass.name << " " << pass.card;
	if (pass.number >= 10){
		out << 10;
	}
	return out;
};

int main(){
	/*
	Passenger* Lee;
	Lee = new Passenger;
	Lee ->name = "Lee";
	Lee ->number = 10;
	Lee ->card = "123456";

	Passenger* Won;
	Won = new Passenger;
	Won -> name = "Won";
	Won -> number = 15;
	Won -> card = "123456";

	operator==(Lee, Won);
	위와 같은 형식을 틀렸다 왜냐하면
	Lee와 Won은 Passenger에 대한 포인터로 지정이 되어있기 때문이다.
 	operator에서 요구하는 것은 Passenger에 대한 래퍼런스를 요구한다.
	*/
	Passenger Lee = {"Lee", 10, "123456"};
	Passenger Won = {"Won", 15, "123456"};

	// if (operator==(Lee,Won)) 혹은
	if (Lee==Won)
	{
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	/*
	operator는 함수의 정의와 유사하나 함수의 이름 자리에 "operator=="을 사용하였다.
	"<<" : 출력
	"=" : 배정
	"==" : 동등성
	"[]" : 시퀀스에서의 인덱싱 
	다음과 같은 연산자들에 대해서만 오버로딩을 제한한다.
	*/
	
	/*
	operator<<(Won);
	출력 연산 배성자가 오류가 계속난다. 조금 더 살펴보도록 하자.
	
	*/
	//cout << Won; // Won 123456789
	//cout << *Won; // 오류
}; 
