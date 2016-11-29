#include "opencv/cv.h"
#include "opencv/highgui.h"

int main(int argc, char* argv[])
{
	IplImage* img;
	char imgfile[] = "lena.jpg";

	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);
	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena",img);
	cvWaitKey(0);
	cvDestroyWindow("lena");
	cvReleaseImage(&img);
	return 0;
}