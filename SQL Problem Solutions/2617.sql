-- Problem no: 2617 --
-- solution --

SELECT
    products.name, providers.name
FROM
    providers
JOIN
    products
ON
    providers.id = products.id_providers
WHERE
    providers.name = 'Ajax SA'