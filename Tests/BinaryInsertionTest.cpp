#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "binary_insertion_sort.h"

TEST_CASE("binary_insertion_Test_1") {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 4, 2, 3, 7, 1 };
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N-1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}

TEST_CASE("binary_insertion_Test_2") {
	int N = 5;
	bool flag = 1;
	int Array[5] = {};
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}


TEST_CASE("binary_insertion_Test_3") {
	int N = 5;
	bool flag = 1;
	double Array[5] = {2.1, 2.5, 2.3, -2.4, 1.9};
	binary_insertion_sort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}