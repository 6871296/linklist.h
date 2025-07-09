# [Debug needed]linklist.h
linklist.h is an C++ Header File for linklists, but hadn't debugged. I send it to GitHub for Alpha downloading and debugging.
## How to use
### Initilizing your linklist
To initilize a linklist by linklist.h, use these classes:

- int: int_linklist
- float: float_linklist
- ...
This is fit for any default classes in C++.
### control your linklist

#### Default functions
- `void init(bool loop=false)`: **initilize the linklist.**
**⚠️SERIOUS WARNING: MUST AND ONLY USE THIS FUNCTION BEFORE USING.**
- `unsigned long long len()`: **get the length** of the linklist.
- `int get_value(unsigned long long index)`: **get the value** of the index in the linklist.
- `unsigned long long get_index(int value,unsigned long long times=1)`: **get the index** where the value exists the times.
- `bool set_value(usigned long long index,int value)`: **set the value** of the index. Returns true when it runs sucsessfully.
- `bool add(unsigned long long prev_index,int value)`: **add a node** on the next one of the prev_index's node.
- `bool delete_node(unsigned long long )`: **delete the node** from the index.

#### Advanced functions
- `int_node* get_node(unsigned long long index)`: **return the node** of the index.
- `bool set_node(int_node *node,unsigned long long index)`: **set the value of the index to the node**.
- `bool add_node(int_node *node,unsigned long long prev_index)`: **add the node** to the next of the prev_ndex's node.

### Other
I don't want and think I don't need to say what's a linklist.

Last but not least, **when you find out there're bugs or errors in this file, please tell me at the first time.**
### Git Clone command
``git clone git@github.com:6871296/linklist.h``
