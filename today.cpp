#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // 現在の時刻を取得
    auto now = std::chrono::system_clock::now();

    // 現在の時刻をtime_t型に変換
    std::time_t time_now = std::chrono::system_clock::to_time_t(now);

    // tm構造体に変換
    std::tm* date = std::localtime(&time_now);

    // 年、月、日を取得
    int year = date->tm_year + 1900;  // 年は1900年からの経過年数
    int month = date->tm_mon + 1;    // 月は0から始まるため+1
    int day = date->tm_mday;

    // 年-月-日の形式で表示
    std::cout << "日付: " << year << "-" << month << "-" << day << std::endl;

    return 0;
}
