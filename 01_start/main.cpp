#include <iostream>
#include <cstdlib>
#include "TutorialConfig.h"

const double inputValue = std::stod(argv[1]);

int main(char**argv, int argc)
{
	if (argc < 2) 
	{
	    // report version
	    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
	              << Tutorial_VERSION_MINOR << std::endl;
	    std::cout << "Usage: " << argv[0] << " number" << std::endl;

	    return 1;
	  }

	return 0;
}