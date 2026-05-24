#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
  cv::Mat img = cv::imread("images/IMG_1.jpg");
  cv::Mat hsv, mask, mask1, mask2;

  cv::cvtColor(img, hsv, cv::COLOR_BGR2HSV);
  
  cv::inRange(hsv, cv::Scalar(0, 120, 120), cv::Scalar(15, 255, 255), mask1);
  cv::inRange(hsv, cv::Scalar(165, 120, 120), cv::Scalar(179, 255, 255), mask2);  
//  cv::circle(mask, cv::Point(0, 0), 50, cv::Scalar(0, 0, 255), 3);
//  cv::circle(mask, cv::Point(10, 10), 15, cv::Scalar(255, 255, 0), cv::FILLED);

  cv::bitwise_or(mask1, mask2, mask);
  cv::imwrite("imgOutPut.png", mask);  

  cv::waitKey(0);
  cv::destroyAllWindows();
  
  return 0;
}
