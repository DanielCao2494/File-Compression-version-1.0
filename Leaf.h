#ifndef LEAF_H
#define LEAF_H

template <class T>
class Entry {
public:
	Entry();
	~Entry();
	Entry(T input);
	void update();
	T getData();
	int getFreq();
private:
	T data;
	int frequency;
};

#endif