-- Problem no: 2739 --
-- solution --

SELECT
    name, CAST((EXTRACT(DAY from payday)) AS int)  AS day
FROM
    loan