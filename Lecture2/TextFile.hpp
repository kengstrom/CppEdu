/*
 * TextFile.hpp
 *
 *  Created on: Nov 4, 2015
 *      Author: karl
 */

#include "LineSlurper.hpp"
#include <string>
#include <vector>

class TextFile {
	string filename;

public:
	TextFile( string fname ) : filename(fname) {
	}

	~TextFile() {
	}


	struct Position {
		unsigned index;
		vector<string> lines;
		string filename;
		Position(unsigned idx, string fname) : index(idx), filename(fname) {}
		operator string() {
			int idx = 0;
			for(auto line: LineSlurper(filename)) {
				idx++;
				if(index == idx)
					return line;
			}
			return "";
		}
		Position& operator = (string& str) {
			read(filename);
			lines[index - 1] = str;
			write(filename);
			return *this;
		}
		void read(const string& filename) {
			lines.clear();
			for( auto line : LineSlurper(filename)) {
				lines.push_back(line);
			}
		}
		void write(const string& filename) {
			ofstream file{filename};
			for( auto line : lines) {
				file << line << endl;
			}
		}
	};
	Position operator [](unsigned index) {
		return {index, filename};
	}
};


