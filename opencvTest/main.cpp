#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, const char * argv[])
{
    cv::Mat img(cv::Size(320, 240), CV_8UC3, cv::Scalar(60, 150, 80));
    cv::namedWindow("OpenCV3!", cv::WINDOW_AUTOSIZE);
    cv::imshow("OpenCV3!", img);
    
    cv::waitKey(0);
}
