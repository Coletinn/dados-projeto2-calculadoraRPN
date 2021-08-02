/*
Gustavo Coleto de Freitas 32076541
Jo�o Vitor Teles Centrone 32033125
*/


struct Node {
	float data;
	Node* next;
};

struct LinkedList {
	int count;
	Node* head;
	Node* tail;
};

LinkedList* Create_List();

void Destroy(LinkedList* list);

void Insert(LinkedList* list, float value);

void Append(LinkedList* list, float value);

Node* RemoveHead(LinkedList* list);

Node* RemoveTail(LinkedList* list);

Node* RemoveNode(LinkedList* list, float value);

Node* GetHead(const LinkedList* list);

Node* GetTail(const LinkedList* list);

Node* GetNode(const LinkedList* list, float value);

int Count(const LinkedList* list);

bool IsEmpty(const LinkedList* list);

void Clear(LinkedList* list);

Node* CreateNode(float data, Node* next);

void DestroyNode(Node* node);

