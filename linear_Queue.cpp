#include<iostream>
using namespace std;
//GLOBAL
int front=-1,rear=-1;
int queue[10];
int qlimit=5;

void enqueue(int item);
int dequeue();
void display();

int main()
{
	int go=1;
	int ch,ele;
	while(go)
	{
		cout<<"\n ===MENU QUEUE===\n";
		cout<<"\n 1-Insert in Queue \n";
		cout<<"\n 2-Delete from Queue\n";
		cout<<"\n 3-DISPLAY \n";
		cout<<"\n 4-Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n Enter the elemnt which you want to Insert";
				cin>>ele;
				enqueue(ele);
				display();
				break;				
			case 2:
				ele=dequeue();
				if(ele!=-1)
					cout<<"\n Deleted element was "<<ele;
				display();
				break;
			case 3:
				display();
				break;
			
			case 4:
				exit(0);
		}
	cout<<"\n Enter 1 to continue else 0";
	cin>>go;
	}
	return 0;
}

void enqueue(int item)
{
	if(rear==qlimit-1)
	{
		cout<<"Condition of Overflow";
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
		rear=rear+1;
	
	queue[rear]=item;
}

int dequeue()
{
	int item;
	if(front==-1)
	{
		cout<<"Condition of Underflow";
		return -1;
	}
	item=queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;	
	}
	else
		front=front+1;
	return item;	
}

void display()
{

	cout<<"\n=====QUEUE=======\n";
	if(front==-1)
	{
		cout<<"\n QUEUE Is Empty";
	}
	else
	for(int i=front;i<=rear;i++)
	{
			cout<<" "<<queue[i];

	}
	cout<<"\n\tfront = "<<front <<"\t Rear = "<<rear; 
	cout<<"\n=================\n";
}


