#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiNode, *BiTree;

void Insert(BiTree &T, BiNode *s)
{
    if(T == NULL)
        T = s;
    else
    {
        if(s->data < T->data)
            Insert(T->lchild, s);
        if(s->data > T->data)
            Insert(T->rchild, s);
    }
}

void PreOrder(BiTree &T)
{
    if(T)
    {
        cout << T->data << " ";
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void InOrder(BiTree &T)
{
    if(T)
    {
        InOrder(T->lchild);
        cout << T->data << " ";
        InOrder(T->rchild);
    }
}

void PostOrder(BiTree &T)
{
    if(T)
    {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        cout << T->data << " ";
    }
}

int main()
{
    int n;
    // freopen("data.in", "r", stdin);
    while(cin >> n)
    {
        BiTree T = NULL;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            BiNode *s;
            s = (BiTree)malloc(sizeof(BiNode));
            s->data = x;
            s->lchild = s->rchild = NULL;
            Insert(T, s);
        }
        PreOrder(T);
        cout << endl;
        InOrder(T);
        cout << endl;
        PostOrder(T);
        cout << endl;
    }
    return 0;
}