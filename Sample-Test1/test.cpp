#include "pch.h"
#include "../primeFactors/PrimeFactor.cpp"

TEST(TestCaseName, TestName1) {
	PrimeFactor primeFactor;
	vector<int> expectedResult = {};
	EXPECT_EQ(primeFactor.getPrime(1), expectedResult);
}

TEST(TestCaseName, TestName2) {
	PrimeFactor primeFactor;
	vector<int> expectedResult = {2};
	EXPECT_EQ(primeFactor.getPrime(2), expectedResult);
}


TEST(TestCaseName, TestName3) {
	PrimeFactor primeFactor;
	vector<int> expectedResult = { 3 };
	EXPECT_EQ(primeFactor.getPrime(3), expectedResult);
}

