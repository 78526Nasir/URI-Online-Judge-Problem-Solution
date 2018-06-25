-- Problem no: 2743 --
-- solution --

SELECT
    name, LENGTH(name) AS length
FROM
    people
ORDER BY
    length DESC