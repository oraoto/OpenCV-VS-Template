#include "opencv2/opencv.hpp"

using namespace cv;

int main(void)
{
	Mat img = imread("1.png");
	imshow("PNG", img);
	waitKey(6000);
	return 0;
}