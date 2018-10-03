#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;

class Queue
{
	public:
		Queue();
		Queue(int);
		bool is_empty();
		bool is_full();
		void enqueue(int);
		int dequeue();	
	private:
		int size;
		int front;
		int back;
		int *queue;
};

#endif
