#include<opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat picture = imread("E:\\picture\\cat.jpg");
	imshow("text",picture);
	waitKey(0);
	return 0;
}