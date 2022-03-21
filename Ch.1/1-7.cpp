#include <iostream>
#include <string>

using namespace std;

class Passenger{
	private :
		string name;
		int number;
		bool isFreqFlyer;
		string freqFlyerNo;

	public :
		Passenger();
		Passenger(const string& nm, int num, const string& ffn = "NONE");
		Passenger(const Passenger& pass);
};

Passenger::Passenger(){
	name = "--No--Name--";
	number = 0;
	isFreqFlyer = false;
	freqFlyerNo = "NONE";
}

/*
Passenger::Passenger(const string& nm, int num, const string& ffn){
	// 생성자 정의할 시에는 ' = "NONE" ' 표현 제거한다.
	name = nm;
	number = num;
	isFreqFlyer = (ffn != "NONE");
	freqFlyerNo = ffn;
}
*/

/* 초기화 리스트로 클래스 멤버 초기화
	배정 연산자 
	ex) int i = 10;
	에서 "="를 배정연산자라고 한다.
	초기화 리시트를 통한 클래스 멤버의 초기화는
	이러한 "=" 배정연산자를 사용하기않고 동일하게 구현 할 수 있다.
	ffn의 경우에는 "="NONE""꼴의 경우에는
	: 다음에 표기하는 것이 아니라
	{} 안에 표기한다.
*/

Passenger::Passenger(const string& nm, int num,const string& ffn)
	:name(nm),number(num),isFreqFlyer(ffn!="NONE")
{freqFlyerNo = ffn;}

Passenger::Passenger(const Passenger& pass){
	name = pass.name;
	number = pass.number;
	isFreqFlyer = pass.isFreqFlyer;
	freqFlyerNo = pass.freqFlyerNo;
}

int main(){
	Passenger p1;
	Passenger p2("John Smith",10,"123456");
	Passenger p3("Lee", 5);
	Passenger p4(p3);
	Passenger p5 = p2;

	// p4와 p5 둘다 복사 생성자를 호출한다.
	Passenger* pp1 = new Passenger;
	Passenger* pp2 = new Passenger("Mock", 7, "456789");
	// pp1, pp2는 자유저장소에서 메모리를 할당받아 객체를 생성하고 그 각각에 대한 포인터를 반환한다.
	Passenger pa[20];
}
