#include <Windows.h>
#include <string>
#include "Chapter1.cpp"

using namespace cv;
using namespace std;

// Images

std::wstring ExePath() {
	TCHAR buffer[MAX_PATH] = { 0 };
	GetModuleFileName(NULL, buffer, MAX_PATH);
	std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
	return std::wstring(buffer).substr(0, pos);
}

void main() {
	// Summary: Get Current path

	//std::wcout << "Path:" << ExePath() << "\n";

	ImageLoad();

	VideoLoad();
}
