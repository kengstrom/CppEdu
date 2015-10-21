#pragma once

#include <iostream>
#include <string>
#include <cctype>
using namespace std; 

namespace StringUtils {
	extern string lowercase(const string& str);
	extern string uppercase(const string& str);
	extern string capitalize(const string& str);

	extern string strip(const string& str);
	extern string truncate(const string& str, unsigned int width);

	extern string left(const string& str, unsigned int width, char padding = ' ');
	extern string center(const string& str, unsigned int width, char padding = ' ');
	extern string right(const string& str, unsigned int width, char padding = ' ');
}
