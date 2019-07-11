#!/usr/bin/python3
"""
Module for island_perimeter() method
"""


def count_water(grid, row, col):
    """
    Counts how many water tiles surround this tile.
    """
    ret = 0
    ret += row == 0 or not grid[row - 1][col]
    ret += row == len(grid) - 1 or not grid[row + 1][col]
    ret += col == 0 or not grid[row][col - 1]
    ret += col == len(grid[0]) - 1 or not grid[row][col - 1]
    return ret


def island_perimeter(grid):
    """
    Computers the length of the perimeter of an island.
    """
    if not grid or type(grid) != list or not len(grid):
        return 0
    for row in grid:
        if not row or type(row) != list or len(row) != len(grid[0]):
            return 0
    ret = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell:
                ret += y == 0 or not grid[y - 1][x]
                ret += y == len(grid) - 1 or not grid[y + 1][x]
                ret += x == 0 or not grid[y][x - 1]
                ret += x == len(grid[0]) - 1 or not grid[y][x - 1]
    return ret
