-- Problem no: 2744 --
-- solution --

SELECT
    id, password, MD5(password) as MD5
FROM
    account