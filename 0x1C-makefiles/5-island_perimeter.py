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
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    ret += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    ret += 1
                if x == 0 or grid[y][x - 1] == 0:
                    ret += 1
                if x == len(row) - 1 or grid[y][x - 1] == 0:
                    ret += 1
    return ret
