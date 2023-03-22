#!/usr/bin/python3
"""making a grid with an island"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    m, n = len(grid), len(grid[0])
    perimeter = 0

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter
