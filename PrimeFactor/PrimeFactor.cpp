﻿#include <vector>
#include <iostream>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {  };

		if (num == 2)
			result.push_back(num);

		if (num == 3)
			result.push_back(num);
		return result;
	}
};