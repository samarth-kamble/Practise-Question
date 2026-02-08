CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;

CREATE TABLE Worker (
    WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    FIRST_NAME CHAR(25),
    LAST_NAME CHAR(25),
    SALARY INT(15),
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(25)
);

INSERT INTO Worker (FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) values
                                                                                 ('Monika', 'Arora', 100000, '2014-02-20 09:00:00', 'HR'),
                                                                                 ('Niharika', 'Verma', 80000, '2014-06-11 09:00:00', 'Admin'),
                                                                                 ('Vishal', 'Singhal', 300000, '2014-02-20 09:00:00', 'HR'),
                                                                                 ('Amitabh', 'Singh', 500000, '2014-02-20 09:00:00', 'Admin'),
                                                                                 ('Vivek', 'Bhati', 500000, '2014-06-11 09:00:00', 'Admin'),
                                                                                 ('Vipul', 'Diwan', 200000, '2014-06-11 09:00:00', 'Account'),
                                                                                 ('Satish', 'Kumar', 75000, '2014-01-20 09:00:00', 'Account'),
                                                                                 ('Geetika', 'Chauhan', 90000, '2014-04-11 09:00:00', 'Admin'),
                                                                                 ('Rohit', 'Sharma', 120000, '2015-03-15 10:30:00', 'HR'),
                                                                                 ('Anita', 'Patel', 95000, '2016-07-21 11:00:00', 'Admin'),
                                                                                 ('Karan', 'Mehta', 180000, '2017-01-10 09:45:00', 'IT'),
                                                                                 ('Sneha', 'Joshi', 110000, '2018-09-05 10:15:00', 'HR'),
                                                                                 ('Rahul', 'Nair', 220000, '2019-11-18 09:30:00', 'IT'),
                                                                                 ('Pooja', 'Kulkarni', 85000, '2020-02-25 11:20:00', 'Account'),
                                                                                 ('Arjun', 'Malhotra', 300000, '2021-06-14 09:00:00', 'IT'),
                                                                                 ('Neha', 'Agarwal', 140000, '2022-08-09 10:00:00', 'Admin'),
                                                                                 ('Suresh', 'Yadav', 70000, '2023-01-12 11:10:00', 'Account'),
                                                                                 ('Kavita', 'Deshmukh', 160000, '2024-04-01 09:40:00', 'HR');

CREATE TABLE Bonus (
  WORKER_REF_ID INT,
  BONUS_AMOUNT INT(10),
  BONUS_DATE DATETIME,
  FOREIGN KEY (WORKER_REF_ID)
                REFERENCES Worker(WORKER_ID)
                ON DELETE CASCADE
);

INSERT INTO Bonus (WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE) VALUES
                                                                (1, 5000,  '2016-02-20 00:00:00'),
                                                                (2, 3000,  '2016-06-11 00:00:00'),
                                                                (3, 4000,  '2016-02-20 00:00:00'),
                                                                (1, 4500,  '2017-02-20 00:00:00'),
                                                                (2, 3500,  '2017-06-11 00:00:00'),
                                                                (4, 6000,  '2018-03-15 00:00:00'),
                                                                (5, 7000,  '2019-04-10 00:00:00'),
                                                                (6, 2500,  '2019-08-25 00:00:00'),
                                                                (7, 2000,  '2020-01-20 00:00:00'),
                                                                (8, 3000,  '2020-04-11 00:00:00'),
                                                                (9, 1500,  '2021-09-05 00:00:00'),
                                                                (10, 5000, '2022-08-09 00:00:00');

CREATE TABLE Title (
    WORKER_REF_ID INT,
    WORKER_TITLE CHAR(25),
    AFFECTED_FROM DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
                   REFERENCES Worker(WORKER_ID)
                   ON DELETE CASCADE
);

INSERT INTO Title (WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM) VALUES
                                                                   (1,  'Manager',        '2016-02-20 00:00:00'),
                                                                   (2,  'Executive',      '2016-06-11 00:00:00'),
                                                                   (3,  'Lead',           '2016-02-20 00:00:00'),
                                                                   (4,  'Manager',        '2016-02-20 00:00:00'),
                                                                   (5,  'Assistant',      '2016-06-11 00:00:00'),
                                                                   (6,  'Executive',      '2016-06-11 00:00:00'),
                                                                   (7,  'Assistant',      '2016-01-20 00:00:00'),
                                                                   (8,  'Manager',        '2016-04-11 00:00:00'),
                                                                   (9,  'Lead',           '2017-03-15 00:00:00'),
                                                                   (10, 'Executive',      '2018-07-21 00:00:00'),
                                                                   (11, 'Developer',      '2019-01-10 00:00:00'),
                                                                   (12, 'Senior HR',      '2020-09-05 00:00:00'),
                                                                   (13, 'Senior Developer','2021-11-18 00:00:00'),
                                                                   (14, 'Accountant',     '2022-02-25 00:00:00'),
                                                                   (15, 'Tech Lead',      '2023-06-14 00:00:00'),
                                                                   (16, 'Manager',        '2023-08-09 00:00:00'),
                                                                   (17, 'Clerk',          '2024-01-12 00:00:00'),
                                                                   (18, 'HR Lead',        '2024-04-01 00:00:00');


CREATE TABLE demo (NAME VARCHAR(233), ID INT PRIMARY KEY );

INSERT INTO demo (NAME, ID)VALUES('Samarth', 10);

SELECT * FROM demo;