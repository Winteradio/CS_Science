#include <iostream>
#include <string>

using namespace std;

class Vector{
	public:

	private:
		double coord[3];
		friend class Matrix;

};

class Matrix{
	public :
		Vector multiply(const Vector& v);

	private:
		double a[3][3];

};

Vector Matrix::multiply(const Vector& v){
	Vector w;
	for (int i =0; i < 3 ; i++){
		for (int j =0 ; j < 3 ; j++){
			w.coord[i] += a[i][j] * v.coord[j];
		}
	}
	return w;
}

int main(){
	Vector V
