#!/usr/bin/python3

def island_perimeter(grid):
    """calculating the perimeter of an island with no neighbours"""
    rown = len(grid)
    columns = len(grid[0])

    perimeter = 0

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1

                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

                if j < columns - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
