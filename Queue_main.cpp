#include"Queue.h"
const int SIZE=5;
int main()
{
	//lv	
	Queue q1(SIZE);
	int data;
	
	//code
	while(!q1.is_full())
	{
		cout<<"\n Enter an integer number to queue: ";
		cin>>data;
		q1.enqueue(data);
	}
	
	while(!q1.is_empty())
	{
		cout<<q1.dequeue()<<endl;
	}
		
	return 0;
}
