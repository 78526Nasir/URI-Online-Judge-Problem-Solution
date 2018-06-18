-- Problem no: 2606 --
-- solution --

SELECT
	products.id, products.name
FROM 
	products
JOIN
	categories
ON 
	categories.id = products.id_categories
WHERE
	categories.name like 'super%'
