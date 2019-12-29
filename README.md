# DFS Implementation

Here i try to implement DFS in different languages. Here the whole idea is to
see which is efficient. To measure efficiency i have kept the algorithm
same, implemented in different language and running against Linux time command.

```
    time python3 ./dfs.py
    g++ -o dfs dfs.cpp; time ./dfs

```

Time Command lists Real/User/Sys time taken Below. What has been captured 
in the table below, Time is recorded as R: U: S:  signifying the
Real/User/System times

```
  real	0m0.005s
  user	0m0.000s
  sys	  0m0.005s
```



| Attempt   |  Python      |    C++      |
| --------- |:------------:|:-----------:|
|    1      | R:0m0.056s   | R:0m0.005s  |
|           | U:0m0.042s   | U:0m0.000s  |
|           | S:0m0.009s   | S:0m0.005s  |
|    2      | R:0m0.056s   | R:0m0.005s  |
|           | U:0m0.042s   | U:0m0.000s  |
|           | S:0m0.009s   | S:0m0.005s  |
|    3      | R:0m0.056s   | R:0m0.005s  |
|           | U:0m0.042s   | U:0m0.000s  |
|           | S:0m0.009s   | S:0m0.005s  |
|    4      | R:0m0.056s   | R:0m0.005s  |
|           | U:0m0.042s   | U:0m0.000s  |
|           | S:0m0.009s   | S:0m0.005s  |
