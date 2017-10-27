#include <iostream>
using namespace std;

struct RandomListNode{
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x):label(x), next(NULL), random(NULL) {}
};

class Solution{
public:
  RandomListNode *copyRandomList(RandomListNode *head){
    if(!head) return NULL;
    RandomListNode *copy, *p;

    //the first scan, get new link which follow old link.
    p = head;
    while(p){
      copy = new RandomListNode(p->label);
      copy->next = p->next;
      p->next = copy;
      p = copy->next;
    }

    //the second scan, get the random pointer of new link
    p = head;
    while(p){
      if(p->random){
	p->next->random = p->random->next;
      }
      p = p->next->next;
    }

    //the third scan, split the new link and the old link
    RandomListNode *newHead = head->next;
    p = head;
    while(p){
      RandomListNode *newNode = p->next;
      p->next = newNode->next;
      if(newNode->next)
	newNode->next = newNode->next->next;
      p = p->next;
    }

    return newHead;
  }
};
