#include<iostream>
#include <opencv2/core/core.hpp>
 #include <opencv2/highgui/highgui.hpp>
using namespace cv;
int main()
{
	 	// 读入一张图片（游戏原画）
	 Mat img = imread("C:\\Users\\Timmy\\Desktop\\1.jpg");
		// 创建一个名为 "游戏原画"窗口
	cvNamedWindow("游戏原画");
		// 在窗口中显示游戏原画
	imshow("游戏原画", img);
	 waitKey(10000);
 }