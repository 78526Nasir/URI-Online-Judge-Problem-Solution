
-- Problem no: 2607 --
-- solution --

SELECT 
    city
FROM
    providers
ORDER BY 
	city ASC
	

	
-- Problem no: 2608 --
-- solution --

SELECT 
	MAX(price) AS price, MIN(price) AS price 
FROM
	products