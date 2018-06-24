-- Problem no: 2740 --
-- solution --

SELECT CONCAT('Podium: ', team) AS name FROM league WHERE position = 1 OR position = 2 OR position = 3 
UNION ALL
SELECT CONCAT('Demoted: ' , team) AS name FROM league WHERE position = 14 OR position = 15