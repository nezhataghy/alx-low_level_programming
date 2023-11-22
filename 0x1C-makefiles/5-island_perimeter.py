#!/usr/bin/python3
def island_perimeter(grid):
    '''
        Calculates the perimeter of an island that is surrounded by eau
        the Land is represented by 1 and the eau is by 0.
    '''
    perimeter = 0
    eau = 0
    terre = 1

    for y, ligne in enumerate(grid):
        for x, colonne in enumerate(ligne):
            if colonne == terre:
                if x == 0 or grid[y][x - 1] == eau:
                    perimeter += 1
                if (x + 1) == len(ligne) or grid[y][x + 1] == eau:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == eau:
                    perimeter += 1
                if (y + 1) == len(grid) or grid[y + 1][x] == eau:
                    perimeter += 1

    return perimeter
