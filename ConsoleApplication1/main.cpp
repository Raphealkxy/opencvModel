#include<iostream>
#include <opencv2/core/core.hpp>
 #include <opencv2/highgui/highgui.hpp>
using namespace cv;
int main()
{
	 	// ����һ��ͼƬ����Ϸԭ����
	 Mat img = imread("C:\\Users\\Timmy\\Desktop\\1.jpg");
		// ����һ����Ϊ "��Ϸԭ��"����
	cvNamedWindow("��Ϸԭ��");
		// �ڴ�������ʾ��Ϸԭ��
	imshow("��Ϸԭ��", img);
	 waitKey(10000);
 }