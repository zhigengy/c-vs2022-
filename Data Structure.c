////链表逆置
//#include<stdlib.h>
//typedef struct LNode{
//	int num;
//	struct LNode* next;
//}LNode,*LinkList;
//LinkList ListTailInsert(LinkList*);//创建单链表1-100
//void PrintLinkList(LinkList);//打印
//LinkList reLinkList(LinkList,LinkList*);
//int main() {
//	LinkList L1 = NULL, L2 = NULL;
//	ListTailInsert(&L1);
//	PrintLinkList(L1);
//	reLinkList(L1, &L2);
//	PrintLinkList(L2);
//	return 0;
//}
//LinkList ListTailInsert(LinkList* L) {
//	(*L) = (LinkList)malloc(sizeof(LNode));
//	if ((*L) == NULL) {
//		return NULL;
//	}
//	(*L)->next = NULL;
//	(*L)->num = 0;
//	LNode* r = (*L);
//	LNode* s = (*L);
//	int x = 0;
//	for (x = 0; x < 100; x++) {
//		s = (LNode*)malloc(sizeof(LNode));
//		if (s == NULL) {
//			return (*L);
//		}
//		s->num = x;
//		r->next = s;
//		r = s;
//		
//	}
//	r->next = NULL;
//	return (*L);
//}
//void PrintLinkList(LinkList L) {
//	LNode* s = L->next;
//	while (s != NULL) {
//		printf("%2d ", s->num);
//		s = s->next;
//	}
//	printf("\n");
//}
//LinkList reLinkList(LinkList L1,LinkList* L2) {
//	(*L2) = (LinkList)malloc(sizeof(LNode));
//	if ((*L2) == NULL) {
//		return NULL;
//	}
//	(*L2)->num = 0;
//	(*L2)->next = NULL;
//	LNode* r = NULL;
//	LNode* s = L1->next;
//	while (s != NULL) {
//		r = (LNode*)malloc(sizeof(LNode));
//		if (r == NULL) {
//			return(*L2);
//		}
//		r->num = s->num;
//		s = s->next;
//		r->next = (*L2)->next;
//		(*L2)->next = r;
//	}
//	return (*L2);
//}

////单链表
//#include<stdlib.h>
//typedef struct LNode {
//	int num;
//	struct LNode* next;
//}LNode,*LinkList;
//int initLNode(LinkList*);//初始化
//LinkList ListTailInsert(LinkList* L);//尾插法
//LinkList ListHeadInsert(LinkList* L);//头插法
//int insertList(LinkList, int, int);//插入在第i位
//int insertPriorList(LNode*, int);//在前一位插入
//int deleteList(LinkList, int, int*);//删除第i位
//int deleteNode(LNode* );//定点删除
//LNode* GetElem(LinkList, int);//按位查找
//LNode* LocateElem(LinkList, int);//按值查找
//int main() {
//	LinkList L = NULL; 
//	return 0;
//}
//int initLNode(LinkList* L) {
//	*L = (LinkList)malloc(sizeof(LNode));
//	if (*L == NULL) {
//		return 1;
//	}
//	(*L)->num = 0;
//	(*L)->next = NULL;
//	return 0;
//}
//
//LinkList ListTailInsert(LinkList* L) {
//	(*L) = (LinkList)malloc(sizeof(LNode));
//	if ((*L) == NULL) {
//		return NULL;
//	}
//	(*L)->num = 0;
//	(*L)->next = NULL;
//	int x = 0;
//	if (scanf("%d", &x) != 1) {
//		return NULL;
//	}
//	LNode* s = (*L);
//	LNode* r = (*L);
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		if (s == NULL) {
//			return (*L);;
//		}
//		s->num = x;
//		r->next = s;
//		r = s;
//		if (scanf("%d", &x) != 1) {
//			return (*L);
//		}
//		r->next = NULL;//zhongyao
//	}
//	return (*L);
//}
//
//LinkList ListHeadInsert(LinkList* L) {
//	(*L) = (LinkList)malloc(sizeof(LNode));
//	if ((*L) == NULL) {
//		return NULL;
//	}
//	(*L)->num = 0;
//	(*L)->next = NULL;
//	LNode* s = (*L);
//	int x = 0;
//	if (scanf("%d", &x) != 1) {
//		return NULL;
//	}
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));
//		if (s == NULL) {
//			return (*L);
//		}
//		s->num = x;
//		s->next = (*L)->next;
//		(*L)->next = s;
//		if (scanf("%d", &x) != 1) {
//			return (*L);
//		}
//	}
//	return (*L);
//}
//
//int insertList(LinkList L, int i, int e) {
//	if (i < 0) {
//		return 1;
//	}
//	//找到第i-1个节点
//	LNode* p = L;
//	int j = 0;
//	while (p != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	//在节点后插入一个新节点
//	if (p == NULL) {
//		return 1;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL) {
//		return 1;
//	}
//	s->num = e;
//	s->next = p->next;
//	p->next = s;
//	return 0;
//	////后插新节点可封装为一个函数
//	////即
//	//int insertNextList(LNode * p, int e) {
//	//	if (p == NULL) {
//	//		return 1;
//	//	}
//	//	LNode* p2 = (LNode*)malloc(sizeof(LNode));
//	//	if (p2 == NULL) {
//	//		return 1;
//	//	}
//	//	p2->next = p->next;
//	//	p2->num = e;
//	//	p->next = p2;
//	//	return 0;
//	//}
//}
//
//int insertPriorList(LNode* p, int e) {
//	LNode* temp = (LNode*)malloc(sizeof(LNode));
//	//创建新节点t 把p的数据放入t中 把t的数据放入p中
//	if (temp == NULL) {
//		return 1;
//	}
//	temp->next = p->next;
//	temp->num = p->num;
//	p->next = temp;
//	p->num = e;
//	return 0;
//}
//
//int deleteList(LinkList L, int i, int* e) {
//	if (i < 0) {
//		return 1;
//	}
//	int j = 0;
//	LNode* p = L;
//	while (p != NULL && j < i - 1) {
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) {
//		return 1;
//	}
//	if (p->next == NULL) {
//		return 1;
//	}
//	LNode* p2 = p->next;
//	p->next = p2->next;
//	*e = p2->num;
//	free(p2);
//	return 0;
//	////若不带头节点
//	//if (i == 1) {
//	//	//此时传参要传LinkList* L否则无法改变L所指向
//	//	LNode* p1 = *L;
//	//	*e = p1->num;
//	//	*L = p1->next;
//	//	free(p1);
//	//	return 0;
//	//}//其他情况与上方一样
//}
//
//int deleteNode(LNode* p) {
//	//把后继节点数据放入其中删去后继节点
//	if (p == NULL) {
//		return 1;
//	}
//	if (p->next == NULL) {
//		return 1;
//	}
//	LNode* q = p->next;
//	p->num = q->num;
//	p->next = q->next;
//	free(q);
//	return 0;
//}
//
//LNode* GetElem(LinkList L, int i) {
//	if (i < 0) {
//		return NULL;
//	}
//	int j = 0;
//	LNode* p = L;
//	while (p != NULL && j < i) {
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
//LNode* LocateElem(LinkList L, int e) {
//	LNode* p = L;
//	while (p != NULL&& p->num != e) {
//		p = p->next;
//	}
//	return p;
//}

////双链表
//#include<assert.h>
//typedef struct DNode {
//	int num;
//	struct DNode* prior, *next;
//}DNode,*DLinkList;
//int InsertNextDnode(DNode*, DNode*);
//int DeleteNextDNode(DNode*);
//int main() {
//	return 0;
//}
//int InsertNextDNode(DNode* p, DNode* s) {
//	assert(p || s);
//	s->next = p->next;
//	if (p->next != NULL) {
//		p->next->prior = s;
//	}
//	s->prior = p;
//	p->next = s;
//	return 0;
//}
//int DeleteNextDNode(DNode* p) {
//	if (p == NULL) {
//		return -1;
//	}
//	DNode* q = p->next;
//	if (q== NULL) {
//		return -1;
//	}
//	p->next = q->next;
//	if (q->next != NULL) {
//		q->next->prior = p;
//	}
//	free(q);
//	return 0;
//}

//#include <string.h>
//
//#define MAXSIZE 10
//typedef struct {
//    int data;
//    int cur;
//}compoent, StaticLinkList[MAXSIZE];
//
//// 初始化静态链表
//void InitList(StaticLinkList space) {
//    for (int i = 0; i < MAXSIZE - 1; i++) {
//        space[i].cur = i + 1;
//    }
//    space[MAXSIZE - 1].cur = 0;
//}
//
//// 从备用链表申请一个空闲节点
//int Malloc_SLL(StaticLinkList space) {
//    int i = space[0].cur;
//    if (i != 0) {
//        space[0].cur = space[i].cur;
//    }
//    return i;
//}
//
//// 释放节点到备用链表
//void Free_SLL(StaticLinkList space, int k) {
//    space[k].cur = space[0].cur;
//    space[0].cur = k;
//}
//
//// 获取链表长度（有效数据个数）
//int ListLength(StaticLinkList space) {
//    int len = 0;
//    int i = space[MAXSIZE - 1].cur;
//    while (i != 0) {
//        len++;
//        i = space[i].cur;
//    }
//    return len;
//}
//
//// 插入元素：在第 index 个位置插入值 e
//int ListInsert(StaticLinkList space, int index, int e) {
//    int len = ListLength(space);
//    if (index < 1 || index > len + 1) 
//        return 0;
//    int new = Malloc_SLL(space);
//    if (new == 0) 
//        return 0;
//    space[new].data = e;
//    int j = MAXSIZE - 1;  
//    for (int k = 1; k <= index - 1; k++) {
//        j = space[j].cur;
//    }
//    space[new].cur = space[j].cur;
//    space[j].cur = new;
//    return 1;
//}
//
//// 删除元素：删除第 index 个位置的元素
//int ListDelete(StaticLinkList space, int index) {
//    int len = ListLength(space);
//    if (index < 1 || index > len) 
//        return 0;
//    int j = MAXSIZE - 1;
//    for (int k = 1; k <= index - 1; k++) {
//        j = space[j].cur;
//    }
//    int del = space[j].cur;
//    space[j].cur = space[del].cur;
//    Free_SLL(space, del);
//    return 1;
//}
//
//// 遍历打印静态链表
//void PrintList(StaticLinkList space) {
//    int i = space[MAXSIZE - 1].cur;
//    while (i != 0) {
//        printf("%d ", space[i].data);
//        i = space[i].cur;
//    }
//    printf("\n");
//}
//
//int main() {
//    StaticLinkList L;
//    InitList(L);
//    ListInsert(L, 1, 10);
//    ListInsert(L, 2, 20);
//    ListInsert(L, 3, 30);
//    ListInsert(L, 2, 15);
//    printf("插入后链表：");
//    PrintList(L); 
//    ListDelete(L, 3);
//    printf("删除第3个元素后：");
//    PrintList(L); 
//    printf("链表长度：%d\n", ListLength(L));
//
//    return 0;
//}

//
//
