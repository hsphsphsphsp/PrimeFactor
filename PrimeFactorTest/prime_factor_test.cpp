#include "pch.h"
#include "../PrimeFactor/PrimeFactor.cpp"

#include <vector>
using namespace std;

TEST(TestCaseName, Of1) {
	PrimeFactor pf;
	vector<int> expected = {  };
	EXPECT_EQ(expected, pf.of(1));
}