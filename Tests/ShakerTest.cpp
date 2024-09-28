#include "catch.hpp"
#include "Shaker_sort.h"

TEST_CASE("Shaker_Test_1") {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 4, 2, 3, 7, 1 };
	shaker_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}

TEST_CASE("shaker_Test_2") {
	int N = 5;
	bool flag = 1;
	int Array[5] = {};
	shaker_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}


TEST_CASE("shaker_Test_3") {
	int N = 5;
	bool flag = 1;
	double Array[5] = { 2.1, 2.5, 2.3, -2.4, 1.9 };
	shaker_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}