#include <string>
#include <sstream>
#include <iostream>
#include <thread>
#include <opencv/cv.h>
#include <opencv/highgui.h>

//// FUNCTION DECLARATIONS ////

void on_trackbar( int, void* );
void createTrackbars();

void morphOps(cv::Mat &thresh);
void drawObject(int x, int y, cv::Mat &frame);
void trackFilteredObject(int &x, int &y, cv::Mat threshold, cv::Mat &cameraFeed);

int user_input();
void clean_up_and_exit(int success_value);

//// DEFINED IN main.cpp ////

// Dimensions
extern const int FRAME_WIDTH;
extern const int FRAME_HEIGHT;
extern const int MAX_NUM_OBJECTS;
extern const int MIN_OBJECT_AREA;
extern const int MAX_OBJECT_AREA;

// initial min and max HSV filter values. these will be changed using trackbars.
extern int H_MIN;
extern int H_MAX;
extern int S_MIN;
extern int S_MAX;
extern int V_MIN;
extern int V_MAX;

// Window names
extern const std::string windowOriginal;
extern const std::string windowHSV;
extern const std::string windowThreshold;
extern const std::string windowMorph;
extern const std::string trackbarWindowName;
