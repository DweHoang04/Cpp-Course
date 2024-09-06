#include <iostream>

using namespace std;

/*
Dynamic memory được sử dụng để cấp phát bộ nhớ 
tại thời điểm chạy của chương trình, đảm bảo có 
đủ bộ nhớ trong quá trình sử dụng.
*/

int main() {
    // Stack memory: Cấp phát bộ nhớ tĩnh
    // int numbers[10];
    
    // Cấp phát bộ nhớ động cho mảng số nguyên (Heap memory or Free store) 
    int* numbers = new int[10];
    delete[] numbers; // Giải phóng bộ nhớ
    numbers = nullptr; // Gán con trỏ về nullptr
}