//#define WINDOWS_IGNORE_PACKING_MISMATCH 
//#include <windows.h>
//#include <iostream>
//#include <filesystem>




//int WinMain(	HINSTANCE hInstance,	HINSTANCE hPrevInstance,	LPSTR     lpCmdLine,	int       nShowCmd){
//typedef int(__stdcall* InstallFontFileT)(HWND hwnd, wchar_t* filePath, int flags);
//InstallFontFileT InstallFontFile;

//bool doInstallFont(int argc, char* argv[]) {
	/*HMODULE dll = LoadLibraryW(L"fontext.dll");
	if (!dll) {
		return false;
	}
	InstallFontFile = (InstallFontFileT)GetProcAddress(dll, "InstallFontFile");
	if (InstallFontFile == NULL) {
		return false;
	}
	int len = MultiByteToWideChar(65001, 0, argv[1], -1, NULL, 0);
	wchar_t* wc = new wchar_t[len + 1];
	MultiByteToWideChar(65001, 0, argv[1], -1, wc, len + 1);
	wc[len] = 0;
	HRESULT coinit = CoInitialize(NULL);
	if (coinit != S_OK) {
		return false;
	}
	struct _stat64 stats;
	int res = _wstat64(wc, &stats);
	if (res != 0) {
		return false;
	}
	HRESULT ret = InstallFontFile(NULL, wc, 0);
	CoUninitialize();
	return ret == S_OK;
	*/
	
//	return true;
//}

//typedef void* (WINAPI* SetProcessDpiAwarenessContextH)(_In_ int value);
//typedef BOOL(WINAPI* SetProcessDPIAwareT)(VOID);

//HMODULE u32 = LoadLibraryA("user32.dll");
//typedef BOOL(WINAPI* SetProcessDPIAwareT)(VOID);
//SetProcessDpiAwarenessContextH SetProcessDpiAwarenessContextHp = (SetProcessDpiAwarenessContextH)GetProcAddress(u32, "SetProcessDpiAwarenessContext");

int main(int argc, char* argv[]) {
	//printf("Hello World!");
	//if (argc > 1) {
		//return doInstallFont(argc, argv) ? 0 : 1;
	//}
	/*SetConsoleCP(65001);
	HWND hwnd = NULL;                // owner window
	HDC hdc = NULL;                  // display device context of owner window

	CHOOSEFONTW cf;            // common dialog box structure
	static LOGFONTW lf;        // logical font structure
	static DWORD rgbCurrent;  // current text color
	HFONT hfont, hfontPrev;
	DWORD rgbPrev;

	// Initialize CHOOSEFONT
	ZeroMemory(&cf, sizeof(cf));
	cf.lStructSize = sizeof(cf);
	cf.hwndOwner = hwnd;
	cf.lpLogFont = &lf;
	cf.rgbColors = rgbCurrent;
	cf.Flags = CF_SCREENFONTS | CF_INACTIVEFONTS | CF_NOVERTFONTS | CF_NOOEMFONTS | CF_NOVERTFONTS | CF_SCALABLEONLY;
	cf.lpszStyle = (wchar_t*)&(L"");
	//cf.iPointSize = 16;
	//cf.nSizeMax = 12;
	//cf.nSizeMin = 12;
	if (ChooseFontW(&cf) == TRUE)
	{
		char fontNamemb[1024];
		WideCharToMultiByte(CP_UTF8, NULL, cf.lpLogFont->lfFaceName, -1, (char*)&fontNamemb, 1024, NULL, NULL);
		std::cout << fontNamemb;
		if (cf.lpLogFont->lfOutPrecision == OUT_STRING_PRECIS) {
			std::cout << "\n CantUse OUT_STRING_PRECIS";//CantUse OUT_STRING_PRECIS
		}
		//printf("%ls\r\n", cf.lpLogFont->lfFaceName);
	}
	else {
		//SystemParametersInfoW(SPI_GETICONTITLELOGFONT, sizeof(LOGFONTW), &lf, 0);
		std::cout << "NullFontSelected";//NullFontSelected
		//printf("NullFontSelected");
	}*/
	return 0;
}
