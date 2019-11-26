/**
 * @file Client.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-10-31
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <thread>
#include "FeedController.h"

using namespace std;
using namespace cv;

FeedController::FeedController()
{
    VideoCapture feedCV;
    internalThread = new thread(&FeedController::updateFeedThread, this);
}

FeedController::~FeedController()
{
    // internalThread->interrupt();
    internalThread->join();
}

void FeedController::getFeed()
{
}

void FeedController::updateFeedThread()
{
    if (!feedCV.open(0))
        exit(-1);

    for (;;)
    {
        Mat frame;
        feedCV >> frame;
        if (frame.empty())
            break; // end of video stream

        //Shows each frame
        imshow("Say Cheese!", frame);

        //Saves the frame to a file that the gui can access
        imwrite("./camera.png", frame);

        // stop feedCVturing by pressing ESC
        if (waitKey(10) == 27)
            break;
    }
}