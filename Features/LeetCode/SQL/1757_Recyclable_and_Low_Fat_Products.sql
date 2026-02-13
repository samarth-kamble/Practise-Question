

# 1757 :- Add DML commands and update data source mappings

#  Write a solution to find the ids of products that are both low fats and recyclable.
    -- Return the result table in any order.

SELECT product_id FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y';