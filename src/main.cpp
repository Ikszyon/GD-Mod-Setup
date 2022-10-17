#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

DWORD APIENTRY MainThread(LPVOID lpParam) {

    // Code Here

    return S_OK;
}

DWORD WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved) {
    switch(dwReason) {
        case DLL_PROCESS_ATTACH:
            CreateThread(NULL, 0x10000, reinterpret_cast<LPTHREAD_START_ROUTINE>(&MainThread), NULL, 0, NULL);
            break;

        default:
            break;
    }

    return TRUE;
}