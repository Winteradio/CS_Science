#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard(){
	vector<CreditCard*> wallet(10);
	
	wallet[0] = new CreditCard("5391 0000 0000 0000", "Lee", 2500);
	wallet[1] = new CreditCard("3485 0000 0000 0000", "Lee", 3000);
	wallet[2] = new CreditCard("6011 0000 0000 0000", "Lee", 3500);

	for (int j =1 ; j <= 16 ; j ++) {
		wallet[0] -> chargelt(double(j));
		wallet[1] -> chargelt(2*j);
		wallet[2] -> chargelt(double(3*j));
	}
	cout << "Card Payment :\n";

	for (int i =0 ; i < 3 ; i++){
		cout << *wallet[i];
		// wallet[i] 자유 공간에 할당된 주소만을 가르킨다
		// *wallet[i] : 역참조
		// <<에 대해서 정의된 요구조건을 만족시키면 작동하는 operator가 있다.
		while (wallet[i]->getBalance()>100.0){
			wallet[i]->makePayment(100.0);
			cout << "New balance = " << wallet[i]->getBalance() << "\n";
		}
		cout << "\n";
		delete wallet[i];
	}
}

int main(){
	testCard();
	return EXIT_SUCCESS;
}

