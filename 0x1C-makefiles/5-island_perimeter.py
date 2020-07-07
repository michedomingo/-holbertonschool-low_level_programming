#!/usr/bin/python3
"""
This module defines island_perimeter function
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    for row in range(len(grid)):
        for num in range(len(grid[row])):
            if grid[row][num] == 1:
                if row + 1 == len(grid) or grid[row + 1][num] == 0:
                    perimeter += 1
                if num + 1 == len(grid[0]) or grid[row][num + 1] == 0:
                    perimeter += 1
                if row - 1 == -1 or grid[row - 1][num] == 0:
                    perimeter += 1
                if num - 1 == -1 or grid[row][num - 1] == 0:
                    perimeter += 1
    return(perimeter)
