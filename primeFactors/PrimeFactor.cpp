#include <vector>

using namespace std;

class PrimeFactor {
public:
	vector<int> getPrime(int n) {
		vector<int> primeVector;
		if (n == 2)
			primeVector.push_back(2);
		if (n == 3)
			primeVector.push_back(3);
		return primeVector;
	}
};