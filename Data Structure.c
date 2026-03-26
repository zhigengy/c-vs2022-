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
//
//
