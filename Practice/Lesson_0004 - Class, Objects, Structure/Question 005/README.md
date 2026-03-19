# A new fruit juice machine has been purchased for the cafeteria, and a program is needed to make the machine function properly. The machine dispenses apple juice, orange juice, mango lassi, and fruit punch in recyclable containers. Write a program for the fruit juice machine so that it can be put into operation.   

- The program should do the following:  
  1. Show the customer the different products sold by the juice machine.  
  2. Let the customer make the selection.  
  3. Show the customer the cost of the item selected.  
  4. Accept money from the customer.  
  5. Release the item.  

- A juice machine has two main components: a built-in cash register and several dispensers to hold and release the products.  

- cashRegister class has the following member variable and functions:  
  • cashOnHand – an int variable that holds the cash in the register.  
  • getCurrentBalance – Function to show the current amount in the cash register.  
  • acceptAmount - Function to receive the amount deposited by the customer and update the   amount in the register.  
  • cashRegister() - Default constructor to set the cash in the register to 500 cents.  
  • cashRegister(int) - Constructor with parameters to set the cash in the register to a specific amount.  

- dispenserType class has the following member variable and functions:  
  • numberOfItems – variable to store the number of items in the dispenser.  
  • cost - variable to store the cost of an item.  
  • getNoOfItems- Function to show the number of items in the machine.  
  • getCost - Function to show the cost of the item.  
  • makeSale - Function to reduce the number of items by 1.  
  • dispenserType() - Default constructor to set the cost and number of items in the dispenser to 50.  
  • dispenserType(int, int) - Constructor with parameters to set the cost and number of items in the dispenser.  

- The dispenser should show the number of items in the dispenser and the cost of the item. If the dispenser is empty, the program should inform the customer that this product is sold out. The dispenser releases the selected item if it is not empty.

```
==============================================
            FRUIT JUICE MACHINE               
==============================================
1. Apple Juice
2. Orange Juice
3. Mango Lassi
4. Fruit Punch
5. Exit
==============================================
Enter your choice: 1

You selected Apple Juice.
Number of items available: 10
Cost of this item: 150 cents
Please enter your payment in cents: 200
Item released. Please collect your drink.
Please collect your change: 50 cents
```
