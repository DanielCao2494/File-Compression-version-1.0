#ifndef HUFFMAN_TREE_H
#define HUFFMAN_TREE_H

/*
=========================Struct: entry=======================
template struct
contain data and its frequency in the file 
*/
template <class T>
struct entry {
	T data;
	int frequency;
};

/*
=========================Struct: leaf======================
template struct
data structure of a leaf in Huffman Tree
contain data and 2 pointers for its left side and right side
*/
template <class T>
struct leaf {
	T data;
	leaf *left;
	leaf *right;
};

/*
=========================Class: HuffmanTree================
template class

*/
template <class T>
class HuffmanTree {
public:
	HuffmanTree();
	~HuffmanTree();
private:
	leaf<T> *head;

};


#endif