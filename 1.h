#include"linklist.h"
class short_linklist{
public:
	short_start_node *start_node=new short_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned short len(){
		if(start_node->end)
			return 0;
		short  i=1;
		for(short_node *node=new short_node;node->end;i++)
			node=node->next;
		return i;
	}
	short  get_value(unsigned short index){
		if(index>len())
			return -1;
		short_node *node=start_node->next;
		for(short  i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned short get_index(short  value,unsigned short times){
		if(len()==0)
			return -1;
		short_node *node=start_node->next;
		short  sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned short index,short  value){
		if(index>len())
			return false;
		short_node *node=start_node->next;
		for(short  i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	} 
	bool add(unsigned short prev_index,short  value){
		if(prev_index>len())
			return false;
		short_node *node=start_node->next;
		if(prev_index==len())
			for(short  i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(short  i=1;i<=prev_index;i++)
			node=node->next;
		short_node *new_node=new short_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned short index){
		if(index>len())
			return false;
		short_node *node=start_node->next;
		for(short  i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	short_node* get_node(unsigned short index){
		if(index>len())
			return NULL;
			short_node *node=start_node->next;
		for(short  i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(short_node* node,unsigned short index){
		if(index>len())
			return false;
		short_node *node1=start_node->next;
		for(short  i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(short_node* node,unsigned short prev_index){
		if(prev_index>len())
			return false;
		short_node *node1=start_node->next;
		if(prev_index==len())
			for(short  i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(short  i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
