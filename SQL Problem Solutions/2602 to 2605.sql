-- Problem no: 2602 --
-- Solution --

SELECT
    name
FROM
    customers
WHERE
    state = 'RS'

-- Problem no: 2603 --
-- Solution --

SELECT
    name, street
FROM
    customers
WHERE
    city = 'Porto Alegre'


-- Problem no: 2604 --
-- Solution --

SELECT
    id, name
FROM
    products
WHERE
    price>100 OR price<10


-- Problem no: 2605 --
-- solution --

SELECT 
	products.name, providers.name 
FROM
	products
JOIN
	providers
ON
	products.id_providers = providers.id
WHERE 
	products.id_categories=6