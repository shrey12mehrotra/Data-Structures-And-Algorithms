/*
Given the heads of two singly linked-lists headA and headB, 
return the node at which the two lists intersect. 
If the two linked lists have no intersection at all, return null.

		4	->	1   \			
					  8	->	4	->	5
5	->	6	->	1	/
Output: Intersected at '8'
*/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
	if(headA == NULL || headB == NULL) return NULL;
        ListNode *first = headA;
        ListNode *second = headB;
        while(first != second)
	    {
            first = first == NULL ? headB : first->next;
            second = second == NULL ? headA : second->next;
	    }
	    return first;
}