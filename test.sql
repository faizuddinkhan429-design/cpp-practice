CREATE DATABASE StudentDB;
GO

USE StudentDB;
GO

CREATE TABLE Students (
    ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Age INT
);

INSERT INTO Students VALUES
(1, 'Faiz', 20),
(2, 'Ali', 21);

SELECT * FROM Students;