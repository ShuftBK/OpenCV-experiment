#include "opencv/cv.h"
#include "opencv/highgui.h"

int main(int argc, char* argv[])
{
	IplImage* img;
	IplImage* gray;
	char imgfile[] = "lena.jpg";

	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);

	gray=cvCreateImage(cvGetSize(img),IPL_DEPTH_8U,1);
	cvCvtColor(img,gray,CV_BGR2GRAY);

	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena",gray);
	cvWaitKey(0);
	cvDestroyWindow("lena");
	cvReleaseImage(&img);
	return 0;
}