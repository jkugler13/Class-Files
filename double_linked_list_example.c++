#include "double_linked_list2.c++"
#include <iostream>
#include <string>

int main(){
	double_linked_list <string> a;
	a.insertTail("He");
	a.insertTail("ll");
	a.insertTail("o ");
	a.insertTail("Jim");
	
	a.displayForwardList();
	
	a.displayHeadTail();
	
	a.displayReverseList();	
}