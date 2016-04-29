#include <bits/stdc++.h>

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#define USING_OPENCV

#include "Distances.h"


using namespace std;
using namespace cv;


int main ()
{
    dist::ManhattanRGB d;

    cout << d(5, 5) << endl;
    //cout << d(cv::Vec<int, 3>{1, -2, 3}, cv::Vec<int, 3>{0, 0, 0}) << endl;



    return 0;
}
