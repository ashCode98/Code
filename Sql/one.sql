CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    HireDate DATE
);

INSERT INTO Employees (EmployeeID, FirstName, LastName, Email, HireDate) VALUES
(1, 'John', 'Doe', 'john.doe@example.com', '2023-01-15'),
(2, 'Jane', 'Smith', 'jane.smith@example.com', '2023-02-20'),
(3, 'Alice', 'Johnson', 'alice.johnson@example.com', '2023-03-10'),
(4, 'Bob', 'Williams', 'bob.williams@example.com', '2023-04-05'),
(5, 'Charlie', 'Brown', 'charlie.brown@example.com', '2023-05-25');