#!/usr/bin/python3
"""
Module for island_perimeter function
"""


def island_perimeter(grid):
    """
    return the perimeter of the island in grid
    """
    height = len(grid) - 1
    width = len(grid[0]) - 1
    perimeter = 0

    for i, r in enumerate(grid):
        for j, n in enumerate(r):

            if n == 1:
                if i == 0 or grid[i-1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j-1] != 1:
                    perimeter += 1
                if i == height or grid[i+1][j] != 1:
                    perimeter += 1
                if j == width or grid[i][j+1] != 1:
                    perimeter += 1

    return perimeter
