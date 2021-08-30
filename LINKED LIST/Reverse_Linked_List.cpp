/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/
// 			  next
// 	NULL		1	  2  	 3  	 4  	 5
// 	prev	  head
			  
// 											prev  next
// NULL	<-	1	<-  2  <-	 3 <- 	 4  <-	 5
//											      head
// next = head->next
// head->next = prev
// prev = head
// head = next

ListNode *reverseList(ListNode *head)
{
	if(head == NULL || heaad->next == NULL)
	{
		return head;
	}
	ListNode *prev = NULL;
	while(head != NULL)
	{
		ListNode *next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return prev;
}