#!/usr/bin/python3
"""
This module calculates the island perimeter
"""


def island_perimeter(grid):
    """
    Calculate the island perimeter

    Args:
        grid (any): a list of list of integers 0 that has
        0 as water zone and 1 as land zone

    Returns: the perimeter of the grid
    """
    perimeter = 0

    if not grid:
        return (perimeter)

    first_iteration = range(len(grid))
    second_iteration = range(len(grid[0]))

    for i in first_iteration:
        for j in second_iteration:
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
            else:
                pass

    return (perimeter)
