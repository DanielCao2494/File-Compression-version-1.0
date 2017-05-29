#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

template<class T>
struct node {
	T data;
	node* next;
};

template<class T>
class PriorityQueue {
public:
	PriorityQueue();
	~PriorityQueue();
	bool push(T);
	node<T>* pop();
	bool isEmply();
	bool exist(T);
private:
	node<T>* queue;
	int size;
};




#endif