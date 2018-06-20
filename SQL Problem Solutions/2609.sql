-- Problem no: 2609 --
-- solution --

SELECT 
    categories.name, SUM(amount)
FROM 
    products
JOIN
    categories
ON 
    products.id_categories = categories.id
GROUP BY
    categories.name