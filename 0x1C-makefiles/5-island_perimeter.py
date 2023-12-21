#!/usr/bin/python3
"""
    island_perimeter module
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    height = len(grid)
    width = len(grid[0])
    is_in = False
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                if i == height - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

                if not is_in:
                    is_in = True
                    perimeter += 1
            elif is_in and grid[i][j] == 0:
                is_in = False
                perimeter += 1
    return perimeter
