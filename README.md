<div align=center>

![](https://s1.ax1x.com/2023/06/05/pCCXTSK.png)
</div>

# 写在前面

学编程 **切记绝对不能偷懒！！！看课和刷题是必要的，越勤越多越好！！！**  
**编程思维** 是 **学和练** 出来的，没有其他任何捷径！！！  

**光说不练假把式,光练不说傻把式,又练又说真把式。**

**借助工具来学习**，减少无效时间的浪费，比如**chatgpt**（百度搜索 "chatgpt镜像网站" ，选一个就行），哪里不懂都问它。

---

# 入门建议掌握的知识点

## 数学思想

- 高精度算法、大数处理、取模运算、进制转换、位运算  
- 数论（素数、最大公约数、最小公倍数、分解质因数）  
- 组合计数（排列、容斥）  
- 差分、前缀和、快速幂  
- 博弈论
- 其他

---

## 算法 | 数据结构

- 暴力、枚举与模拟、递归与分治、字符串处理、排序、二分、双指针、区间合并  
- 贪心、并查集、KMP  
- 动态规划DP（背包问题、线性DP、区间DP、状态压缩DP、记忆化搜索）
- 搜索（BFS、DFS、剪枝优化、回溯）    
- 线性数据结构（数组、链表、队列、栈）  
- 复杂数据结构（树、二叉树、图、哈希表）
- 最短路
- 其他

---

## c++ STL

### 容器类 

1. 序列式容器（Sequence Containers）：
- vector：动态数组，支持随机访问，可动态扩展大小。
- deque：双端队列，支持双向访问，可高效插入删除首尾元素。
- list：双向链表，支持顺序访问，可高效插入删除。
2. 关联式容器（Associative Containers）：
- set：基于红黑树实现的无序集合，元素唯一，并按照从小到大排列。
- multiset：基于红黑树实现的无序集合，元素可重复，并按照从小到大排列。
- map：基于红黑树实现的关联数组，键值对存储，自动排序。
- multimap：基于红黑树实现的关联数组，键可以重复，键值对按照插入顺序存储。
3. 无序关联式容器（Unordered Associative Containers）：
- unordered_set：基于哈希表实现的无序集合，元素唯一，按照哈希值分组，查找复杂度为 O(1)。
- unordered_multiset：基于哈希表实现的无序集合，元素可重复，按照哈希值分组，查找复杂度为 O(1)。
- unordered_map：基于哈希表实现的关联数组，键值对存储，自动扩容和重组，查找复杂度为 O(1)。
- unordered_multimap：基于哈希表实现的关联数组，键可以重复，键值对按照插入顺序存储，查找复杂度为 O(1)。  

### 容器适配器

- stack 是基于 deque 或 vector 或 list 实现的栈容器适配器，支持后进先出（LIFO）的元素存取。由于栈的特殊性，只允许从栈顶进行插入和删除操作，因此其接口与 vector 容器类似，只提供了 push、pop、top 等操作。
- queue 是基于 deque 或 list 实现的队列容器适配器，支持先进先出（FIFO）的元素存取。队列要求从队尾插入元素，从队头删除元素。因此，其接口与 deque 容器类似，只提供了 push、pop、front 和 back 等操作。
- priority_queue 是基于 vector 实现的堆容器适配器，支持自动排序和高效的插入、删除操作。堆排序的实现需要维护一个二叉堆，而 C++ STL 中提供了一个优先队列容器适配器，可以方便地实现优先队列功能。该容器适配器类似于队列，但是每次插入元素时会自动调整堆得顺序，使得队首元素始终是最大值（或最小值）。

### 组件

- pair 是用来存储一对值的容器适配器，可以用来定义关联数组、映射表等数据结构。例如可以使用 pair 存储一个字符串和一个整数，一个日期和一个时间等。pair 可以使用 STL 中的算法和容器进行操作，例如 vector、map、set 等。
- heap 是堆排序算法的一部分，它并不是一种容器或容器适配器。STL 中提供了 make_heap、push_heap 和 pop_heap 等函数，用于对容器中的元素进行堆排序。make_heap 函数将容器转换为堆，push_heap 函数在堆中插入新元素，pop_heap 函数删除堆顶元素并重新调整堆的结构。使用 heap 可以快速地对序列排序和查找最值等操作。  

### 迭代器

- 至少掌握 迭代器iterator 的用法

- [C++ TL迭代器](https://blog.csdn.net/ProgramAlcohol/article/details/122238033)

### 常用算法函数

- 至少掌握常用算法函数，如  
增删改查元素、排序、比较、翻转、计数、排列组合  
数学函数（返回最大最小值、幂运算、求平方根、求绝对值、求对数、向上/下取整、四舍五入、生成伪随机数、_gcd） 等

- [C++常用STL （容器类 、容器适配器 、迭代器 和 算法）](https://blog.csdn.net/m0_50046535/article/details/124358895)

---

## 其他

- 关键字auto的用法  
可以和 STL 容器、算法、迭代器等紧密结合使用，可以方便地推导出容器中元素、算法返回值、迭代器指向的类型等信息。

- 代码优化提速  
```
//  比如c++

//  提高输出时换行效率
    #define endl '\n'
//	提高程序的输入输出效率
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
```

- [C++常用STL （容器类 、容器适配器 、迭代器 和 算法）](https://blog.csdn.net/weixin_45940369/article/details/131059386)

- 可以参考 [OI-wiki](https://oi-wiki.org/) 的 [学习路线](https://oi-wiki.org/contest/roadmap/) 和 [学习资源](https://oi-wiki.org/contest/resources/)

---

# 编程 | 学习

写代码时 **多写注释**。

## 学习 | 练题 平台

不建议自己埋头学，最好还是跟着一些 **算法课** 来学（acwing or 牛客）  
并且**一定要勤加练习** ，**千万不要自以为看懂了就不去练题！！！**  

- [牛客竞赛](https://ac.nowcoder.com/)  
牛客竞赛，专业的竞技算法训练平台。  
✨ 有很多题目及比赛题可以写，最重要的是可以 **查看别人过题的代码** ，这个超级棒！！！

- [acwing](https://www.acwing.com)  
有算法系列精品课程-AcWing算法全家桶，配备全面系统的知识讲解，配套题库的实战训练，专业在线的答疑辅导。  
✨ 推荐 **买课** 看

- [洛谷](https://www.luogu.com.cn)  
洛谷致力于为参加noip、noi、acm的选手提供清爽、快捷的编程体验。它拥有在线测题系统、强大的社区、在线学习功能。

- [codeforce](http://codeforces.com)  
计算机编程爱好者提供在线评测系统的俄罗斯网站。上面有很多cpc区赛题。  
✨ **强烈推荐** 打cpc比赛的同学试试

- [oi-wiki](https://oi-wiki.org)  
免费开放且持续更新的 编程竞赛 知识整合站点。  
✨ 很棒

---

## 编程笔记 | 题解

有条件的 **强烈建议** 多写些 **编程笔记** 和 **题解**  
可以参照别人的来写，多写 **编程笔记** 和 **题解** 进行归纳总结，是可以提升自己的 **编程思维** 的。

可以写在CSDN或cnblog上（写在网上随时随地都可以查看）。  
建议学习并使用 md格式 来写，真的很方便。  
比如：[C++常用函数、容器类 和 STL](https://blog.csdn.net/weixin_45940369/article/details/131059386)

---

# 比赛相关要点注意

## 赛前

做好充足的准备

- 保证**良好的身体状态、充足的睡眠和休息、尽量少喝水**。
- 提前了解 **比赛规则** 和 **编译环境**。 
- 提前准备并妥善放置 **身份证 、 学生证 、 准考证 、 笔** 等物品。 
- 针对不同比赛，进行有针对性的刷题：  
蓝桥杯：**暴力、优化 、 DFS**等知识点 用的比较多。使用 **蓝桥杯练习系统** 进行练题。  
天梯赛：**容器类、数学思想 、 数据结构**等知识点 用的比较多。使用 **PTA系统** 进行练题。  
（ACM赛制）CPC类比赛： **容器类、数学思想、算法 、 数据结构** 都有涉及。使用 **acwing 、 洛谷 、 牛客** 进行日常练题，使用 **牛客竞赛 、 codeforce** 练同类型比赛的题。  
[ACM类算法竞赛 入门介绍](https://zhuanlan.zhihu.com/p/406365237)

## 赛中

既然参加编程比赛，就一定要朝着**解题更多，编码总用时更少**的方向努力。一切都要为此让步，比如
- 心态要稳，**不要在一题上卡太久**，继续往下写。
- **参考别人的过题情况** 来确定写题顺序。
- **仔细阅读题目** ，避免读错题。
- 赛前数月要 **勤刷题** ，保证充足的编程手感。
- 写题注意点：  
蓝桥杯/天梯赛：解不出题可以写出一些特殊情况的解进行 **骗分**。  
（ACM赛制）CPC类比赛：因ACM赛制，不能进行骗分。谨慎且果断提交，**尽量减少罚时** 。看到 **不懂的单词不要猜，直接查字典** 。

## 赛后

- 比赛完仍然要 **归纳总结** ，上网看看 **别人的思路和想法** ，有题目的话可以 **重新写题** ，编写 **编程笔记和题解** 。比如：  
[2023年第六届广西大学生程序设计竞赛（热身赛）题解](https://blog.csdn.net/weixin_45940369/article/details/131024684)
- 可以写 **比赛日记** ，记录比赛的经历、过程及心得，以后还可以回忆。比如：  
[如何评价第六届广西大学生程序设计竞赛?](https://www.zhihu.com/question/602563303)  
[gxcpc6 游记](https://afleartley.blog.luogu.org/gxcpc6-you-ji)

---

# 资料分享

## 笔记题解

- [牛客网编程笔记题解](https://www.nowcoder.com/users/730785264)
- [CSDN编程笔记题解](https://blog.csdn.net/weixin_45940369/category_12290671.html)
- [acwing编程笔记题解](https://www.acwing.com/user/myspace/index/303633/)

---

## 资料PDF（可打印）

- [oiwiki的pdf](https://github.com/OI-wiki/OI-Wiki-export/releases)  
挑一些打印就行

- [y总基础课+提高课+进阶课模板.pdf](资料PDF/)

---

## 题目及题解PDF

- [codeforce-gym](http://codeforces.com/gym)   
codeforce中有很多cpc题目和题解可以下载

- [题目及题解PDF](题目及题解PDF/)

---

# 贡献者

桂林学院 蓝桥杯、天梯赛、GXCPC 参赛队员

bilibili@回忆_少年