#include "pch.h"
#include "../primeFactors/PrimeFactor.cpp"

TEST(TestCaseName, TestName) {
	PrimeFactor primeFactor;
	vector<int> expectedResult = {};
	EXPECT_EQ(primeFactor.getPrime(1), expectedResult);
}
