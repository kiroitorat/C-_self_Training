#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

const double PI = std::acos(-1);

// 定义被积函数
double f(double theta) {
    double r = 3 - std::cos(theta);
    return 0.5 * r * r;
}

// 数值积分，使用梯形公式
double integrate(std::vector<double>& x, std::vector<double>& y) {
    double sum = 0.0;
    for (int i = 1; i < x.size(); ++i) {
        double dx = x[i] - x[i-1];
        double h = (y[i] + y[i-1]) / 2.0;
        sum += dx * h;
    }
    return sum;
}

int main() {
    int n = 1000; // 离散化点数
    std::vector<double> x(n), y(n);

    // 枚举theta，计算对应的x和y
    for (int i = 0; i < n; ++i) {
        double theta = i * 2.0 * PI / n;
        double r = 3 - std::cos(theta);
        x[i] = r * std::cos(theta);
        y[i] = r * std::sin(theta);
    }

    // 绘制图像
    std::cout << "set terminal wxt size 600,600" << std::endl;
    std::cout << "plot '-' with lines" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << x[i] << " " << y[i] << std::endl;
    }
    std::cout << "e" << std::endl;

    // 计算面积
    double area = integrate(x, y);
    std::cout << "The area is: " << area << std::endl;

    return 0;
}