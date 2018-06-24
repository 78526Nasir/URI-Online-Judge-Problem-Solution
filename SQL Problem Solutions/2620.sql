-- Problem no: 2620 --
-- solution --

SELECT
    customers.name, orders.id
FROM
    customers
JOIN
    orders
ON
    orders.id_customers = customers.id
WHERE 
    (orders.orders_date >= '2016-01-01' AND orders.orders_date <= '2016-06-30')