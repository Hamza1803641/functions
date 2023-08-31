#include <iostream>
using namespace std;
#define max 5

class stack
 {



public:
	 
	int array[max];
	int top;





	stack() {

		top = -1;


	}


	bool isempty() {


		if (top == -1) {

			return true;
		}


		else
		{
			return false;
		}
	}


	bool isfull() {


		if (top ==max-1) {

			return true;
		}


		else
		{
			return false;
		}
	}



	int size() {



		return max;
	}



	void push(int num) {



		if (!isfull()) {


			array[++top] = num;

			cout << "the number" << num << "is pushed at index" << top;
			cout << endl;


		}

		else  {

			cout << "the stack is full" << endl;



		}

	}




	void pop() {



		if (!isempty()) {


			

			cout << array[top] << "is poped from index";
			cout << endl;


		}

		else {

			cout << "the stack is empty" << endl;



		}

	}

	int top() {




		if (!isempty()) {


			cout << array[top] << "is the last element of stack" << endl;

		}
	}



};



int main() {






	stack s;

	s.isempty();
	s.isfull();

	int sizee;
	sizee = s.size();

	cout << "the size of the array is" << sizee;

	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);


	s.pop();


	
	s.top();
    
}