//Count the number of repetitons of certain element.
int count_key(struct node *start , key )
{
	struct node *p;
	int count=0;
	while(p->next!==NULL)
	{
		if(p->data==key)
		{
			count++;
		}
		p=p->next;
	}
return count; 
}
cout<<"the given key is repeated by"<<count<<"times";

	
