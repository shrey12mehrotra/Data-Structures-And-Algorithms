/*
Given a non-empty, singly linked list with head node head, return a middle node of linked list.
If there are two middle nodes, return the second middle node.

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  */
	
//  1		2		3 		4		5		6		NULL
// slow
// fast
// slow = slow->next
// fast = fast->next->next

ListNode *findMiddle(ListNode *head)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	ListNode *slow = head;
	ListNode *fast = head;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}