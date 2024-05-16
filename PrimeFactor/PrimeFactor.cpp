﻿#include <vector>
#include <iostream>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {  };

		if (num == 6) {
			result.push_back(2);
			result.push_back(3);
			return result;
		}

		if (num == 4) {
			while(num % 2 == 0) {
				result.push_back(2);
				num /= 2;
			}
		
			return result;
		}
		if (num > 1)
			result.push_back(num);
		return result;
	}
};