//
//  main.c
//  二叉树
//
//  Created by ZHAO on 2019/10/31.
//  Copyright © 2019 123. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
 
/*
 从上到下打印二叉树，创建一个对列，每次poll的时候，然后依次添加左右节点。
 
  &&&&&---------------------------------------
 
 特殊需求：按层打印，每一层输出一行：增加last 和 nlast去控制行的变化。

  &&&&&---------------------------------------
 按照之字形打印二叉树：  运用2个栈，进行数据的存储。
 
  &&&&&---------------------------------------
 二叉树中和为某一个值的路径：深度优先遍历dfs。
 
 &&&&&---------------------------------------
 重建二叉树：根据前序遍历序列和中序遍历序列重构二叉树。
 
 思路：前序遍历第一个是根节点，中序遍历可以根据根节点去做区分。
 
 &&&&&-------------------------------------------------------
 
 树的子结构：判断一个树是否包含另一个树。
 
 思路：遍历第一个树，看根节点能不能对上，然后进行深一步判断。
 
&&&&&---------------------------------------
 
 二叉树的镜像：
 
 思路：递归交换所有的左右子树。
 
 
&&&&&---------------------------------------
 
 二叉搜索树的后序遍历序列：
 
 根据二叉搜索树的特点去寻找，最后一个是根节点，左子树都比根节点小，右子树都比根节点大。
 

&&&&&---------------------------------------
 
 二叉搜索树与排序的双向双向链表：
 
 思路： 二叉搜索树的中序遍历就是排序好的。
 
 &&&&&---------------------------------------
 
 二叉树的深度：
 
 思路：遍历二叉树的左右子树。
 
 &&&&&---------------------------------------
 
 平衡二叉树：判断二叉树是不是平衡二叉树。
 
 思路： 遍历所有子树深度差是不是大于1。
 
 &&&&&---------------------------------------
 
 二叉树的下一个节点：给定二叉树和其中的一个节点，找出中序遍历的下一个节点，并返回。
 思路：
 
 &&&&&---------------------------------------
 
 对称二叉树： 交换左右子树。
 
 
 &&&&&---------------------------------------
 序列化二叉树： 二叉树的存储。
 
 
 &&&&&---------------------------------------
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 */

 
typedef struct node{ //树的结点
    int data;
    struct node* left;
    struct node* right;
} Node;
 
typedef struct { //树根
    Node* root;
} Tree;
 
void insert(Tree* tree, int value)//创建树
{
    Node* node=(Node*)malloc(sizeof(Node));//创建一个节点
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    if (tree->root == NULL)//判断树是不是空树
    {
        tree->root = node;
    }
    else {//不是空树
        Node* temp = tree->root;//从树根开始
        while (temp != NULL)
        {
 
 
            if (value < temp->data)//小于就进左儿子
            {
                if (temp->left == NULL)
                {
                    temp->left = node;
                    return;
                }
                else {//继续判断
                    temp = temp->left;
                }
            }
            else {//否则进右儿子
 
                if (temp->right == NULL)
                {
                    temp->right = node;
                    return;
                }
                else {//继续判断
                    temp = temp->right;
                }
            }
        }
    }
    return;
}
 
void inorder(Node* node)//树的中序遍历
{
    if (node != NULL)
    {
        inorder(node->left);
        printf("%d ",node->data);
        inorder(node->right);
    }
}
 
int main()
{
    Tree tree;
    tree.root = NULL;//创建一个空树
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)//输入n个数并创建这个树
    {
        int temp;
        scanf("%d",&temp);
        insert(&tree, temp);
    }
    inorder(tree.root);//中序遍历
    getchar(); getchar();
    return 0;
}
