#include "SebUtils.hpp"

namespace seb {
	namespace str {
		string lowercase(const string& inStr) {
			string retStr(inStr);
			std::transform(retStr.begin(), retStr.end(), retStr.begin(), ::tolower );
			return retStr;		
		}
		string uppercase(const string& inStr) {
			string retStr(inStr);
			std::transform(retStr.begin(), retStr.end(), retStr.begin(), ::toupper );
			return retStr;		
		}
	}

	namespace io {
	}

	namespace gen {
	}
}
