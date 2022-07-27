#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/video.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/// <summary>
/// Video
/// </summary>
/// <returns></returns>
void VideoLoad() {

	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Image", img);

		waitKey(1);
	}
}


/// Images

void ImageLoad() {
	// Summary: Get Current path
	
	//std::wcout << "Path:" << ExePath() << "\n";

	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);

	waitKey(0);
}
