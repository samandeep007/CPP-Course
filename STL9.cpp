#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	//Queue --> FIFO --> First In, First Out --> not all the methods are availa

	queue<int> myQueue;
	myQueue.push(10); //Only one side push is allowed
	myQueue.push(12);
	myQueue.push(14);
	myQueue.push(16);
	
	cout << myQueue.front() << endl; //Prints 10
	cout << myQueue.back() << endl; //Prints 16

	myQueue.pop();
	cout << myQueue.front() << endl;

	while (!myQueue.empty()) {
		cout << myQueue.front() << " ";
		myQueue.pop();
	}

	cout << endl;

	if (myQueue.empty()) {
		cout << "The queue is empty" << endl;
	}
	else {
		cout << "The queue has elements inside it" << endl;
	}

	//priority queue

	priority_queue<int> myPriorityQueue; //Value that has the highest order will be at the top --> Will give priority to it
	myPriorityQueue.push(10);
	myPriorityQueue.push(40);
	myPriorityQueue.push(50);
	myPriorityQueue.push(5);
	
	while (!myPriorityQueue.empty()) {
		cout << myPriorityQueue.top() << " "; //We call it top instead of front in case of pq
		myPriorityQueue.pop();
	}

	cout << endl;

	return 0;
}