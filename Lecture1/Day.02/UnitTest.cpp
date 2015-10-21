#include "StringUtils.hpp"
#include <cassert>

void test_lowercase() {
	using StringUtils::lowercase;
	assert(lowercase("ABC abc 123") == "abc abc 123");
}


void test_uppercase() {
	using StringUtils::uppercase;
	assert(uppercase("ABC abc 123") == "ABC ABC 123");
}


void test_capitalize() {
	using StringUtils::capitalize;
	assert(capitalize("ABC abc 123") == "Abc abc 123");
	assert(capitalize("abc ABC 123") == "Abc abc 123");
}

void test_strip() {
	using StringUtils::strip;
	assert(strip("ABC abc 123") == "ABCabc");
}

void test_truncate() {
	using StringUtils::truncate;
	assert(truncate("ABC abc 123",15) == "ABC abc 123");
	assert(truncate("ABC abc 123",5) == "ABC a");
}

void test_left() {
	using StringUtils::left;
	assert(left("ABC abc 123",15, '*') == "ABC abc 123****");
	assert(left("ABC abc 123",5, '*') == "ABC a");	
}

void test_center() {
	using StringUtils::center;
	assert(center("ABC abc 123",15, '*') == "**ABC abc 123**");
	assert(center("ABC abc 123",5, '*') == " abc ");
}

void test_right() {
	using StringUtils::right;
	assert(right("ABC abc 123",15, '*') == "****ABC abc 123");
	assert(right("ABC abc 123",5, '*') == "c 123");
}


int main() {
	test_lowercase();
	test_uppercase();
	test_capitalize();

	test_strip();
	test_truncate();

	test_left();
	test_center();
	test_right();
	cout << "All test executed!!!" << endl;
	return 0;
}
