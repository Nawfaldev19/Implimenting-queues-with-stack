#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;


class MyQueue {
	stack<int> stackQueue;
	stack<int> popQueue;
public:
	MyQueue() {
	}

	void push(int x) {
		stackQueue.push(x);
	}

	int pop() {
		int res = 0;
		if (popQueue.empty())
		{
			if (stackQueue.empty())
			{
				return -1;
			}
			while (!stackQueue.empty())
			{
				popQueue.push(stackQueue.top());
				stackQueue.pop();
			}
		}
		res = popQueue.top();
		popQueue.pop();
		return res;
	}

	int peek() {
		if (popQueue.empty())
		{
			while (!stackQueue.empty())
			{
				popQueue.push(stackQueue.top());
				stackQueue.pop();
			}
		}
		return popQueue.top();
	}

	bool empty() {
		if (popQueue.empty())
		{
			if (stackQueue.empty())
			{
				return true;
			}
		}
		return false;
	}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


int main()
{
 //* Your MyQueue object will be instantiated and called as such:
//   MyQueue* obj = new MyQueue();
//   obj->push(x);
//   int param_2 = obj->pop();
//   int param_3 = obj->peek();
//   bool param_4 = obj->empty();

}