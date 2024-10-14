#include "RectGeneration.hpp"

RectGeneration::RectGeneration(cv::Mat mat, int width, int height, int startx, int starty, double value, int minSize)
    :_mat(mat)
    , _width(width)
    , _height(height)
    , _startx(startx)
    , _starty(starty)
    , _value(value)
    , _minSize(minSize)
{

}
GenerateResult RectGeneration::Generate(std::vector<Rect>& result, int start)
{
    int current = start;
    GenerateResult ret = {true, 0};
    ret = GenrateHorizontal(result, current, 0);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateHorizontal(result, current, _height - 1);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateVertical(result, current, 0);
    if (!ret.noSplit)
    {
        return ret;
    }
    ret = GenrateVertical(result, current, _width - 1);
    if (!ret.noSplit)
    {
        return ret;
    }
    //转了1圈了，都没有分裂，也没有全部生成，那么就用4个点就可以了

    Rect r;
    r.leftBottom = Point{_startx, _starty};
    r.leftTop = Point{_startx, _starty + _height - 1};
    r.rightBottom = Point{_startx + _width - 1, _starty};
    r.rightTop = Point{_startx + _width - 1, _starty + _height - 1};
    result.push_back(r);
    return ret;
}
GenerateResult RectGeneration::GenerateAll(std::vector<Rect>& result, int start)
{
    for (int y = 0; y < _height - 1; y++)
    {
        for (int x = 0; x < _width - 1; x++)
        {
            Rect r;
            r.leftBottom = Point{x, y};
            r.leftTop = Point{x, y + 1};
            r.rightBottom = Point{x + 1, y};
            r.rightTop = Point{x + 1, y + 1};

            result.push_back(r);
        }
    }
    GenerateResult ret(false, (_width - 1) * (_height - 1));
    return ret;
}
GenerateResult RectGeneration::GenrateHorizontal(std::vector<Rect>& result, int start, int edgeRow)
{
    int current = start;
    for (int i = 0; i < _width; i++)
    {
        double c = _mat.at<float>(edgeRow, i);
        if (c > _value)
        {//超过阈值，此矩阵需要拆分/全部生成矩形
            if (_width <= _minSize || _height <= _minSize)
            {
                return GenerateAll(result, current);
            }
            else
            {
                cv::Mat newMat(_mat({0, _height}, {0,_width / 2}));
                RectGeneration g(newMat, _width / 2, _height, 0, 0, _value, _minSize);
                current += g.Generate(result, current).rectNum;

                newMat = _mat({0, _height}, {_width / 2, _width});
                RectGeneration g2(newMat, _width - _width / 2, _height, _width / 2, 0, _value, _minSize);
                current += g2.Generate(result, current).rectNum;

                GenerateResult ret = {false, current};
                return ret;
            }
        }
    }
    return {true, 0};
}

GenerateResult RectGeneration::GenrateVertical(std::vector<Rect>& result, int start, int edgeCol)
{
    int current = start;
    for (int i = 0; i < _height; i++)
    {
        double c = _mat.at<float>(i, edgeCol);
        if (c > _value)
        {//超过阈值，此矩阵需要拆分/全部生成矩形
            if (_width <= _minSize || _height <= _minSize)
            {
                return GenerateAll(result, current);
            }
            else
            {
                cv::Mat newMat(_mat({0, _height / 2}, {0,_width}));
                RectGeneration g(newMat, _width, _height / 2, 0, 0, _value, _minSize);
                current += g.Generate(result, current).rectNum;

                newMat = _mat({_height / 2, _height}, {0, _width});
                RectGeneration g2(newMat, _width, _height - _height / 2, 0, _height / 2, _value, _minSize);
                current += g2.Generate(result, current).rectNum;

                GenerateResult ret = {false, current};
                return ret;
            }
        }
    }
    return {true, 0};
}
