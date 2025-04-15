#include <iostream>
using namespace std;

// 插入排序算法实现
void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // 将大于key的元素向后移动
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// 主函数，包含输入和输出
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "原始数组: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "排序后的数组: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

/* 
 * 插入排序 算法分析：
 * ------------------------------------------
 * 1. 平均时间复杂度：O(n²)
 *    - 每个元素平均需要与前面一半的元素比较并移动位置
 * 
 * 2. 空间复杂度：O(1)
 *    - 仅使用常数级别的额外空间（原地排序）
 * 
 * 3. 是否稳定：是
 *    - 当遇到相等元素时，由于判断条件为 arr[j] > key，
 *      不会移动相等元素，因此保持原有顺序
 * 
 * 4. 最坏时间复杂度：O(n²)
 *    - 当输入数组完全逆序时，每个元素需要移动所有前面的元素
 */