#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    char filename[1024] = {0};
    for (int i = 0; i < 7 ; i++)
    {
    sprintf(filename, "%d.jpg", i);
    sleep(0.25);
    }
    printf("filename is %s", filename);
    Mat image = imread(filename);
    imshow("pic from device", image);
    waitKey(0);
}