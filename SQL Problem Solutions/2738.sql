-- Problem no: 2738 --
-- solution --

SELECT 
    name, 
    CAST((((math * 2.0) + (specific * 3.0) + (project_plan * 5.0))/10.0) AS DECIMAL(10,2)) AS avg
FROM
    candidate
JOIN 
    score
ON
    candidate.id = score.candidate_id
ORDER BY avg DESC

