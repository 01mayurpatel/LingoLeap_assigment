# LingoLeap_assigment
In this code:

The maxMoves function takes a grid as input and initializes a variable number to keep track of the maximum number of moves.

It defines a nested helper function that recursively explores possible moves and updates the number with the maximum number of moves found.

The helper function starts from a cell in the first column and explores three possible directions: right, upward-right, and downward-right, checking if the value of the next cell is strictly greater.

The maxMoves function iterates through each cell in the first column, starting from different rows, and calls the helper function to find the maximum number of moves that can be made starting from each cell.

Finally, the number variable, which holds the maximum number of moves, is returned as the result.





