### Arya Dhole  ENTC-A2  22070123027

# 1. For Loop
## Aim:
The program takes an integer input from the user and then uses a for loop to print the multiplication table for that number from 1 to 10.
## Theory:
For loop is type of repetition that allows us to write a loop that is executed a specific number of times. The loop enables us to perform n number of steps together in one line.



for (initialization cond. ; test cond. ; update cond.)  
{      
    //Main Body  
}

#### In for loop it first initializes, then checks condition, executes body, update.

## Explanation:
* The loop initializes num2 to 1, and as long as num2 is less than 11, it continues to execute the loop.

* Inside the loop, it calculates the product of num1 and num2 (i.e., num1 * num2) and prints the result to the console using cout. This displays the multiplication table for num1 from 1 to 10.


# 2. While Loop

## Aim:
The program takes an integer input from the user and then uses a while loop to print the multiplication table for that number from 1 to 10.
## Theory:

While loops are used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test conditions.

initialization expression;  
while (test_expression)  
{  
    //Main Body  
    update expression;  
}
#### In While loop it first checks the condition, then executes the body.


## Explanation:
* The loop continues as long as num2 is less than 11.

* Inside the loop, it calculates the product of num1 and num2 (i.e., num1 * num2) and prints the result to the console using cout. This displays the multiplication table for num1 from 1 to 10.

* After printing the result, num2 is incremented using num2++ to move to the next number in the table.

# 3. While Loop_1
## Aim:
The program takes an integer input from the user and counts the number of set bits (1s) in its binary representation.

## Explanation:
* The loop continues as long as num is not equal to 0. The condition num |= 0 is equivalent to num = num | 0, which is always true unless num is already 0.

* Inside the loop, it checks if the least significant bit (LSB) of num is set to 1 by performing a bitwise AND operation with 1 (num & 1). If the result is 1, it increments the result variable.

* Then, it shifts the bits of num one position to the right (i.e., num >>= 1). This effectively moves to the next bit position in the binary representation.

* For example, if you enter 13, it will output. In the binary representation of 13 (which is 1101), there are three set bits, so the program outputs is 3.

# 4. Do While Loop
## Aim:
The C++ program you provided takes an integer input from the user and then uses a do-while loop to print the multiplication table for that number from 1 to 10.

## Theory:
In Do-while loops also the loop execution is terminated on the basis of test conditions. The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. 

initialization expression;  
do  
{  
    //Main Body  
    update expression;  
} while (test_expression);
#### Do while firstly, execute the body then condition check.


## Explanation:
* . The do block executes at least once, and then the condition is checked. The loop continues as long as num2 is less than 11.

* Inside the loop, it calculates the product of num1 and num2 (i.e., num1 * num2) and prints the result to the console using cout. This displays the multiplication table for num1 from 1 to 10.

* After printing the result, num2 is incremented using num2++ to move to the next number in the table.




