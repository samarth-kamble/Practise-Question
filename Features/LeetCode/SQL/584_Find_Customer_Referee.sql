# 584 :- Find Customer Referee

# Find the names of the customer that are either :-
        -- 1. referred by any customer.
        -- 2. not referred by any order.

# Return the result in any order

SELECT name FROM Customer
WHERE referee_id IS NULL OR referee_id != 2;