#!/usr/bin/python3
""" Module to play with islands"""


def island_perimeter(grid):
    """ Function calculate perimetter of island """
    perimetter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if(grid[i][j] == 1):
                perimetter += 4
                if(i > 0 and grid[i - 1][j] == 1):
                    perimetter -= 1
                if(i < len(grid) - 1 and grid[i + 1][j] == 1):
                    perimetter -= 1
                if(j > 0 and grid[i][j - 1] == 1):
                    perimetter -= 1
                if(j < len(grid[i]) - 1 and grid[i][j + 1] == 1):
                    perimetter -= 1
    return perimetter
