
# 1148 :- Article Views I

# Write a solution to find all the author that viewed at least one of their own article.

# Return the result in the sorted by id in an ascending order.

SELECT DISTINCT author_id
AS id FROM Views
WHERE author_id = viewer_id
ORDER BY author_id ASC;