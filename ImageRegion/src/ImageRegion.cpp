﻿// ImageRegion.cpp: 定义应用程序的入口点。
//

#include "ImageRegion.h"
#include <opencv2/opencv.hpp>
#include <fmt/format.h>
#include <RectGeneration.hpp>
#include <chrono>
using namespace std;

int main()
{
    auto path = "D:/repos/ImageRegion/h01.exr";
    cv::Mat mat = cv::imread(path, cv::ImreadModes::IMREAD_UNCHANGED);
    cv::Mat bgra[4];
    cv::split(mat, bgra);
    if (mat.cols <= 0 || mat.rows <= 0)
    {
        fmt::println("error, width = {}, height = {}", mat.cols, mat.rows);
        return -1;
    }
    cv::Mat red(bgra[2]);
    auto t = red.type();
    cv::Mat gradient(red.rows, red.cols, CV_32F);
    auto t0 = std::chrono::system_clock::now();
    cv::Laplacian(red, gradient, -1);

    auto t1 = std::chrono::system_clock::now();

    RectGeneration g(gradient, 0, 0, 0.1, 6);
    std::vector<Rect> result;
    //cv::rectangle(gradient, r, cv::Scalar(0.4));
    result.reserve(10000);
    auto ret = g.Generate(result);
    auto t2 = std::chrono::system_clock::now();

    fmt::println("-------------------------------------\nret = {}, retNum = {} quad = {}", result.size(), RectGeneration::RetNum(), RectGeneration::QuardGenNum());
    auto t10 = (t1 - t0).count() / 10;
    auto t21 = (t2 - t1).count() / 10;
    auto total = (t2 - t0).count() / 10;
    fmt::println("t1 - t0 = {}us, t2 - t1 = {}us, total = {}us", t10, t21, total);


    cv::Mat debug(red.rows, red.cols, t);
    for (auto rr : result)
    {
        cv::Rect r;
        r.x = rr.leftBottom.x;
        r.y = rr.leftBottom.y;
        r.width = rr.rightBottom.x - rr.leftBottom.x;
        r.height = rr.leftTop.y - rr.leftBottom.y;
        //cv::rectangle(debug, r, cv::Scalar(0.4), 2, cv::LineTypes::FILLED);//thickness = 1的情况下，filled会报错
        cv::rectangle(debug, r, cv::Scalar(0.4));//thickness = 1的情况下，filled会报错
    }

    cv::imshow("h01", red);
    cv::imshow("h01_gradiant", gradient);
    cv::imshow("h01_debug", debug);
    //cv::imwrite("D:/repos/ImageRegion/h01-gradient.exr", gradient);
    cv::waitKey(0);
    return 0;
}
