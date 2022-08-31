what is backtracking ?
it is an algorithmic technique for solving problems recursively by trying to build a solution incrementally
one piece at a time,removing those solutions that fail to satisfy the constraints of the problem at any 
point of the time (reaching any level of the search tree).

Types:
1) Decision problem : search for a feasible solution 
2) Optimization : search for the best solution 
3) Enumeration problem: find all the feasible solutions 

In a sudoku problem , we try to fill the digits one by one.
whenever we find that the solution is not leading to any of the solutions then it backtracks and next digit is 
being tried.

drops the permutation whenever it backtracks.
