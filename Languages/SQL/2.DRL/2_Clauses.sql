USE ORG;

SELECT * FROM Worker;

-- Where --> Reduced rows based on the conditions
SELECT * FROM Worker WHERE SALARY = 100000;

-- BETWEEN --> THE THINGS BETWEEN TWO LIMITS
SELECT * FROM Worker WHERE SALARY BETWEEN 0 AND 100000;

-- IN --> Reduces OR Conditions
-- HR , Admin
SELECT * FROM Worker WHERE DEPARTMENT ='HR' OR DEPARTMENT='Admin';

-- Better way IN
SELECT * FROM Worker WHERE DEPARTMENT IN ('HR','ADMIN');

-- NOT -->
SELECT * FROM Worker WHERE DEPARTMENT NOT IN ('HR','ADMIN');

-- IS NULL --> CHECK NULL ENTRY
SELECT * FROM Title WHERE WORKER_TITLE IS NULL;

-- Wildcard -> Mathcing pattern searching
 -- 1. % -> Representing the zero or more character
    SELECT * From Worker WHERE FIRST_NAME LIKE '%T'; -- '%T' -> This pattern is find end with the T
    SELECT * FROM  Worker WHERE FIRST_NAME Like 'R%'; -- 'R%' -> This pattern is find first letter with R

 -- 2. _ -> Represent any single character
    SELECT * FROM Worker WHERE LAST_NAME LIKE '_AIR'; --  _AIR -> This pattern is find end Patter with the AIR and any start letter
    SELECT * FROM Worker WHERE FIRST_NAME LIKE 'N___'; -- N___ -> THIS PATTERN IS FIND START WITH THE N AND AFTER N WITH ANY 3 LETTER

 -- 3. -> COMBINED PATTERN EXAMPLES
     -- It meaning the first name start with any letter but second letter is i and rest are any letter no limit.

SELECT * FROM Worker WHERE FIRST_NAME LIKE '_I%';

-- Sorting By ORDER BY
    -- Default sort by the Ascending order
        SELECT * FROM Worker ORDER BY SALARY;
    -- Sorting for descending order
        SELECT * FROM Worker ORDER BY SALARY DESC;
    -- CHARACTER SORT
        SELECT * FROM Worker ORDER BY FIRST_NAME;

-- DISTINCT VALUES
SELECT DISTINCT DEPARTMENT FROM Worker;

-- GROUP BY
    -- IF Aggregation not applied it always written a distinct values.
    SELECT DEPARTMENT FROM Worker GROUP BY DEPARTMENT;

    -- COUNT ->  Used for the count the numbers of tuples of same name or things.
    SELECT FIRST_NAME, COUNT(FIRST_NAME) FROM Worker GROUP BY FIRST_NAME;

    -- AVG  -> USED FOR THE AVERAGE
    SELECT DEPARTMENT, AVG(SALARY) FROM Worker GROUP BY DEPARTMENT;

    -- MIN -> USED FOR THE FIND MINIMUM VALUES
    SELECT DEPARTMENT, MIN(SALARY) FROM Worker GROUP BY DEPARTMENT;

    -- MAX -> USED FOR THE FIND MAXIMUM VALUE
    SELECT DEPARTMENT, MAX(SALARY) FROM Worker GROUP BY DEPARTMENT;

    -- SUM -> SUM FOR AND ADDITION
    SELECT DEPARTMENT, SUM(SALARY) FROM Worker GROUP BY DEPARTMENT;

-- HAVING
SELECT COUNT(SALARY) FROM Worker GROUP BY SALARY HAVING COUNT(SALARY) < 100000;
