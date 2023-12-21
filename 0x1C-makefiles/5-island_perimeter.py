#!/usr/bin/python3
"""
    island_perimeter module
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for shared side

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for shared side

    return perimeter
