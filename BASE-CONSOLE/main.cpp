#include "includes.h"



int main()
{
	console::enableVirtualTerminalProcessing();
	console::Println({ 0, 255, 0 }, "+", { 160, 160, 160 }, "Started the Virtual Terminal Process to get colored messages!");


	std::cin.get();
	return 1;
}