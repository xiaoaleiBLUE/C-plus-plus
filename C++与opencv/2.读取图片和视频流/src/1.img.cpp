// 图片的读取和显示
// 导入opencv头文件
#include "opencv2/opencv.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    // 读取图片，mat是matrix的缩写，是一个矩阵，类似与numpy ndarray
    cv::Mat image = cv::imread("./media/cat.jpg");
    // 判断是否读取成功
    if (image.empty())
    {
        std::cout << "无法读取图片 " << std::endl;
        return 1;
    }
    // 打印图片高度和宽度
    std::cout << "图片高度: " << image.rows << " 宽度: " << image.cols << std::endl;

    // 打印图片data
    // 以Numpy的方式打印
    // std::cout << "图片data: " << cv::format(image, cv::Formatter::FMT_NUMPY) << std::endl;
    // 以python list的方式打印
    // std::cout << "图片data: " << cv::format(image, cv::Formatter::FMT_PYTHON) << std::endl;

    // 创建一个灰度图
    cv::Mat gray;
    // 转换为灰度图
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    // 保存
    cv::imwrite("./output/gray.jpg", gray);

    // 显示
    cv::imshow("原图", image);
    cv::imshow("灰度图", gray);
    // 等待按键
    cv::waitKey(0);

}