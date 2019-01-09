# Egg-Drop-Brute-Force

This is a Brute Force approach for solving Egg Drop problem involving Dynamic Programming.

Optimal Substructure:

  k : Number of Eggs
  n : Number of Floors
  eggDrop(n, k) = eggDrop(n, k-1) if(k>=n)
  eggDrop(n, k) = 1 + min{max(eggDrop(x-1, k-1), eggDrop(n-x, k)): 
                 x in {1, 2, ..., k}}


