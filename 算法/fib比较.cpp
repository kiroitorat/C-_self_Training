#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

int fib_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fib_recursive(n-1) + fib_recursive(n-2);
}

int fib_dynamic(int n) {
    if (n <= 1) {
        return n;
    }

    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    int n = 40; // 斐波那契数列的计算长度
    steady_clock::time_point start, end;
    duration<double> elapsed;

    // 使用线程类并发执行递归方式和动态规划方式的斐波那契数列计算
    thread t1([&]() {
        start = steady_clock::now();
        int result = fib_recursive(n);
        end = steady_clock::now();
        elapsed = duration_cast<duration<double>>(end - start);
        cout << "递归方式计算结果：" << result << "，耗时：" << elapsed.count() << " 秒" << endl;
    });

    thread t2([&]() {
        start = steady_clock::now();
        int result = fib_dynamic(n);
        end = steady_clock::now();
        elapsed = duration_cast<duration<double>>(end - start);
        cout << "动态规划方式计算结果：" << result << "，耗时：" << elapsed.count() << " 秒" << endl;
    });

    t1.join();
    t2.join();

    return 0;
}
