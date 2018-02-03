#include "double_linked_list.c++"
#include <iostream>
#include <string>

int main(){
	double_linked_list <string> a;
	//Create string double_linked_list: ddd ccc aaa bbb
	a.insertTail("aaa");
	a.insertTail("bbb");
	a.insertHead("ccc");
	a.insertHead("ddd");
	
	// print: ddd ccc aaa bbb
	a.displayForwardList();
	
	// print: Head: ddd Tail: bbb
	a.displayHeadTail();
	
	// print: bbb aaa ccc ddd
	a.displayReverseList();	
	
	// print: 4
	int dllist = a.displaySize();
	cout << dllist << endl;
}