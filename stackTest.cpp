#include <iostream>
#include <cstdlib>
using namespace std;
class stack{
	private:
	struct StackNode
	{
		int value;
		StackNode *next;
	};
	StackNode *top;
	
	public:
	stack()
	{
		top = NULL;
	}
	bool isEmpty()
	{
		return top == NULL;
	}
	void push(int value)
	{
		StackNode *newNode = new StackNode;
		newNode->value = value;
		if(!top)
		{
			top = newNode;
			newNode->next = NULL;
		}
		newNode->next = top;
		top = newNode;
	}
	int pop(void)
	{
		if(!top) return 0;
		int tmp = top->value;
		StackNode *ptr = top;
		top = top->next;
		delete ptr;
		return tmp;	
	}
	int SizeofStack(void)
	{
		cout << "Size of stack is: " << sizeof(stack);
	}
	int topvalue()
	{
		return top->value;
	}
	
};

int main(void)
{
	stack myStack;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);
	myStack.push(4);
	myStack.push(5);
	myStack.push(7);
	myStack.topvalue();
	cout << myStack.topvalue() << endl;
	cout<<myStack.pop()<<endl;
	cout<<myStack.pop()<<endl;
	cout<<myStack.pop()<<endl;
	cout<<myStack.pop()<<endl;
	cout<<myStack.pop()<<endl;
	myStack.SizeofStack();
	
	
	return 0;
}
