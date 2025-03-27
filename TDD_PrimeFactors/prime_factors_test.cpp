#include "gmock/gmock.h"
#include "prime_factors.cpp"

using namespace std;

TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);
}

TEST(PrimeFactors, PrimeTest1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, PrimeTest2) {
	PrimeFactor prime_factor;
	vector<int> expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}