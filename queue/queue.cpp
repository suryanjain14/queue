// queue.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include<stdlib.h>

#define n 5

using namespace std;

//simple queue
class queue
{
	int que[n], front, rear;
public:
	queue();
	void qadd(int);
	void qdel();
	void qdisp();
};

queue::queue()
{
	front = -1;
	rear = -1;
}
void queue::qadd( int num)
{
	if (rear == n - 1)
		cout << "Queue is full" << endl;
	else
	{		
		rear++;
		que[rear] = num;
	}
}

void queue::qdel()
{
	if (front == rear)
		cout << "The queue empty"<<endl;
	else
	{
		front++;
		que[front] = 0;
	}
}

void queue::qdisp()
{
	if (front == rear)
		cout << "queue is empty" << endl;
	else
	{
		int i;
		
		for (i = front+1; i <= rear; i++)
			cout << que[i];
	}
}
//circular queue
class cqueue
{


};

//Priority queue
class pqueue
{



};
int main()
{
	queue q;
	int a = 0;
	while (a != 4)
	{
		
		system("cls");
		cout << " Press 1 for adding data \n Press 2 for deleting data \n Press 3 to display data \n Press 4 to Exit " << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			int num;
			cout << "Enter the value you want to add\n";
			cin >> num;
			q.qadd(num);
			break;
		case 2:
			q.qdel();
			break;
		case 3:
			q.qdisp();
		case 4:
			break;
		default:
			cout << "invalid entry";
		}
	}
	
    return 0;
}

