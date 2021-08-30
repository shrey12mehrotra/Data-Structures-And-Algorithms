// Given the head of a linked list, remove the nth node from the end of the list and return its head.

// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

//dummy  ->  1 -> 2 -> 3 -> 4 -> 5 
//slow
//fast

ListNode *removeNthFromEnd(ListNode *head, n)
{
	if(head == NULL) return NULL;
	if(head->next == NULL && n == 1) return NULL;

	ListNode *dummy = new ListNode();
	dummy->next = head;
	ListNode *slow = dummy;
	ListNode *fast = dummy;
	for(int i=1; i<=n; i++)
	{
		fast = fast->next;
	}
	while(fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = slow->next->next;
	return dummy->next;
}