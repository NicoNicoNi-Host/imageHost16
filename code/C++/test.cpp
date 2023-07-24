#include "stdafx.h"
#include<iostream>
using namespace std;
typedef struct data{
    unsigned num;
    struct data *next;
}DataNode;
DataNode *CreateList(DataNode *Head){//创建升序线性表 //输入非0元素创建链表,输入0元素停止
    puts("输入非0元素创建链表,输入0元素停止");
    DataNode *pnew,*pend,*ps,*pe;
    while(1){
        pnew=new DataNode;//创建新结点
        cin>>pnew->num;//输入新结点学号
        if(pnew->num==0){//输入0则终止
            delete pnew;
            break;
        }
       
        if(Head==NULL){//如果当前链表为空,新结点如何处理?
            Head=pnew;
            pend=pnew;
        }
        else
        {
            if(pnew->num>pend->num){//否则如果新结点>尾结点,如何处理?
                pend->next=pnew;
                pend=pnew;
            }
           
            else if(pnew->num<Head->num){//如果新结点数字<头结点学号,如何处理?
                pnew->next=Head->next;
                ps=pnew;pnew=Head;Head=ps;
                Head->next=pnew;
            }
            else{//否则(新结点数字介于首尾结点之间) 重点
                ps=Head;pe=ps->next;
                while(pe->num<pnew->num){
                    ps=ps->next;pe=pe->next;
                }
                ps->next=pnew;pnew->next=pe;
            }
        }
       
    }//while循环结束
    pend->next=NULL;
    return Head;
}
DataNode *MergeList(DataNode *HeadLA,DataNode *HeadLB,DataNode *HeadLC)
{//归并线性表
    DataNode *pa=HeadLA,*pb=HeadLB,*pnew=NULL,*pend=NULL;
    pend=HeadLC;
    if(pend==NULL){
        pnew=new DataNode;
       
        if(pa->num<pb->num){
            pnew=pa;HeadLC=pnew;pend=pnew;
            pa=pa->next;
        }
        else{
            pnew=pb;HeadLC=pnew;pend=pnew;
            pb=pb->next;
        }
    }
    while(pa&&pb){//当双方均不为空时 NULL&&NULL=0
        pnew=new DataNode;
        if(pa->num==pend->num){delete pnew;pa=pa->next;continue;}//去除重复,并开始下一次循环,防止使用NULL进行操作
        if(pb->num==pend->num){delete pnew;pb=pb->next;continue;}
        if(pa->num<pb->num){
            pnew=pa;pend->next=pnew;pend=pnew;pa=pa->next;
        }
        else{
            pnew=pb;pend->next=pnew;pend=pnew;pb=pb->next;
        }
    }
    while(pa){
        pnew=new DataNode;
        if(pa->num==pend->num){delete pnew;pa=pa->next;continue;} pnew=pa;pend->next=pnew;pend=pnew;pa=pa->next;
    }
    while(pb){
        pnew=new DataNode;
        if(pb->num==pend->num){delete pnew;pb=pb->next;continue;} pnew=pb;pend->next=pnew;pend=pnew;pb=pb->next;
    }
    pend->next=NULL;
    return HeadLC;
}
void PrintList(DataNode *Head){
    if(Head==NULL){//如果链表为空的处理
        puts("List is empty!");
        return;
    }
    DataNode *pt=Head;
    while(pt!=NULL){
        cout<<pt->num<<'\t';
        pt=pt->next;
    }
    puts("");
}
int main(void) {
    DataNode *HeadLA=NULL,*HeadLB=NULL,*HeadLC=NULL;
    HeadLA=CreateList(HeadLA);HeadLB=CreateList(HeadLB);
    HeadLC=MergeList(HeadLA,HeadLB,HeadLC);
    PrintList(HeadLC);
    // PrintList(HeadLA);PrintList(HeadLB);
    system("pause");
    return 0;
}

