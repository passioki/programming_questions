@[TOC](programming_questions)
# upload daily practice questions
# 使用VSCode提交
Visual Studio Code可以直接使用GUI来管理仓库，一键推送整个仓库，实在是太方便了！
# 2020_0430
- 今天完成了十余道PTA题目，都为简单题，不过也是有进步的
## 逆序题目
- pow函数的返回类型和传入参数是double类型
## 寻找250
- 通过和while连用，scanf可以一行输入多个参数
## 九九乘法表
- \t后面接\n会把\t的效果覆盖掉
# 初步尝试md语法
## 单行代码
`printf("Hello World!");`
## 多行代码
```
#include<stdio.h>
int main(int argc,char **argv){
    printf("Hello World!");
    return 0;
}
```
## 流程图
```flow
st=>start
op=>operation
cond=>condition
e=>end
st->op->cond
cond(yes)->e
cond(no)->op
```
## 表格
周一|周三|周五
-|:-:|-:
PTA刷题|edX|看语法书
做笔记|做笔记|做笔记
回顾周五|回顾周一|回顾周三
## 无序列表
- 列表一
- 列表二
   - 列表2.1（次级列表只需要在-前面加三个空格即可）
   - 列表2.2
+ 列表三
* 列表四
## 任务列表
- [x]完成任务
- []计划任务
## 字体格式
***斜体加粗***
*斜体*
**加粗**
~~删除线~~
## 有序列表
1. 有序列表一
2. 有序列表二
   2.1 次级列表
## 图片
![图片下方文字](https://t1.hddhhn.com/uploads/tu/201812/622/484.jpg "图片title")
## 超链接
[超链接名1](超链接地址 "超链接title")
## 引用
>引用内容
>>引用内容
>>> 引用内容

## 分割线
三个或者三个以上的 - 或者 * 都可以。
--- 
----
***
****
今日练习来自[简书高老师的博客](https://www.jianshu.com/p/191d1e21f7ed "Markdown基本语法")，感谢高老师！

# 2020_0514
PTA 93题水仙花，用到了过多的pow函数，以至于答案超时，以后尽量少用或者不用！