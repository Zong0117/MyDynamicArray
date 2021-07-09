#include <iostream>
#include "DynamicArray.h"

int main()
{
	DynamicArray vec(4);
	vec.PushBack(1);
	vec.PushBack(2);
	vec.PushBack(3);
	vec.PushBack(4);
	vec.Print();
	vec.PushBack(5);
	vec.Print();
	vec.Pop();
	vec.Print();

}

