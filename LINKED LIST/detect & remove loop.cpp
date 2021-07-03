//Function to remove a loop in the linked list.
    bool removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes

        Node *slow=head, *fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
               break;
        }

        if(slow!=fast)
          return false;


        slow=head;

        while(slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
        return true;
    }
};
