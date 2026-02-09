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
