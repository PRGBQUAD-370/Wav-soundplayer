#include <windows.h>
#pragma comment(lib, "winmm.lib"))

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {

	PlaySoundW(L"sound1.wav", NULL, SND_FILENAME | SND_ASYNC);
	Sleep(40000);
	PlaySoundW(L"sound2.wav", NULL, SND_FILENAME | SND_ASYNC);
	Sleep(30000);
}