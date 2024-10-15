#include "RectGeneration.hpp"
#include <fmt/printf.h>
int RectGeneration::s_retNum = 0;
int RectGeneration::s_quadTreeGenerationNum = 0;
RectGeneration::RectGeneration(cv::Mat mat, int startx, int starty, double value, int minSize)
    :_mat(mat)
    , _width(mat.cols)
    , _height(mat.rows)
    , _startx(startx)
    , _starty(starty)
    , _value(value)
    , _minSize(minSize)
{

}
GenerateResult RectGeneration::Generate(std::vector<Rect>& result)
{
    int current = 0;
    GenerateResult ret = {true, 0};
    ret = GenrateHorizontal(result, 0);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateHorizontal(result, _height - 1);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateVertical(result, 0);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateVertical(result, _width - 1);
    if (!ret.noSplit)
    {
        return ret;
    }
    //转了1圈了，都没有分裂，也没有全部生成，那么就用4个点就可以了

    if (_startx == 387 && _starty == 686)
    {
        fmt::println("ssssssssssssssssssssssssssssssssss");
    }
    Rect r;
    r.leftBottom = Point{_startx, _starty};
    r.leftTop = Point{_startx, _starty + _height - 1};
    r.rightBottom = Point{_startx + _width - 1, _starty};
    r.rightTop = Point{_startx + _width - 1, _starty + _height - 1};
    result.push_back(r);
    //s_retNum++;
    ret.noSplit = true;
    ret.rectNum = 1;
    return ret;
}
GenerateResult RectGeneration::GenerateAll(std::vector<Rect>& result)
{
    for (int y = 0; y < _height - 1; y++)
    {
        for (int x = 0; x < _width - 1; x++)
        {
            Rect r;
            r.leftBottom = Point{_startx + x, _starty + y};
            r.leftTop = Point{_startx + x, _starty + y + 1};
            r.rightBottom = Point{_startx + x + 1, _starty + y};
            r.rightTop = Point{_startx + x + 1, _starty + y + 1};

            result.push_back(r);
            if (r.leftBottom.x == 250 && r.leftBottom.y == 654)
            {
                fmt::println("ssssssssssssssssssssssssssssssssss");
            }
        }
    }
    GenerateResult ret(false, (_width - 1) * (_height - 1));
    s_retNum += (_width - 1) * (_height - 1);
    return ret;
}
GenerateResult RectGeneration::GenrateHorizontal(std::vector<Rect>& result, int edgeRow)
{
    int current = 0;
    for (int i = 0; i < _width; i++)
    {
        double c = _mat.at<float>(edgeRow, i);
        if (c > _value)
        {//超过阈值，此矩阵需要拆分/全部生成矩形
            if (_width <= _minSize || _height <= _minSize)
            {
                return GenerateAll(result);
            }
            else
            {
                return GenerateQuadTree(result);
            }
        }
    }
    return {true, 0};
}

GenerateResult RectGeneration::GenrateVertical(std::vector<Rect>& result, int edgeCol)
{
    int current = 0;
    for (int i = 0; i < _height; i++)
    {
        double c = _mat.at<float>(i, edgeCol);
        if (c > _value)
        {//超过阈值，此矩阵需要拆分/全部生成矩形
            if (_width <= _minSize || _height <= _minSize)
            {
                return GenerateAll(result);
            }
            else
            {
                return GenerateQuadTree(result);
            }
        }
    }
    return GenerateResult(true, 0);
}

GenerateResult RectGeneration::GenerateQuadTree(std::vector<Rect>& result)
{
    int current = 0;
    cv::Mat newMat(_mat({0, _height / 2 + 1}, {0,_width / 2 + 1}));//注意矩阵是row, col作为构造函数的
    RectGeneration g(newMat, _startx + 0, _starty + 0, _value, _minSize);//但是我们的函数是x,y作为坐标开始的。
    current += g.Generate(result).rectNum;

    newMat = _mat({0, _height / 2 + 1}, {_width / 2 - 1, _width});
    g = RectGeneration(newMat, _startx + _width / 2 - 1, _starty + 0, _value, _minSize);
    current += g.Generate(result).rectNum;

    newMat = _mat({_height / 2 - 1, _height}, {0,_width / 2 + 1});
    g = RectGeneration(newMat, _startx + 0, _starty + _height / 2 - 1, _value, _minSize);
    current += g.Generate(result).rectNum;

    newMat = _mat({_height / 2 - 1, _height}, {_width / 2 - 1, _width});
    g = RectGeneration(newMat, _startx + _width / 2 - 1, _starty + _height / 2 - 1, _value, _minSize);
    current += g.Generate(result).rectNum;

    GenerateResult ret(false, current);

    s_quadTreeGenerationNum++;
    return ret;
}
