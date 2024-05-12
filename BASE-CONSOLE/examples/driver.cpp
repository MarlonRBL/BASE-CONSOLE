//#include "../includes.h"
//
//int main()
//{
//	console::enableVirtualTerminalProcessing();
//	LPCTSTR gameName = L"cs2.exe";
//	const wchar_t* clientModuleName = L"client.dll";
//	const wchar_t* engineModuleName = L"engine2.dll";
//
//	if (!mem::find_driver())
//	{
//		console::dbgPrintln({ 255, 0, 0 }, "ERROR", { 255, 100, 0 }, "Failed to stabilize the Driver Handle!");
//		std::cin.get();
//		return 1;
//	}
//
//	DWORD pid = mem::find_process(gameName);
//	if (!pid)
//	{
//		console::dbgPrintln({ 255, 0, 0 }, "ERROR", { 255, 100, 0 }, "Failed to find the Game PID!");
//		std::cin.get();
//		return 1;
//	}
//
//	uintptr_t clientModule = mem::get_module_base(pid, clientModuleName);
//	if (!clientModule)
//	{
//		console::dbgPrintln({ 255, 0, 0 }, "ERROR", { 255, 100, 0 }, "Failed to find the Client Module!");
//		std::cin.get();
//		return 1;
//	}
//
//
//	uintptr_t engineModule = mem::get_module_base(pid, engineModuleName);
//	if (!engineModule)
//	{
//		console::dbgPrintln({ 255, 0, 0 }, "ERROR", { 255, 100, 0 }, "Failed to find the Engine Module!");
//		std::cin.get();
//		return 1;
//	}
//
//
//
//	while (1)
//	{
//		// MAIN CODE -- WITH DRIVER INTIALIZED AND MORE!
//
//	}
//
//	return 1;
//}