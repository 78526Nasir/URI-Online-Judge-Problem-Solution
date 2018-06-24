
-- Problem no: 2742 --
-- solution --

SELECT
    life_registry.name, ROUND((omega * 1.618),3) AS "The N Factor"
FROM 
    life_registry
JOIN
    dimensions
ON
    dimensions.id = life_registry.dimensions_id
WHERE
    (dimensions.name = 'C875' OR dimensions.name = 'C774') AND life_registry.name ~ '^Richard'
ORDER BY 
    omega