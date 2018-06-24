-- Problem no: 2621 --
-- solution --

SELECT 
    products.name 
FROM
    products
JOIN
    providers
ON
    products.id_providers = providers.id
WHERE
    (products.amount between 10 AND 20) AND providers.name like 'P%'