
#include<Windows.h>
#include<windowsx.h>

int WINAPI WinMain(HINSTANCE instance, HINSTANCE hprevinstance, LPSTR lpcmdline, int ncmdshow)
{
    MessageBox(NULL, L"There can be only one", L"My First WinProgram", MB_OK|MB_ICONEXCLAMATION);
    return (0);
}