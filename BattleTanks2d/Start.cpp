#include "Start.h"
#include <Windows.h>
using namespace BattleTanks2d; // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Start);
	return 0;
}

