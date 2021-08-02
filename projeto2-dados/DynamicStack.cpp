/*
Gustavo Coleto de Freitas 32076541
João Vitor Teles Centrone 32033125
*/

#include "DynamicStack.h"
#include <iostream>
#include <string>

DynamicStack Create() 
{
	LinkedList* list = Create_List();
	DynamicStack stack = { 0, list };
	return stack;
}


bool Push(DynamicStack& stack, float value) 
{
	Insert(stack.list, value);
	return true;
}


float Pop(DynamicStack& stack) 
{
	Node* toRemove = RemoveHead(stack.list);
	if (toRemove == NULL)
	{
		return NULL;
	}

	return toRemove->data;
}


float Top(const DynamicStack& stack) 
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	return stack.list->tail->data;
}

int Count(const DynamicStack& stack) 
{ 
	return stack.current; 
}


bool IsEmpty(const DynamicStack& stack) 
{ 
	return stack.current == 0; 
}


bool Clear(DynamicStack& stack) 
{
	while (!IsEmpty(stack)) 
	{
		Pop(stack);
	}

	return IsEmpty(stack);
}
