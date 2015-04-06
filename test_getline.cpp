#include "string.hpp"
#include <cassert>

//===========================================================================
int main ()
{
	{
		// setup
		string str;
		
		// test
		str.getline(istream& in);
		
		// Verify
		assert(str == "t");
	}
}
