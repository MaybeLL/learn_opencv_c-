//
// Created by jixie on 2019/12/16.
//

#include <iostream>
//#include <opencv2/opencv.hpp>
#include "C++/Polyhead.h"
using namespace std;


int main() {
//    Mat img = imread("1.jpg");
//    if (img.empty()) {
//        cout << "no img" << endl;
//        return -1;
//    }
//    imshow("1", img);
//    waitKey(0);
//    return 0;
    Shape *shape;
    Rectangle rec(10,7);
    Triangle  tri(10,5);

    // 存储矩形的地址
    //父类指针指向子类对象
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();

    return 0;
}
