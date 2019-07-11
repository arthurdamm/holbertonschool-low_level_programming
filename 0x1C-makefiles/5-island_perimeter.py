#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
    if not grid or type(grid) != list or not len(grid):
        return None
    for row in grid:
        if not row or type(row) != list or len(row) != len(grid[0]):
            return None
    ret = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell:
                ret += y == 0 or not grid[y - 1][x]
                ret += y == len(grid) - 1 or not grid[y + 1][x]
                ret += x == 0 or not grid[y][x - 1]
                ret += x == len(grid[0]) - 1 or not grid[y][x - 1]
    return ret
