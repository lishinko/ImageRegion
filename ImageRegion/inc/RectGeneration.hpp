#pragma once
#include <opencv2/opencv.hpp>
#include <vector>


struct Point
{
    int x;
    int y;
};
struct Rect
{
    Point leftBottom;
    Point leftTop;
    Point rightBottom;
    Point rightTop;
};
struct GenerateResult
{
GenerateResult(bool nos, int num)
    :noSplit(nos)
    ,rectNum(num)
{ }

    bool noSplit;
    int rectNum;
};
class RectGeneration
{
public:
    RectGeneration(cv::Mat mat,int startx, int starty, double value, int minSize);
    GenerateResult Generate(std::vector<Rect>& result);
    static int RetNum()
    {
        return s_retNum;
    }
    static int s_retNum;
    static int QuardGenNum()
    {
        return s_quadTreeGenerationNum;
    }
    static int s_quadTreeGenerationNum;
private:
    GenerateResult GenrateHorizontal(std::vector<Rect>& result,  int edgeRow);
    GenerateResult GenrateVertical(std::vector<Rect>& result,  int edgeCol);
    GenerateResult GenerateAll(std::vector<Rect>& result);
    GenerateResult GenerateQuadTree(std::vector<Rect>& result);
    cv::Mat _mat;
    int _width;
    int _height;
    int _startx;
    int _starty;
    double _value;
    int _minSize;
};
