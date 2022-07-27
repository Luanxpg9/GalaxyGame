#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/video.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/// <summary>
/// Webcam load image
/// </summary>
inline void WebcamLoad() {
	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);

		imshow("WebCam", img);
		waitKey(1);
	}
}

/// <summary>
/// Video load image
/// </summary>
inline void VideoLoad() {

	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true) {
		cap.read(img);
		cv::imshow("Image", img);

		waitKey(20);
	}
}


/// Images
inline int ImageLoad() {
	// Summary: Get Current path
	
	//std::wcout << "Path:" << ExePath() << "\n";

	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);

	waitKey(0);
	return 0;
}