#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
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

int main() {
	/* Summary: Get Current path
	*/
	//std::wcout << "Path:" << ExePath() << "\n";
	
	VideoLoad();
	
	return 0;
}