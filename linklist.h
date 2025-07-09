#include<iostream>
using namespace std;
struct int_node {
	bool end=false;
	int value;
	int_node *next,*prev;
};
struct float_node{
	bool end=false;
	float value;
	float_node *next,*prev;
};
struct double_node{
	bool end=false;
	double value;
	double_node *next,*prev;
};
struct longdouble_node{
	bool end=false;
	long double value;
	longdouble_node *next,*prev;
};
struct long_node{
	bool end=false;
	long value;
	long_node *next,*prev;
};
struct longlong_node{
	bool end=false;
	long long value;
	longlong_node *next,*prev;
};
struct short_node{
	bool end=false;
	short value;
	short_node *next,*prev;
};
struct uint_node{
	bool end=false;
	unsigned value;
	uint_node *next,*prev;
};
struct ulong_node{
	bool end=false;
	unsigned long value;
	ulong_node *next,*prev;
};
struct ulonglong_node{
	bool end=false;
	unsigned long long value;
	ulonglong_node *next,*prev;
};
struct ushort_node{
	bool end=false;
	unsigned short value;
	ushort_node *next,*prev;
};
struct char_node{
	bool end=false;
	char value;
	char_node *prev,*next;
};
struct bool_node{
	bool end=false;
	bool value;
	bool_node *prev,*next;
};
struct int_start_node{
	bool end=false;
	bool loop=false;
	int_node *next=NULL;
};
struct float_start_node{
	bool end=false;
	bool loop=false;
	float_node *next=NULL;
};
struct double_start_node{
	bool end=false;
	bool loop=false;
	double_node *next=NULL;
};
struct longdouble_start_node{
	bool end=false;
	bool loop=false;
	longdouble_node *next=NULL;
};
struct long_start_node{
	bool end=false;
	bool loop=false;
	long_node *next=NULL;
};
struct longlong_start_node{
	bool end=false;
	bool loop=false;
	longlong_node *next=NULL;
};
struct short_start_node{
	bool end=false;
	bool loop=false;
	short_node *next=NULL;
};
struct bool_start_node{
	bool end=false;
	bool loop=false;
	bool_node *next=NULL;
};
class int_linklist{
public:
	int_start_node *start_node=new int_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		int i=1;
		for(int_node *node=new int_node;node->end;i++)
			node=node->next;
		return i;
	}
	int get_value(unsigned long long index){
		if(index>len())
			return -1;
		int_node *node=start_node->next;
		for(int i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(int value,unsigned long long times){
		if(len()==0)
			return -1;
		int_node *node=start_node->next;
		int sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,int value){
		if(index>len())
			return false;
		int_node *node=start_node->next;
		for(int i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	}
	bool add(unsigned long long prev_index,int value){
		if(prev_index>len())
			return false;
		int_node *node=start_node->next;
		if(prev_index==len())
			for(int i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(int i=1;i<=prev_index;i++)
			node=node->next;
		int_node *new_node=new int_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		int_node *node=start_node->next;
		for(int i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	int_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			int_node *node=start_node->next;
		for(int i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(int_node* node,unsigned long long index){
		if(index>len())
			return false;
		int_node *node1=start_node->next;
		for(int i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(int_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		int_node *node1=start_node->next;
		if(prev_index==len())
			for(int i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(int i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
