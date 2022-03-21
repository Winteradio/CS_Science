#include <iostream>
#include <string>

using namespace std;

class Passenger{
	public :
		Passenger(); // 초기화
		bool isFrequentFlyer() const; // 사용 고객 여부
		
		/*
		"접근함수" : 클래스 데이터를 단지 읽기만만 하는 함수
					이러한 함수로 설정하기 위해서는 위와 같이 끝에 const를 붙여준다

		"수정함수" : 클래스 데이터를 읽어와서 수정도 가능한 함수
					1-5에서 Counter 클래스의 private안에 있는 count를 올려주는
					increaseBy(int x)함수는 수정함수이다.

		*/


		void makeFrequentFlyer(const string& newFreqFlyerNo);

	private :
		string name; // 승객 이름
		bool isFreqFlyer; // 상용 고객 여부
		// 함수와 이름 같아지지 않도록 조심한다.
		string freqFlyerNo; // 상용 고객 번호

};

Passenger::Passenger(){
	name = "NONE";
	isFreqFlyer = false;
	freqFlyerNo = "NONE";
}

bool Passenger::isFrequentFlyer() const{
	return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo){
	isFreqFlyer = true;
	freqFlyerNo = newFreqFlyerNo;
}

int main(){
	Passenger pass; //pass는 Passenger의 객체이다.

	if (!pass.isFrequentFlyer()){
		pass.makeFrequentFlyer("123456");
		cout << "123456" << endl;
	}
	//pass.name = "Joe Blow";// 에러가 난다.
}

