-- Problem no: 2616 --
-- solution --

SELECT 
    customers.id, customers.name
FROM
    customers
WHERE 
	customers.id not in 
	(
		SELECT 
			locations.id_customers
		FROM
			locations
	)
