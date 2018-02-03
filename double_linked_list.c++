/*
 * 
 * double_linked_list.c++  Created on: 02/02/2018
 *
 * Source Code file for double_linked_list template which is similar to 
 * deque data structure in standard library. Double_linked_list is used 
 * to expand on the functionality of deque (future development).
 *
 */

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/** 
 * Node structure
 */
 
template <typename K>
struct Node{
	K data;
	Node<K>* right;
	Node<K>* left;
};

template <typename T, typename N = Node<T>>
class double_linked_list{
	private:
	
		Node<T> *head, *tail; // head is furthest to left, tail is furthest from right
		int size; //ammount of nodes in list
		
	public:
	
		/** 
		 * Constructor for double_linked_list class. 
		 */
		 
		double_linked_list(){
			head = nullptr;
			tail = nullptr;
			size = 0;
		}
		
		/** 
		 * Displays the head and tail of the linked list.
		 * Used for debug purposes
		 */
		 
		void displayHeadTail(){
			cout << "Head: " << head->data << endl;
			cout << "Tail: " << tail->data << endl;
		}
		
		/** 
		 * Creates a new Node at the right of the tail of the list.
		 * Increases size of list by 1.
		 * @param d data value added at the tail of the list. Must be type specified during constructor
		 */
		 
		void insertTail(T d){
			Node<T>* temp = new Node<T>;
			temp->data = d;
			temp->right = nullptr;
			if(head == nullptr && tail == nullptr){
				temp->left = nullptr;
				head = temp;
				tail = temp;
			} else if (head == tail){
				temp->left = tail;
				tail = temp;
				head->right = temp;
			} else {
				temp->left = tail;
				tail->right = temp;
				tail = temp;
			}
						
			size++;
		}

		/** 
		 * Creates a new Node at the left of the head of the list.
		 * Increases size of list by 1.
		 * @param d data value added at the head of the list. Must be type specified during constructor
		 */
		 
		void insertHead(T d){
			Node<T>* temp = new Node<T>;
			temp->data = d;
			temp->left = nullptr;
			if(head == nullptr && tail == nullptr){
				temp->right = nullptr;
				head = temp;
				tail = temp;
			} else if (head == tail){
				temp->right = head;
				head = temp;
				tail->left = temp;
			} else {
				temp->right = head;
				head->left = temp;
				head = temp;
			}
			size++;
		}
		
		/** 
		 * Displays list from head to tail (left to right).
		 */
		 
		void displayForwardList(){
			int listSize = size;
			Node<T>* temp = head;
			while(listSize > 0){
				cout << temp->data << " ";
				temp = temp->right;
				listSize--;
			}
			cout << endl;
		}

		/** 
		 * Displays list from tail to head (right to left).
		 */
		 
		void displayReverseList(){
			int listSize = size;
			Node<T>* temp = tail;
			while(listSize > 0){
				cout << temp->data << " ";
				temp = temp->left;
				listSize--;
			}
			cout << endl;
		}

		/** 
		 * @return size of double_linked_list
		 */
		
		int displaySize(){
			return this->size;
		}
		
};