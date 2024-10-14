// ImageRegion.cpp: 定义应用程序的入口点。
//

#include "ImageRegion.h"
#include <opencv2/opencv.hpp>
#include <fmt/format.h>
#include <vector>
using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	auto path = "D:/repos/ImageRegion/h01.exr";
	cv::Mat mat = cv::imread(path, cv::ImreadModes::IMREAD_UNCHANGED);
	vector<int> shapes{1};
	cv::Mat red = mat.reshape(1);
	cv::Mat bgra[4];
	cv::split(mat, bgra);
	if (mat.cols <= 0 || mat.rows <= 0)
	{
		fmt::println("error, width = {}, height = {}", mat.cols, mat.rows);
		return -1;
	}
	cv::Mat gradient;
	//cv::Laplacian(red, gradient, 2);
	cv::imshow("h01", bgra[2]);
	cv::waitKey(0);
	return 0;
}
