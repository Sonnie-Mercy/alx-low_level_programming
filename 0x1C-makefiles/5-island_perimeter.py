#!/usr/bin/python3
"""Creating an island described in grid"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    @grid: a list of lists of ints
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0:
                    if grid[i - 1][j] != 0:
                        perimeter -= 1
                    if i < len(grid) - 1:
                        if grid[i + 1][j] != 0:
                            perimeter -= 1
                if j > 0:
                    if grid[j - 1][i] != 0:
                        perimeter -= 1
                    if j < len(grid[0]) - 1:
                        if grid[i][j + 1] != 0:
                            perimeter -= 1
    return perimeter
