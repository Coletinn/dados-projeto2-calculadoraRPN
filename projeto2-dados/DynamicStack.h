/* 
Gustavo Coleto de Freitas 32076541
João Vitor Teles Centrone 32033125
*/


#include "LinkedList.h"
#include <string>

struct DynamicStack
{
	int current;
	LinkedList* list;
};

DynamicStack Create();
bool Push(DynamicStack& stack, float value);
float Pop(DynamicStack& stack);
float Top(const DynamicStack& stack);
int Count(const DynamicStack& stack);
bool IsEmpty(const DynamicStack& stack);
bool Clear(DynamicStack& stack);



