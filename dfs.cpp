#include <algorithm>
#include <iostream>
#include <map>
#include <list>

using namespace std;

std::list<int>  result;
std::list<int>  visiting;
std::list<int>  visited;

std::map<int,std::list<int>> dependencies = {
                                 { 0, {1} },
                                 { 1, {0} },
                                 { 2, {0} },
                                 { 3, {1,2} },
                                 { 4, {3} },
                                 { 5, {1,2} },
                                 { 6, {5} },
                                 { 7, {3,4,5,6} },
                                 { 8, {12} },
                                 { 9, {0,3} },
                                 { 10, {2} },
                                 { 11, {10} },
                                 { 12, {10,11} }
                              };
void dfs(int node)
{
    if (std::find(visiting.begin(), visiting.end(), node) != visiting.end())    
        return;

    visiting.push_front(node);
    for (int k : dependencies[node])
    {
        if (std::find(visiting.begin(), visiting.end(), k) != visiting.end())
        {
            std::cout << "Cyclic Dependency detected" << std::endl;
            exit(-1);
        }
        if (std::find(visited.begin(), visited.end(), k) == visited.end())
            dfs(k);
    }

    visiting.remove(node);
    visited.push_front(node);

    if (std::find(result.begin(), result.end(), node) == result.end())
        result.push_back(node);
}

void sort_dependencies()
{
    for(std::map<int,std::list<int>>::iterator it = dependencies.begin(); it != dependencies.end(); ++it)
    {
        dfs(it->first);
    }
}

int main(int argc, char **argv)
{
    sort_dependencies();
    for(int n : result)
    {
        std::cout << n << std::endl;
    }
    return 0;
}
