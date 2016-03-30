#include "stdafx.h"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

/*int main(int argc, char* argv[])
{
	VideoCapture cap(0); // open the video camera no. 0

	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the video cam" << endl;
		return -1;
	}

	double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
	double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

	cout << "Frame size : " << dWidth << " x " << dHeight << endl;

	namedWindow("MyVideo", CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"

	while (1)
	{
		Mat frame;

		bool bSuccess = cap.read(frame); // read a new frame from video

		if (!bSuccess) //if not success, break loop
		{
			cout << "Cannot read a frame from video stream" << endl;
			break;
		}

		imshow("MyVideo", frame); //show the frame in "MyVideo" window

		if (waitKey(30) == 27) //wait for 'esc' key press for 30ms. If 'esc' key is pressed, break loop
		{
			cout << "esc key is pressed by user" << endl;
			vector<int> compression_params; //vector that stores the compression parameters of the image

			compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); //specify the compression technique

			compression_params.push_back(100); //specify the compression quality



			bool bSuccess = imwrite("D:\\\\TestImage.jpg", frame, compression_params); //write the image to file



			if (!bSuccess)

			{

				cout << "ERROR : Failed to save the image" << endl;

				//system("pause"); //wait for a key press

			}
			break;
		}
	}
	return 0;

}*/