USE JOINS;

# 1. Write a SQL Query to get the employee name and their department name.
SELECT e.name, d.department_name
FROM employees e
INNER JOIN Departments d
ON e.department_id = d.department_id;

# 2. Write a SQL Query to get all employees and their department names (even if no department assigned).
SELECT e.name, d.department_name
FROM Employees e
LEFT JOIN Departments d
ON e.department_id = d.department_id;

# 3. Write a SQL Query to get all departments and their employees (even if department has no employees).
select e.name, d.department_name
from Employees e
RIGHT JOIN Departments d
on e.department_id = d.department_id;

# 4. Write a SQL Query to get employees and departments (even unmatched).
SELECT e.name, d.department_name
FROM Employees e
         LEFT JOIN Departments d
                   ON e.department_id = d.department_id

UNION

SELECT e.name, d.department_name
FROM Employees e
         RIGHT JOIN Departments d
                    ON e.department_id = d.department_id;

# 5. Join with where condition :- Write a query for with the employees who work in "IT" department.
SELECT e.name, e.salary
FROM Employees e
         INNER JOIN Departments d
                    ON e.department_id = d.department_id
WHERE d.department_name = 'FINANCE';

