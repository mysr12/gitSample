#include <iostream>
#include <cv.h>
#include <highgui.h>

using namespace std;

int main(){
	cv::Mat image;
	image = cv::imread("Lenna.png");

	if(image.empty()){
		cout << "No image." << std::endl;
		return -1;
	}

	cv::namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
	cv::imshow( "Display Image", image );
	cv::waitKey();

	return 0;
}
