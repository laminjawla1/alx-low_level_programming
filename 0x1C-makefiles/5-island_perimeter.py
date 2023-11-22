#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """
    Island Perimeter
    """
    visits = set()
    perimeter = 0
    grid_len = len(grid)
    for i in range(grid_len):
        for j in range(grid_len):
            if grid[i][j]:
                perimeter += dfs(visits, grid, i, j)
    return perimeter


def dfs(visits, grid, i, j):
    if i >= len(grid) or j >= len(grid[0]) or \
            i < 0 or j < 0 or grid[i][j] == 0:
        return 1
    if (i, j) in visits:
        return 0
    visits.add((i, j))
    perimeter = dfs(visits, grid, i, j + 1)
    perimeter += dfs(visits, grid, i + 1, j)
    perimeter += dfs(visits, grid, i, j - 1)
    perimeter += dfs(visits, grid, i - 1, j)
    return perimeter
