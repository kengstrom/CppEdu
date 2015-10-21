#include "StringUtils.hpp"

namespace StringUtils {
	string lowercase(const string& str) {
		string result;
		for (char ch: str) result += ::tolower(ch);
		return result;
	}

	string uppercase(const string& str) {
		string result;
		for (char ch: str) result += ::toupper(ch);
		return result;
	}

	string capitalize(const string& str) {
		string result;
		result = lowercase(str);
		result[0] = ::toupper(result[0]);
		return result;
	}
	string strip(const string& str) {
		string result;
		for (char ch: str) {
			if( isalpha(ch) ) result += ch;
		}
		return result;
	}
	string truncate(const string& str, unsigned int width) {
		if( str.length() < width )
			return str;
		return str.substr(0, width );
	}

	string left(const string& str, unsigned int width, char padding) {
		string result;
		if( str.length() < width ) {
			result = str + string(width - str.length(), padding);
			/*			
			while( result.length() < width) {
				result += padding;
			}
			*/
			return result;
		}
		return str.substr(0, width);
	}
	string center(const string& str, unsigned int width, char padding) {
		string result;
		if( str.length() < width ) {
			result = str;
			int diff = width - str.length();
			int before = diff / 2;
			int after = diff - before;
			while( before-- > 0 ) {
				result = padding + result;
			} 
			while( after-- > 0) {
				result += padding;
			}
			return result;
		}
		return str.substr((str.length() - width) / 2, width);
	}
	string right(const string& str, unsigned int width, char padding) {
		string result;
		if( str.length() < width ) {
			result = string(width - str.length(), padding) + str;
			/*
			while( result.length() < width) {
				result = padding + result;
			}
			*/
			
			return result;
		}
		return str.substr(str.length() - width, width);
	}

}
