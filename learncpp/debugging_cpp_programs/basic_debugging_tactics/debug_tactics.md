## Debugging tactics

- Debugging tactic #1: Commenting out your code:

If your program is exhibiting erroneous behavior, one way to reduce the amount of code you have to search through is to comment some code out and see if the issue persists. If the issue remains unchanged, the commented out code probably wasn’t responsible.


- Debugging tactic #2: Validating your code flow:

Another problem common in more complex programs is that the program is calling a function too many or too few times (including not at all).
In such cases, it can be helpful to place statements at the top of your functions to print the function’s name. That way, when the program runs, you can see which functions are getting called.


- Debugging tactic #3: Printing values:

With some types of bugs, the program may be calculating or passing the wrong value. We can also output the value of variables (including parameters) or expressions to ensure that they are correct.


