#include<iostream>
using namespace std;
#define size 5
void push();
void pop();
void display();
int A[size];
int top=-1;
int n;

int main() 
{
	
	
	
	while(1){
cout<<"enter your choice: 1:push \n 2:pop \n 3:display 4:exit\n";
cin>>n;
		switch(n)
		{
			case 1: push(); break;
			cout<<"enter your choice: 1:push \n 2:pop \n 3:display 4:exit\n";
			cin>>n;
			case 2: pop();  break;
			case 3: display(); break;
			case 4: exit(0);
			deefault: cout<<"enter correct choice";

		}

	}

	return 0;
}	

void push(){
	cout<<"enter your choice 1: push \n 2: pop: \n 3: exit \n";
	cin>>n;

	int x,n;
	if(top == (size-1)){
		cout<<"overflow";

	}
	else{
		cout<<"enter number n";
		cin>>n;

		top=top+1;
		A[top]=x;

	}
}	


	void pop()
	{
		cout<<"enter your choice 1: push \n 2: pop: \n 3: exit \n";
	cin>>n;
		int y;
		if (top == -1)
		{

			cout<<"underflow";

		}
		else{
			y=A[top];
			cout<<"deleted element is"<<y;
			top=top-1;
}


	}
	void display(){
  	cout<<"enter your choice 1: push \n 2: pop: \n 3: exit \n";
  cin>>n;
  	int i;
  	if(top==-1)
  		cout<<"underflow";

  	else{
  		for(i=top;i>=0;i--)
  			cout<<"elements in stack"<<A[i];
  	}

  }