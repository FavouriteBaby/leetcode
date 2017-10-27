#include <iostream>
#include "link.h"
using namespace std;

int main(){
  RandomListNode *first = new RandomListNode(10);
  RandomListNode *second = new RandomListNode(11);
  RandomListNode *third = new RandomListNode(12);

  RandomListNode *head = new RandomListNode(0);
  head->next = first;
  first->next = second;
  second->next = third;
  third->next = NULL;
  
  first->random = third;
  second->random = first;
  third->random = NULL;

  Solution *solu = new Solution();
  RandomListNode *copy = solu->copyRandomList(head);
  cout << copy->label << endl;
  cout << copy->next->label << endl;
  cout << copy->next->next->label << endl;
  
  delete second;

  cout << copy->label << endl;
  cout << copy->next->label << endl;
  cout << copy->next->next->label << endl;
  cout << copy->random->label << endl;
  cout << copy->next->random->label << endl;
  cout << copy->next->next->random->label << endl;

  return 0;
}
