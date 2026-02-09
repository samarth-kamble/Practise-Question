SHOW DATABASES ;

CREATE DATABASE temp;

SHOW    DATABASES ;

USE temp;

CREATE TABLE Customer (
    id INTEGER PRIMARY KEY ,
    cname VARCHAR(255),
    Address VARCHAR(255),
    Gender CHAR(2),
    city VARCHAR(255),
    pincode INTEGER
);

show tables ;


INSERT INTO Customer (id, cname, Address, Gender, city, pincode) VALUES
                                                                     (1251, 'Samarth', 'Home', 'M', 'Mumbai',144088),
                                                                     (1252, 'Samarth K ', 'Home', 'M', 'Mumbai',144088);
INSERT INTO Customer (id, cname, Address, Gender, city, pincode) VALUES
                                                                     (1253, 'NANCY', 'Home', 'F', 'PUNE',NULL);

SELECT * FROM Customer;

CREATE TABLE ORDER_DETAILS (
    id INT PRIMARY KEY,
    delivery_date  DATE,
    order_placed_data DATE,
    cust_id INT,
    FOREIGN KEY (cust_id) REFERENCES Customer(id)
);

SHOW TABLES;

CREATE TABLE ACCOUNT (
    ID INT PRIMARY KEY ,
    EMAIL VARCHAR(255) UNIQUE,
    NAME VARCHAR(255)
);

INSERT INTO ACCOUNT (ID, EMAIL, NAME) VALUES (1021, 'SAMARTHKAMBLE192@GMAIL.COM','SAMARTH'),(1022, 'SAMARTHKAMBLE193@GMAIL.COM','SAMARTH KAMBLE');

SHOW TABLES;

SELECT * FROM ACCOUNT;

CREATE TABLE ACCOUNT_DETAILS (
    ID INT PRIMARY KEY ,
    NAME VARCHAR(255),
    AGE INT,
    CONSTRAINT AGE_CHECK CHECK ( AGE > 12 ),
    ACCOUNT_NO INT,
    FOREIGN KEY (ACCOUNT_NO) REFERENCES ACCOUNT(ID)
);

INSERT INTO ACCOUNT_DETAILS (ID, NAME, AGE, ACCOUNT_NO) VALUES (1, 'SAMARTH',11,1021);
INSERT INTO ACCOUNT_DETAILS (ID, NAME, AGE, ACCOUNT_NO) VALUES (1, 'SAMARTH',13,1021);

# DEFAULT -> IT IS USED TO SET THE DEFAULT VALUE FOR EXAMPLE WE CAN TAKE THE SAVING INTEREST IN THE BANK;

