In the Push_Swap project we have to sort out a list of numbers. The numbers are passed thourgh the terminal and we have to use 2 stacks, a limited number of operations and the least amount of actions possible.

The project is evaluated based on the speed of the sort of lists with different lenght.

We create a struct that will how the value of each list, the next item in the list and the index in the stack

In Case Three we compare top to middle, middle to bottom, and bottom to top 


// FUNCTION SWAPS THE TWO FIRST ELEMENTS OF A STACK
// sa & sb
// 1.sa (swap a): Swap the first 2 elements at the top of stack a.
//   sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
// ss : sa and sb at the same time.

	// WHY have to make tmp and why the syntax (*stack)->next

// FUNCTION TO SHIFT DOWN ALL THE ELEMENTS OF THE STACK 
// rra & rrb 
// 4.rra (reverse rotate a): Shift down all elements of stack a by 1.
//   rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
// rrr : rra and rrb at the same time.	


// FUNCTION TO SHIFT UP ALL THE ELEMENTS OF THE STACK 
// ra & rb
// 3.ra (rotate a): Shift up all elements of stack a by 1.
//   rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
// rr : ra and rb at the same time.

// FUNCTION THAT TAKES THE FIRST ELEMENT AT THE TOP OF STACK_ORIGIN AND PUTS IT AT THE TOP OF STACK_DEST
// pa & pb
// 2.pa (push a): Take the first element at the top of b and put it at the top of a.
//   pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.


	// ASK IF YOU NEED TO DO MALLOC FOR THE TMP STRUCT