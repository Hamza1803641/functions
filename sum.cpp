//stack
#include<iostream>
using namespace std;
#define n 10

class stack
{
int *arr;
int Top;

public:
stack()
{
	arr=new int [n];  //alocate memeory to stack
	Top=-1;           //
}
 void push(int x)
 {
	 if(Top==n-1)   //cheak if top is full
	 {
		cout<<"stack overflow "<<endl;    
		return;
	 }

	 Top++;
	 arr[Top]=x;   //push value in stack;
 }
    int pop()
	{
		if(Top==-1)
       {
			cout<<"stack is empty "<<endl;  
			return -1;
	   } 
	   Top--;     //pop element from stack
	}
      
     int top()
	 {
		if(Top==-1)
       {
			cout<<"stack is empty "<<endl;  
			return -1 ;
	   } 
        return arr[Top];
	 }

	 bool empty()
	 {  
	    if(empty()) 
	  return -1;
		
	 }
};

int main()
{
stack st;
 st.push(2);
 st.push(5);
 st.push(9);
   
//display stack
  cout<<"top is"<<st.top()<<endl;      
    st.pop();
  cout<<"top is"<<st.top()<<endl;
      st.pop();
  cout<<"top is"<<st.top()<<endl;
      st.pop();

  cout<< st.empty();
return 0;
}
