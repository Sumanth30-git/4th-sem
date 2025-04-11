def is_safe(board, row, col):
    # Check the column for conflicts
    for i in range(row):
        if board[i] == col or abs(board[i] - col) == row - i:
            return False
    return True

def solve_queens(board, row):
    # If all queens are placed
    if row == len(board):
        return True

    # Try placing the queen in all columns of the current row
    for col in range(len(board)):
        if is_safe(board, row, col):
            board[row] = col  # Place queen
            if solve_queens(board, row + 1):
                return True
            board[row] = -1  # Backtrack

    return False

def print_solution(board):
    for row in board:
        line = ['Q' if i == row else '.' for i in range(len(board))]
        print(' '.join(line))
    print("\n")

def solve_8_queens():
    board = [-1] * 8  # A list to store the column position of queens in each row
    if solve_queens(board, 0):
        print_solution(board)
    else:
        print("No solution found.")

# Run the solution
solve_8_queens()
