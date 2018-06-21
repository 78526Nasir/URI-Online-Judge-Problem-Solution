-- Problem no: 2614 --
-- solution --

SELECT
    name, rentals_date
FROM 
    customers
JOIN
    rentals
ON
    rentals.id_customers = customers.id
WHERE 
    (rentals_date >= '2016-09-01' AND rentals_date <= '2016-09-30')