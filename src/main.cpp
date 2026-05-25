#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
  cv::Mat img = cv::imread("/var/www/html/imgs/IMG_6.jpg");
  cv::Mat hsv, mask, mask1, mask2;

  cv::cvtColor(img, hsv, cv::COLOR_BGR2HSV);
  
  cv::inRange(hsv, cv::Scalar(0,  0, 41), cv::Scalar(150, 32, 255), mask);
  cv::imwrite("img6OutputFiltro.png", mask);  

  cv::waitKey(0);
  cv::destroyAllWindows();
  
  return 0;
}
