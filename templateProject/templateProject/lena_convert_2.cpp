#include "opencv/cv.h"
#include "opencv/highgui.h"

int main(int argc, char* argv[])
{
	IplImage* img;
	IplImage* gray;
	IplImage* binary;

	int levels = 128;

	char imgfile[] = "lena.jpg";

	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);

	gray=cvCreateImage(cvGetSize(img),IPL_DEPTH_8U,1);
	cvCvtColor(img,gray,CV_BGR2GRAY);

	binary=cvCreateImage(cvGetSize(img),IPL_DEPTH_8U,1);
	cvThreshold(gray,binary,levels,255,CV_THRESH_BINARY);

	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena",binary);
	cvWaitKey(0);
	cvDestroyWindow("lena");
	cvReleaseImage(&img);
	return 0;
}