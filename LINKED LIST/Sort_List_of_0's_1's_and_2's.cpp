/*
Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/


/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

Node* sortArray(Node *head)
{
    int count_0 = 0, count_1 = 0; count_2 = 0;
    Node* curr = head;
    while(curr != NULL)
    {
        if(curr->data == 0)
        {
            count_0++;
        }
        else if(curr->data == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
        curr = curr->next;  
    }
    curr = head;
    while(curr != NULL)
    {
        if(count_0 != 0)
        {
            curr->data = 0;
            count_0--;
        }
        else if(count_1 != 0)
        {
            curr->data = 1;
            count_1--;
        }
        else
        {
            curr->data = 2;
            count_2--;
        }  
        curr = curr->next;
    }
    return head;
}