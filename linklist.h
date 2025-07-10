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
class float_linklist{
public:
	float_start_node *start_node=new float_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		float i=1;
		for(float_node *node=new float_node;node->end;i++)
			node=node->next;
		return i;
	}
	float get_value(unsigned long long index){
		if(index>len())
			return -1;
		float_node *node=start_node->next;
		for(float i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(float value,unsigned long long times){
		if(len()==0)
			return -1;
		float_node *node=start_node->next;
		float sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,float value){
		if(index>len())
			return false;
		float_node *node=start_node->next;
		for(float i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	}
	bool add(unsigned long long prev_index,float value){
		if(prev_index>len())
			return false;
		float_node *node=start_node->next;
		if(prev_index==len())
			for(float i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(float i=1;i<=prev_index;i++)
			node=node->next;
		float_node *new_node=new float_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		float_node *node=start_node->next;
		for(float i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	float_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			float_node *node=start_node->next;
		for(float i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(float_node* node,unsigned long long index){
		if(index>len())
			return false;
		float_node *node1=start_node->next;
		for(float i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(float_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		float_node *node1=start_node->next;
		if(prev_index==len())
			for(float i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(float i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
class double_linklist{
public:
	double_start_node *start_node=new double_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		double i=1;
		for(double_node *node=new double_node;node->end;i++)
			node=node->next;
		return i;
	}
	double get_value(unsigned long long index){
		if(index>len())
			return -1;
		double_node *node=start_node->next;
		for(double i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(double value,unsigned long long times){
		if(len()==0)
			return -1;
		double_node *node=start_node->next;
		double sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,double value){
		if(index>len())
			return false;
		double_node *node=start_node->next;
		for(double i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	}
	bool add(unsigned long long prev_index,double value){
		if(prev_index>len())
			return false;
		double_node *node=start_node->next;
		if(prev_index==len())
			for(double i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(double i=1;i<=prev_index;i++)
			node=node->next;
		double_node *new_node=new double_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		double_node *node=start_node->next;
		for(double i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	double_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			double_node *node=start_node->next;
		for(double i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(double_node* node,unsigned long long index){
		if(index>len())
			return false;
		double_node *node1=start_node->next;
		for(double i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(double_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		double_node *node1=start_node->next;
		if(prev_index==len())
			for(double i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(double i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
class longdouble_linklist{
public:
	longdouble_start_node *start_node=new longdouble_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		long double i=1;
		for(longdouble_node *node=new longdouble_node;node->end;i++)
			node=node->next;
		return i;
	}
	long double get_value(unsigned long long index){
		if(index>len())
			return -1;
		longdouble_node *node=start_node->next;
		for(long double i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(long double value,unsigned long long times){
		if(len()==0)
			return -1;
		longdouble_node *node=start_node->next;
		long double sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,long double value){
		if(index>len())
			return false;
		longdouble_node *node=start_node->next;
		for(long double i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	}
	bool add(unsigned long long prev_index,long double value){
		if(prev_index>len())
			return false;
		longdouble_node *node=start_node->next;
		if(prev_index==len())
			for(long double i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(long double i=1;i<=prev_index;i++)
			node=node->next;
		longdouble_node *new_node=new longdouble_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		longdouble_node *node=start_node->next;
		for(long double i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	longdouble_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			longdouble_node *node=start_node->next;
		for(long double i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(longdouble_node* node,unsigned long long index){
		if(index>len())
			return false;
		longdouble_node *node1=start_node->next;
		for(long double i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(longdouble_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		longdouble_node *node1=start_node->next;
		if(prev_index==len())
			for(long double i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(long double i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
class long_linklist{
public:
	long_start_node *start_node=new long_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		long  i=1;
		for(long_node *node=new long_node;node->end;i++)
			node=node->next;
		return i;
	}
	long  get_value(unsigned long long index){
		if(index>len())
			return -1;
		long_node *node=start_node->next;
		for(long  i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(long  value,unsigned long long times){
		if(len()==0)
			return -1;
		long_node *node=start_node->next;
		long  sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,long  value){
		if(index>len())
			return false;
		long_node *node=start_node->next;
		for(long  i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	}
	bool add(unsigned long long prev_index,long  value){
		if(prev_index>len())
			return false;
		long_node *node=start_node->next;
		if(prev_index==len())
			for(long  i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(long  i=1;i<=prev_index;i++)
			node=node->next;
		long_node *new_node=new long_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		long_node *node=start_node->next;
		for(long  i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	long_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			long_node *node=start_node->next;
		for(long  i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(long_node* node,unsigned long long index){
		if(index>len())
			return false;
		long_node *node1=start_node->next;
		for(long  i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(long_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		long_node *node1=start_node->next;
		if(prev_index==len())
			for(long  i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(long  i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
class longlong_linklist{
public:
	longlong_start_node *start_node=new longlong_start_node;
	void init(bool loop=false){
		start_node->end=true;
		start_node->loop=loop;
	}
	unsigned long long len(){
		if(start_node->end)
			return 0;
		long long  i=1;
		for(longlong_node *node=new longlong_node;node->end;i++)
			node=node->next;
		return i;
	}
	long long  get_value(unsigned long long index){
		if(index>len())
			return -1;
		longlong_node *node=start_node->next;
		for(long long  i=1;i<=index;i++){
			node=node->next;
		}
		return node->value;
	}
	unsigned long long get_index(long long  value,unsigned long long times){
		if(len()==0)
			return -1;
		longlong_node *node=start_node->next;
		long long  sum=0,i=1;
		for(;sum<=times;i++){
			if(node->value==value)
				times++;
			if(node->end && sum<=times)
				return -1;
			node=node->next;
		}
		return i;
	}
	bool set_value(unsigned long long index,long long  value){
		if(index>len())
			return false;
		longlong_node *node=start_node->next;
		for(long long  i=1;i<=index;i++)
			node=node->next;
		node->value=value;
		return true;
	} 
	bool add(unsigned long long prev_index,long long  value){
		if(prev_index>len())
			return false;
		longlong_node *node=start_node->next;
		if(prev_index==len())
			for(long long  i=1;i<=len();i++)
				node=node->next;
		if(prev_index==0)
			
		node=start_node->next;
		for(long long  i=1;i<=prev_index;i++)
			node=node->next;
		longlong_node *new_node=new longlong_node;
		node->next->prev=new_node;
		new_node->next=node->next;
		node->next=new_node;
		new_node->prev=node;
		return true;
	}
	bool delete_node(unsigned long long index){
		if(index>len())
			return false;
		longlong_node *node=start_node->next;
		for(long long  i=1;i<=index;i++)
			node=node->next;
		node->prev->next=node->next;
		node->next->prev=node->prev;
		delete node;
		return true;
	}
	//Advanced functions
	longlong_node* get_node(unsigned long long index){
		if(index>len())
			return NULL;
			longlong_node *node=start_node->next;
		for(long long  i=1;i<=index;i++)
			node=node->next;
		return node;
	}
	bool set_node(longlong_node* node,unsigned long long index){
		if(index>len())
			return false;
		longlong_node *node1=start_node->next;
		for(long long  i=1;i<=index;i++)
			node1=node1->next;
		*node1=*node;
		return true;
	}
	bool add_node(longlong_node* node,unsigned long long prev_index){
		if(prev_index>len())
			return false;
		longlong_node *node1=start_node->next;
		if(prev_index==len())
			for(long long  i=1;i<=len();i++)
				node1=node1->next;
		if(prev_index==0)
			
			node1=start_node->next;
		for(long long  i=1;i<=prev_index;i++)
			node1=node1->next;
		
		return true;
	}
};
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
