/*
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
The task is to delete the node. 
Pointer/ reference to head node is not given. 
Note: No head reference is given to you. 
It is guaranteed that the node to be deleted is not a tail node in the linked list.
    Input:
    N = 4
    value[] = {10,20,4,30}
    node = 20
    Output: 10 4 30
    Explanation: After deleting 20 from
    the linked list, we have remaining
    nodes as 10, 4 and 30.
*/
/*
    struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
    }*head;
Expected Time Complexity : O(1)
Expected Auxilliary Space : O(1)
*/
void deleteNode(Node *node)
{
    node->data = node->next->data;
    Node* temp = node->next;
    node->next = temp->next;
    free(temp);
}
