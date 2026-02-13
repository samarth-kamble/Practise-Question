# 595 :- Big Countries

# A country is big if :-
        -- 1. it has an area at least 3 million, or
        -- 2. it has a population of at least 25 million
# Write  a solution to find the name, population, and area of the big countries.

# Return the result table in any order.

SELECT name, population, area FROM World
WHERE area >= 3000000 OR population >= 25000000;