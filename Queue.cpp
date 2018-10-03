#include"Queue.h"

Queue::Queue()
{
	size=10;
	front=-1;
	back=-1;
	queue=new int[size];
}

Queue::Queue(int max)
{
	size=max;
	front=-1;
	back=-1;
	queue=new int[size];
}

bool Queue::is_empty()
{
	return (back==-1 && front==-1);
}

bool Queue::is_full()
{
	return (back==size-1);
}

void Queue::enqueue(int data)
{
	if (is_empty())
	{
		front++;
		back++;
		queue[back]=data;
	}
	if (is_full())
	{
		cout<<"Queue is full."<<endl;
		system("exit");
	}
	else
	{
		back++;
		queue[back]=data;
	}
	return;
}
Queue::dequeue()
{
	int i;
	
	if (is_empty())
	{
		cout<<"Queue is empty;\n";
	}
	else if (front == back)
	{
		i=queue[front];
		front=-1;
		back=-1;
	}
	else
	{
		i=queue[front];
		front++;
	}
	return i;
}
