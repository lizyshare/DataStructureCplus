# DataStructureCplus

:lion:**排序**

以下是对八种常见排序算法的详细介绍：

---

### **1. 冒泡排序 (Bubble Sort)**  
- **原理**：通过相邻元素比较和交换，每一轮将最大元素“冒泡”到末尾。  
- **时间复杂度**  
  - 平均/最坏：O(n²)  
  - 最优（已有序）：O(n)  
- **空间复杂度**：O(1)（原地排序）  
- **稳定性**：是  
- **特点**：简单但效率低，适合小规模或几乎有序的数据。

---

### **2. 选择排序 (Selection Sort)**  
- **原理**：每次从待排序序列中选择最小元素，与当前未排序部分的起始位置交换。  
- **时间复杂度**：O(n²)（所有情况）  
- **空间复杂度**：O(1)  
- **稳定性**：否（交换可能破坏相同元素顺序）  
- **特点**：交换次数少（O(n)次），适合数据量小且交换成本高的场景。

---

### **3. 插入排序 (Insertion Sort)**  
- **原理**：将未排序元素逐个插入已排序部分的正确位置。  
- **时间复杂度**  
  - 平均/最坏：O(n²)  
  - 最优（已有序）：O(n)  
- **空间复杂度**：O(1)  
- **稳定性**：是  
- **特点**：对小规模或部分有序数据高效，常用于快速排序的优化子过程。

---

### **4. 希尔排序 (Shell Sort)**  
- **原理**：插入排序的改进版，通过分组间隔逐渐缩小实现高效排序。  
- **时间复杂度**：O(n log n) ~ O(n²)（取决于间隔序列）  
- **空间复杂度**：O(1)  
- **稳定性**：否（分组插入可能改变顺序）  
- **特点**：中等规模数据表现较好，实际性能依赖间隔策略。

---

### **5. 归并排序 (Merge Sort)**  
- **原理**：分治法（Divide and Conquer），递归拆分数组后合并有序子序列。  
- **时间复杂度**：O(n log n)（所有情况）  
- **空间复杂度**：O(n)（合并需额外数组）  
- **稳定性**：是  
- **特点**：稳定且高效，适合大数据量，常用于外部排序。

---

### **6. 快速排序 (Quick Sort)**  
- **原理**：分治法，通过基准值（pivot）划分数组并递归排序。  
- **时间复杂度**  
  - 平均：O(n log n)  
  - 最坏（极端不平衡划分）：O(n²)  
- **空间复杂度**：O(log n)（递归栈）  
- **稳定性**：否（分区交换破坏顺序）  
- **特点**：实际应用中最快的内排序算法，但对初始数据敏感，需合理选择基准。

---

### **7. 堆排序 (Heap Sort)**  
- **原理**：利用最大堆/最小堆结构，反复取出堆顶元素重建堆。  
- **时间复杂度**：O(n log n)（所有情况）  
- **空间复杂度**：O(1)（原地建堆）  
- **稳定性**：否（堆调整可能破坏顺序）  
- **特点**：适合内存受限场景，但缓存局部性较差。

---

### **8. 基数排序 (Radix Sort)**  
- **原理**：按位分配至桶中，从低位到高位逐位排序（LSD或MSD）。  
- **时间复杂度**：O(nk)（k为最大位数）  
- **空间复杂度**：O(n + k)（桶数量）  
- **稳定性**：是（依赖稳定的子排序算法）  
- **特点**：适合整数或定长字符串排序，需额外空间，不依赖比较操作。

---

### **总结表格**
| 排序算法 | 平均时间复杂度 | 最坏时间复杂度 | 空间复杂度 | 稳定性 | 适用场景               |
| -------- | -------------- | -------------- | ---------- | ------ | ---------------------- |
| 冒泡排序 | O(n²)          | O(n²)          | O(1)       | 是     | 小数据、教学示例       |
| 选择排序 | O(n²)          | O(n²)          | O(1)       | 否     | 交换成本高的小数据     |
| 插入排序 | O(n²)          | O(n²)          | O(1)       | 是     | 小数据或部分有序数据   |
| 希尔排序 | O(n log n)     | O(n²)          | O(1)       | 否     | 中等规模数据           |
| 归并排序 | O(n log n)     | O(n log n)     | O(n)       | 是     | 大数据、稳定性要求高   |
| 快速排序 | O(n log n)     | O(n²)          | O(log n)   | 否     | 通用排序、平均性能最优 |
| 堆排序   | O(n log n)     | O(n log n)     | O(1)       | 否     | 内存受限的大数据       |
| 基数排序 | O(nk)          | O(nk)          | O(n + k)   | 是     | 整数或定长字符串排序   |
