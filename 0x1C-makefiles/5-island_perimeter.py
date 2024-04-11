#!/usr/bin/python3
"""
    island_perimeter contains the island perimeter func

"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): list of lists

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check adjacent cells
                perimeter += 4
                # Check if the cell above is land and subtract 2
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                # Check if the cell besides is land and subtract 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
