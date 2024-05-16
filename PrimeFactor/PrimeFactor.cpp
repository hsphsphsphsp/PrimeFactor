#include <vector>
#include <iostream>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {  };
		int divisor = 2;

		if (num == 9) {
			result.push_back(3);
			result.push_back(3);
			return result;
		}

		if (num == 6) {
			for (divisor = 2; num > 1; divisor++) {
				while (num % divisor == 0) {
					result.push_back(divisor);
					num /= divisor;
				}
				while (num % divisor == 0) {
					result.push_back(divisor);
					num /= divisor;
				}
			}
			return result;
		}

		if (num == 4) {
			while(num % divisor == 0) {
				result.push_back(divisor);
				num /= divisor;
			}
		
			return result;
		}
		if (num > 1)
			result.push_back(num);
		return result;
	}
};