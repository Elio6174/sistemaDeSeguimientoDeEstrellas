#include <opencv2/opencv.hpp>
#include <iostream>

int main(){
	cv::Mat img = cv::imread("images/IMG_1.jpg");

	if(img.empty()){
		std::cout << "no se pudo leer la imagen"<< std::endl;
		return 1;
	}

	int k = cv::waitKey(0);

	if(k == 's'){
		cv::imwrite("output.png", img);
	}
	return 0;
}
