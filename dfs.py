#!/usr/bin/env  python

"""
DFS Try: Was inspired by the AWS interview question video
"""

from collections import defaultdict

def sort_dependencies(dependencies):
    result = []
    visited = set([])
    visiting = set([])

    def dfs(node):
        if node in visited:
            return
        
        visiting.add(node)
        for neighbor in dependencies[node]:
            if neighbor in visiting:
                raise Exception('Cycle Dependency Found')
            if neighbor not in visited:
                dfs(neighbor)
        
        visiting.remove(node)
        visited.add(node)
        result.append(node)

    for node in dependencies.keys():
        dfs(node)

    print(result)

if __name__ == '__main__':
    depDict = {
        0: [],
        1: [0],
        2: [0],
        3: [1,2],
        4: [3],
        5: [1,2],
        6: [5],
        7: [3,4,5,6],
        8: [12],
        9: [0,3],
        10: [2],
        11: [10],
        12: [10,11]
    }
    sort_dependencies(depDict)
