#include "opencv2/opencv.hpp"
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;
using namespace cv;


int main()
{
    Mat Image = imread("view.jpeg");
    namedWindow("Display",  CV_WINDOW_AUTOSIZE);
    imshow("show", Image);
    waitKey(0);
    return 0;
}
