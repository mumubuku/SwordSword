//
//  main.c
//  链表
//
//  Created by ZHAO on 2019/10/31.
//  Copyright © 2019 123. All rights reserved.
//

#include <stdio.h>

/*
 从尾到头打印链表：
 
 先都放到一个栈中，然后推出。
 */

/*
 链表倒数第k个节点：
 1.先算长度，然后输出倒数k个
 2.设置两个游标，然后快的到了终点慢的也到了。
 */

/*
 翻转链表：
 ListNode pre = null;
 ListNode next = null;
 while(head != null){ //注意这个地方的写法，如果写head.next将会丢失最后一个节点
     next = head.next;
     head.next = pre;
     pre = head;
     head = next;
 }
 return pre;

 */

/*
 合并两个链表：
 
 递归的比较2个链表节点的大小就可以了。
 */


/*
 复杂链表的复制：
 
 */

/*
 两个链表的第一个公共节点：
 
 先让长的先走， 然后又游标的概念。  一起走到终点，然后n--。
 */


/*
 链表中环的入口：快慢指针
 

 那么我们可以知道fast指针走过a+b+c+b

 slow指针走过a+b

 那么2*(a+b) = a+b+c+b

 所以a = c，结合图理解很快的。
 
 */

/*
 删除链表中重复的点：
  递归的调用进行删除。
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
