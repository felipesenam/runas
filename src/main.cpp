#include <iostream>
#include <cstdlib>
#include <clocale>
#include <sstream>
#include <windows.h>

int main(int argc, char* argv[])
{
	setlocale (LC_ALL,"");

	if(argc > 1)
	{
		ShellExecute(0, "runas", argv[1], NULL, 0, SW_SHOW);
		return GetLastError();
	}
	else
	{
		std::cout << "usage: " << argv[0] << " [path to executable]" << std::endl;
		return -1;	
	}
}