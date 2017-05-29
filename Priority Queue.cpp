#include "PriorityQueue.h"
#include <iostream>

using namespace std;

template<class T>
PriorityQueue<T>::PriorityQueue() {
	queue = NULL;
	size = 0;
}

template<class T>
bool PriorityQueue<T>::push(T entry) {

	//Create a new element for the entry
	node<T>* temp = new node<T>();
	temp->data = entry;
	temp->next = NULL;
	
	//Simply add entry to the queue if the queue is empty
	if(size == 0) {
		size++;
		queue = temp;
		return true;
	}

	if (size == 1) {
		if(temp->data < queue->data) {
			temp->next = queue;
			queue = temp;
		}
		else {
			queue->next = temp;
		}

		size++;
		return true;
	}
	//Find the place where entry is smaller than an element of the queue;
	
	node<T> *temp2 = queue;
	while(temp2 != NULL){
		if (temp->data > temp2->next->data)
			temp2 = temp2->next;
	}

	temp->next = temp2->next;
	temp2->next = temp;
	size++;
	
	return true;

}

template <class T>
bool PriorityQueue<T>::isEmpty(){
	return size == 0;
}

template <class T>
node<T>* PriorityQueue<T>::pop() {

	if (this->isEmpty())
		return NULL;

	node<T> *temp = queue;
	queue = queue->next;
	temp->next = NULL;

	return temp;
}

template<class T>
bool PriorityQueue<T>::exist(T data) {
	node<T>* temp = queue;
	while(temp != NULL) {
		if(temp->data == data)
			return true;
		temp = temp->next;
	}

	return false;
}

template <class T>
PriorityQueue<T>::~PriorityQueue() {

	node<T> *temp = queue;

	while(queue != NULL) {
		queue = queue->next;
		delete temp;
		temp = queue;
	}

	temp = NULL;
}