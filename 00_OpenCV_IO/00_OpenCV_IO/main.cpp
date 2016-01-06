#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

#define IFNAME "/Users/ycliaw/Desktop/GitRepos/openCV3/00_Images/sample.bmp"
#define OFNAME "/Users/ycliaw/Desktop/GitRepos/openCV3/00_Images/sample.jpg"

using namespace cv;
using namespace std;

int main(void)
{
    Mat image;
    image = imread(IFNAME, CV_LOAD_IMAGE_COLOR);
    if (image.data )  {
        imshow( "Display window", image );
        imwrite(OFNAME, image);
        waitKey(0);
    } else {
        cout <<  "Could not open or find the image" << std::endl ;
    }    
}