#include <iostream>
using namespace std;

class SafeArray { 
public: 
    // 建構函式 
    SafeArray(int s); 
    // 解構函式 
    //~SafeArray();
 
    int get(int a); 
    void set(int a, int b);
 
    int length; 
private:
    int *_array; 

    bool isSafe(int i); 
};
// 動態配置陣列
SafeArray::SafeArray(int len) {
    length = len;
    _array = new int[length];
}

// 測試是否超出陣列長度
bool SafeArray::isSafe(int i) {
    if(i >= length || i < 0) {
        return false;
    } 
    else {
        return true;
    }
}

// 取得陣列元素值
int SafeArray::get(int i) {
    if(isSafe(i)) {
        return _array[i];
    }
 
    return 0;
}

// 設定陣列元素值
void SafeArray::set(int i, int value) {
    if(isSafe(i)) {
        _array[i] = value;
    }
}

// 刪除動態配置的資源
/*SafeArray::~SafeArray() {
    delete [] _array;
}*/

int main() {
    SafeArray safeArray(10);
 
    for(int i = 0; i < safeArray.length; i++) {
        safeArray.set(i, (i + 1) * 10);
    }
 
    for(int i = 0; i < safeArray.length; i++) {
        cout << safeArray.get(i) << " ";
    }
    cout << endl;
 
    return 0; 
}
