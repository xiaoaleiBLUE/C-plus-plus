// 导入opencv 库
#include <opencv2/opencv.hpp>
#include <iostream>
// 导入gflags 库
#include <gflags/gflags.h>
// 定义命令行参数
DEFINE_int32(camera, 4, "Input camera"); // 摄像头编号

int main(int argc, char **argv)
{
    // 解析命令行参数
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    // 读取视频：创建了一个VideoCapture对象，参数为摄像头编号
    cv::VideoCapture capture(FLAGS_camera);
    // 设置指定摄像头的分辨率
    int width = 640;
    int height = 480;

    // 设置摄像头宽度和高度
    capture.set(cv::CAP_PROP_FRAME_WIDTH, width);
    capture.set(cv::CAP_PROP_FRAME_HEIGHT, height);

    // 判断视频是否读取成功，返回true表示成功
    if (!capture.isOpened())
    {
        std::cout << "无法打开摄像头: " << FLAGS_camera << std::endl;
        return 1;
    }
    // 读取视频帧，使用Mat类型的frame存储返回的帧
    cv::Mat frame;
    // 写入MP4文件，参数分别是：文件名，编码格式，帧率，帧大小
    cv::VideoWriter writer("./output/record.mp4", cv::VideoWriter::fourcc('H', '2', '6', '4'), 20, cv::Size(width, height));

    // 循环读取视频帧
    while (true)
    {
        // 读取视频帧，使用 >> 运算符或者read()函数，他的参数是返回的帧
        capture.read(frame);
        // capture >> frame;
        // flip
        cv::flip(frame, frame, 1);
        // 显示视频帧
        cv::imshow("opencv demo", frame);
        // 写入视频
        writer.write(frame);
        // 等待按键，延迟30ms，否则视频播放太快
        int k = cv::waitKey(30);
        // 按下ESC键退出
        if (k == 27)
        {
            std::cout << "退出" << std::endl;
            break;
        }
    }

    return 0;
}