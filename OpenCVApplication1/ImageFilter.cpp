#include "stdafx.h"
#include "opencv/cv.hpp"
#include "opencv2/highgui/highgui.hpp"

/*int main()
{
	//display the original image
	IplImage* img = cvLoadImage("D:/ImageFilter.jpg");
	cvNamedWindow("MyWindow");
	cvShowImage("MyWindow", img);

	//invert and display the inverted image
	cvNot(img, img);
	cvNamedWindow("Inverted");
	cvShowImage("Inverted", img);

	cvWaitKey(0);

	//cleaning up
	cvDestroyWindow("MyWindow");
	cvDestroyWindow("Inverted");
	cvReleaseImage(&img);

	return 0;
}*/