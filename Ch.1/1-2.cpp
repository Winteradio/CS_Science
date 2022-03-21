#include <string>
#include <iostream>

using namespace std;
// std라고 하는 namespace를 현 시스템에 등록한다.
// std에 들어가 있는 것 : cout, endl, string

enum MealType { NO_PREF, REGULAR , LOW_FAT , VEGETARIAN};

struct Passenger {
	string name;
	MealType mealPref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

int main(){
	Passenger pass = {"John Simth", VEGETARIAN, true, "293145"};

	pass.name = "Wonmock";
	pass.mealPref = NO_PREF;
	/*
	std::cout << pass.name << std::endl;
	std::cout << pass.mealPref << std::endl; // 순서대로 출력한다.
	
	NO_PREF의 경우 0번째 인덱스이므로,
	pass.mealPref는 NO_PREF 값을 지니지만 0이라는 인덱스를 지니기도 한다.
	*/

	Passenger *Won; // 구조체에 대한 포인터이다.
	Won = new Passenger; // 구조체에 대한 데이터 할당 : 포인터로 지정된 자유 공간 주소로 데이터를 할당할 것이다라는 명령어
	Won -> name = "LeeWonMock"; // pointer_name -> member == (*pointer_name).member와 동일하다.
	Won -> mealPref = REGULAR;
	Won -> isFreqFlyer = false;
	Won -> freqFlyerNo = "NONE";

	delete Won; // 할당된 데이터는 반드시 삭제를 해줘야 메모리 유출이 되지 않는다.

	Passenger& Mock = pass;
	//Mock -> name = "Mickel Jaskon"; // 이러한 형태는 포인터에서만 사용 가능
	std::cout << Mock.name << endl;
};
