#include<iostream>
using namespace std;

class stack{
	//properties
	public:
		int *arr;
		int top;
	    int size;
	 
	//behavior   
	    stack(int size) //constructor
	    {
	    	this->size = size;
	    	arr = new int[size];
	    	top = -1;
		}
		
	void push(int element)
    {
	if(size - top >1)
	{
		top++;
		arr[top]= element;
	}
	else{
		cout<<"Stack overflow !!!"<<endl;
	}
    }
    
    void pop()
    {
	if(top>=0)
	{
		top--;
	}
	else{
		cout<<"Stack underflow, no element present"<<endl;
	}
    }
    
    int peek()
    {
    	if(top>=0)
    	{
    		return arr[top];
		}
		
	    else{
		cout<<"Stack is Empty"<<endl;
		return -1;
	    }
    }
    
    bool isEmpty()
    {
    	if(top==1)
    	{
    		cout<<"Stack is empty"<<endl;
		}
		else{
			cout<<"Stack is not empty"<<endl;
		}
	}

};

int main()
{
	stack st(5);
	st.push(100);
	st.push(200);
	st.push(500);
	
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	
	if(st.isEmpty())
    cout<<"Stack is empty"<<endl;
		
	else
	cout<<"Stack is not empty"<<endl;
		
	return 0;
}
