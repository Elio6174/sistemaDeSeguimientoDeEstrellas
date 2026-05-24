#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
  cv::Mat img = cv::imread("images/IMG_1.jpg");
  cv::Mat gray, blurred, edges;

  cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
  cv::GaussianBlur(gray, blurred, cv::Size(5, 5), 0);
  cv::Canny(blurred, edges, 50, 150);

  cv::imshow("Original", img);
  cv::imshow("GrayScale", gray);
  cv::imshow("Edges", edges);


  cv::imwrite("imgEdges.png", edges);  
  cv::imwrite("imgGray.png", gray);  


  cv::waitKey(0);
  cv::destroyAllWindows();
  
  return 0;
}
