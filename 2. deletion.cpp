//Deletion of the only node
struct node *tmp; 
tmp=start;
start=NULL;
free(tmp);

//Deletion of the first node
struct node *tmp;
tmp=start;
start=start->link;
free(tmp);

//Deletion of the end node
struct node *tmp , *p;
while(p->link!==NULL)
{
	if(p->link->info==data)
	{
		tmp=p->link;
		p->link=tmp->link;
		free(tmp);
	}
}


	

