#include <iostream>
using namespace std;

class LinkedList; //in order to make LinkedList a friend of ListNode

class ListNode{
	private:
			int data; //data stored in each node
			ListNode *next; //create the next ListNode
	public:
			ListNode():data(0), next(0){}; //initialize data to be 0 -> if no parameter is given
			ListNode(int a):data(a), next(0){}; //initialize data to be a -> if parameter is given
			
	friend class LinkedList;
};

class LinkedList{
	private:
			int size;
			ListNode *first; //the first node of list
	public:
			LinkedList():first(0){}; //make the first LinkedNode to be zero (We initialize the LinkedList)
			void PrintList();
			void Push_front(int x);
			void Push_back(int x);
			void Delete(int x);
			void Clear();
			void Reverse();
};

void LinkedList::PrintList(){
	if (first == 0) {
		cout << "List is empty.\n";
	}

	ListNode *current = first; //current is pointer with the same address as first
	while (current != 0) {
		cout << current->data << " "; //the -> help us attain the member value from any class instance declared as pointer
		current = current->next;
	}
	cout << endl;
}

void LinkedList::Push_back(int x){
	
	ListNode *newNode = new ListNode(x); //Create a pointer, pointing to an address storing ListNode. And allocate new memort 											 space for the node.
	
	//Situation that the LinkedList is with empty node.
	if (first == 0){
		first = newNode;
		return; //skip following process
	}

	ListNode *current = first; //initalize the traversal
	while (current->next != 0){ //find the last position to place the newNode;
		current = current->next;
	}
	
	current->next = newNode;
}

void LinkedList::Push_front(int x){
	ListNode *newNode = new ListNode(x);

	if(first == 0){
		first = newNode;
		return;
	}
	
	newNode->next = first;
	first = newNode;	
}

void LinkedList::Delete(int x){ //to delete the element x in the LinkedList (just delete one that element)
	
	ListNode *current = first;
	ListNode *previous = 0;

	//Three situations
	//1. No element
	//2. Yes element -> Will be an empty LinkedList after the deletion
	//3. Yes element -> Will not be an empty LinkedList after the deletion
	
	while(current != 0 && current->data != x){
		previous = current;
		current = current->next;
	}
	
	if(current == 0){
		cout << "There isn't such element in the LinkedList" << endl;
	}
	else if(current == first){
		first = current->next;
		delete current;
		current = 0; // in case there may be error happens
	}
	else{
		previous->next = current->next;
		delete current;
		current = 0;
	}
}

int main(){
	LinkedList list;
	list.Push_back(5);
	list.Push_back(4);
	list.Push_front(3);
	list.Push_front(2);
	list.Delete(3);
	list.PrintList();

	return 0;
}
