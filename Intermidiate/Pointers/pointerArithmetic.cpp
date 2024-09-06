#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3};
    int* ptr = numbers;
    /* 
    Khi cộng hoặc trừ một con trỏ với một số nguyên, giá trị của con trỏ
    sẽ tăng thêm hoặc giảm đi một giá trị đúng bằng giá trị của loại
    dữ liệu mà con trỏ trỏ tới.
    Ví dụ: Khi ta khai báo con trỏ là một số nguyên, giá trị của con trỏ
    sẽ tăng thêm hoặc giảm đi một giá trị đúng bằng 4 bytes.
    */
    cout << *(ptr + 1) << endl; // Ngoài ra, ta có hai cách viết tương đương bên dưới
    cout << ptr[1] << endl;
    cout << numbers[1] << endl;

    return 0;
}