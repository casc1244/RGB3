
#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {


	cv::Mat dispMat = cv::imread("D:\\360downloads\\1.jpg");
	cv::Point pt;
	pt.x = 200;
	pt.y = 200;
	cv::Point pt1;
	pt1.x = 150;
	pt1.y = 150;
	cv::Point pt2;
	pt2.x = 250;
	pt2.y = 250;
	circle(dispMat, pt, 100, CV_RGB(255, 0, 0), 1, 8, 0);
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::imshow("dispMat",dispMat);
	waitKey(0);
}