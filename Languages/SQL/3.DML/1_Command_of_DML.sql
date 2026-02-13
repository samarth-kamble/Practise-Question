CREATE DATABASE DM_Practice ;

USE DM_Practice;

CREATE TABLE Student (
    student_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL ,
    marks INT CHECK ( marks >= 0 AND marks <= 100 ),
    city VARCHAR(50),
    grade CHAR(1),
    admission_date DATE
);

INSERT INTO Student (name, marks, city, grade, admission_date) VALUES
                                                                   ('Rahul', 85, 'Mumbai', 'A', '2023-06-15'),
                                                                   ('Priya', 72, 'Pune', 'B', '2023-07-10'),
                                                                   ('Amit', 90, 'Delhi', 'A', '2023-05-20'),
                                                                   ('Sneha', 60, 'Mumbai', 'C', '2023-08-01'),
                                                                   ('Karan', 78, 'Bangalore', 'B', '2023-06-25'),
                                                                   ('Neha', 55, 'Pune', 'D', '2023-07-30'),
                                                                   ('Arjun', 88, 'Delhi', 'A', '2023-04-18'),
                                                                   ('Meera', 67, 'Mumbai', 'C', '2023-09-12'),
                                                                   ('Rohit', 92, 'Bangalore', 'A', '2023-03-05'),
                                                                   ('Anjali', 74, 'Chennai', 'B', '2023-06-08');

SELECT * FROM Student;

SELECT * FROM Student
WHERE marks > 80 ;

SELECT * FROM Student
WHERE city = 'Mumbai';

SELECT *
FROM Student
WHERE grade = 'A';

SELECT * FROM Student WHERE city = 'Mumbai';

UPDATE Student SET marks = marks + 5
WHERE city = 'Mumbai';

UPDATE Student
SET grade = 'D'
WHERE marks < 60;

UPDATE Student
SET city = 'Hyderabad'
WHERE name = 'Karan';

SELECT * FROM Student WHERE marks < 50;

DELETE FROM Student
WHERE marks < 50;

SELECT * FROM Student WHERE city < 'Chennai';

DELETE FROM Student
WHERE city = 'Chennai';

SELECT * FROM Student WHERE city < 'Chennai';
