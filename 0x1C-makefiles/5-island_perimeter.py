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


def island_perimeter(grid=[[]]):
    """
    Computers the length of the perimeter of an island.
    """
    ret = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell:
                ret += count_water(grid, y, x)
    return ret
