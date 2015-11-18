class Solution:
    # @param {character[][]} board
    # @return {boolean}
    """ Version 1
    def isValidSudoku(self, board):
        for i in range(9):
            row = set()
            column = set()
            for j in range(9):
                if board[i][j] != '.':
                    if board[i][j] not in row:
                        row.add(board[i][j])
                    else:
                        return False
                if board[j][i] != '.': 
                    if board[j][i] not in column:
                        column.add(board[j][i])
                    else:
                        return False
        for m in range(3):
            for n in range(3):
                square = set()
                for i in range(3):
                    for j in range(3):
                        if board[i+3*m][j+3*n] != '.':
                            if board[i+3*m][j+3*n] not in square:
                                square.add(board[i+3*m][j+3*n])
                            else:
                                return False
        return True
    """
    
    #Version2 O(n)
    def isValidSudoku(self, board):
        row, col, box = [[False] * 9 for i in range(10)], [[False] * 9 for i in range(10)], [[False] * 9 for i in range(10)]
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] != '.':
                    index = int(board[i][j]) - 1
                    k = i/3 + 3*(j/3)
                    if row[i][index] or col[j][index] or box[k][index]:
                        return False
                    row[i][index] = col[j][index] = box[k][index] = True
        return True