SHOW DATABASES;

CREATE DATABASE JOINS;

SHOW DATABASES;

USE JOINS;

CREATE TABLE Departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100)
);

CREATE TABLE Employees (
    employee_id INT PRIMARY KEY ,
    name VARCHAR(100),
    salary DECIMAL(10,2),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES Departments(department_id)
);

CREATE TABLE Projects (
    project_id INT PRIMARY KEY,
    project_name VARCHAR(100),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES Departments(department_id)
);

CREATE TABLE Employee_Projects (
    employee_id INT,
    project_id INT,
    PRIMARY KEY (employee_id, project_id),
    FOREIGN KEY (employee_id) REFERENCES Employees(employee_id),
    FOREIGN KEY (project_id) REFERENCES Projects(project_id)
);

SHOW TABLES;

INSERT INTO Departments (department_id, department_name) VALUES
                                                             (1, 'Engineering'),
                                                             (2, 'Human Resources'),
                                                             (3, 'Finance'),
                                                             (4, 'Marketing'),
                                                             (5, 'IT Support');
INSERT INTO Employees (employee_id, name, salary, department_id) VALUES
                                                                     (101, 'Amit Sharma', 75000.00, 1),
                                                                     (102, 'Priya Verma', 82000.00, 1),
                                                                     (103, 'Rahul Patil', 60000.00, 2),
                                                                     (104, 'Sneha Iyer', 90000.00, 3),
                                                                     (105, 'Karan Mehta', 72000.00, 4),
                                                                     (106, 'Neha Singh', 68000.00, 5),
                                                                     (107, 'Arjun Rao', 95000.00, 1),
                                                                     (108, 'Pooja Desai', 58000.00, 2),
                                                                     (109, 'Vikram Joshi', 88000.00, 3),
                                                                     (110, 'Anjali Kulkarni', 77000.00, 4);

INSERT INTO Projects (project_id, project_name, department_id) VALUES
                                                                   (201, 'Website Revamp', 1),
                                                                   (202, 'Recruitment Drive 2026', 2),
                                                                   (203, 'Annual Budget Planning', 3),
                                                                   (204, 'Product Launch Campaign', 4),
                                                                   (205, 'Network Infrastructure Upgrade', 5),
                                                                   (206, 'Mobile App Development', 1),
                                                                   (207, 'Employee Training Program', 2);


INSERT INTO Employee_Projects (employee_id, project_id) VALUES
-- Engineering Projects
(101, 201),
(102, 201),
(107, 201),
(101, 206),
(102, 206),
(107, 206),

-- HR Projects
(103, 202),
(108, 202),
(103, 207),
(108, 207),

-- Finance Project
(104, 203),
(109, 203),

-- Marketing Project
(105, 204),
(110, 204),

-- IT Support Project
(106, 205),

-- Cross Department Collaboration
(105, 201),   -- Marketing helping Engineering
(104, 204);   -- Finance helping Marketing



