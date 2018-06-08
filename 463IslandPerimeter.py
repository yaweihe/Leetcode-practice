class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        islands = 0
        neighbours = 0

        for i in range(len(grid)):
        	for j in range(len(grid[i])):
        		if grid[i][j] == 1:
        			islands += 1
        			if i+1 < len(grid) and grid[i+1][j] == 1:
        				neighbours += 1
        			if j+1 < len(grid[i]) and grid[i][j+1] == 1:
        				neighbours += 1

        return islands * 4 - neighbours * 2