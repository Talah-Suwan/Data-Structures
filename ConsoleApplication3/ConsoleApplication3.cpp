#include<iostream>
using namespace std;

const int MAX_SIZE = 5;

class Stack
{
private:
	int arr[MAX_SIZE];
	int top;

public:
	Stack() { top = -1; }
	bool isEmpty() { return (top == -1); }
	bool isFull() { return (top == MAX_SIZE - 1); }
	void push(int element)
	{
		if (!isFull()) {
			top++;
			arr[top] = element;
			cout << "Pushed element " << element << " onto the stack\n";
		}
		else cout << "Stack is full, you cannot push element " << element << endl;
	}
	void pop()
	{
		if (!isEmpty())
		{
			int popElement = arr[top];
			top--;
			cout << "Popped element " << popElement << " from the stack\n";
		}
		else cout << "Your stack is empty, you cannot pop from the stack\n";
	}
	int topElement()
	{
		if (!isEmpty())	return (arr[top]);
		else {
			cout << "The stack is empty\n";
			return -1;
		}
	}
	void print() { 
		if (isEmpty()) {
			cout << "Stack is empty\n";
			return;
		}
		for (int i = top; i >= 0; i--)
			cout << arr[i] << endl;
	}
};

int main()
{
	Stack mystack;
	for (int i = 1; i <= 5; i++)
		mystack.push(i);
	cout << "Top element = " << mystack.topElement() << endl;
	mystack.push(10);
	while (!mystack.isEmpty())
	mystack.pop();
	mystack.print();
	return 0;
}