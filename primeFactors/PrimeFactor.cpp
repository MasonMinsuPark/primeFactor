#include <vector>

using namespace std;

class PrimeFactor {
public:
	vector<int> getPrime(int n) {
		vector<int> returnVector;
		if (n == 2)
			returnVector.push_back(2);
		return returnVector;
	}
};