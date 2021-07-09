#pragma once
class DynamicArray
{
public:
	DynamicArray() 
		: arr(new int[10]), size(0), capacity(10) {}
	DynamicArray(int capa) 
		: arr(new int[capa]), size(0), capacity(capa){}
	~DynamicArray()
	{ 
		if (arr) {delete[] arr;}
		arr = nullptr;
	}
public:
	void PushBack(int);
	void Pop();
	int GetSize() { return size; }
	void Print();
private:
	int* arr;
	int size;
	int capacity;
	void Resize();
};
void DynamicArray::Resize()
{
	int* temp = new int[capacity * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = temp;
	capacity*=2;
}
void DynamicArray::PushBack(int data)
{
	if (size == capacity)
	{
		Resize();
	}
	arr[size++] = data;
	
}
void DynamicArray::Pop()
{
	arr[size--];
}
void DynamicArray::Print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}