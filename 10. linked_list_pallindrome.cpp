//Function to check if a singly linked list is pallindrome.
void push_traverse( struct node *start)
{
	stack <int> s;
	struct node *p;
	p=start;
	while(p->next!=NULL)
	{
		s.push(p->data);
		p=p->next;
	}

	while(start!=NULL)
	{
		int i = s.top();
		s.pop();
		if(start->data !=i)
			return false;
	 start=start->next;
	}
}


