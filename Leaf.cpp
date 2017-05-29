#include "Leaf.h"

template <class T>
Entry<T>::Entry() {
	frequency = 0;
}

template <class T>
Entry<T>::Entry(T input){
	data = input;
	frequency = 1;
}

template <class T>
void Entry<T>::update() {
	frequency++;
}

template <class T>
T Entry<T>::getData() {
	return data;
}

template <class T>
int Entry<T>::getFreq() {
	return frequency;
}