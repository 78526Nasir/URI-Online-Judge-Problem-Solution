-- Problem no: 2612 --
-- solution --

SELECT 
    movies.id, movies.name 
FROM 
    movies
JOIN
    genres
ON
    movies.id_genres = genres.id
WHERE 
	genres.description = 'Action'
AND
	movies.id in
	(
		SELECT DISTINCT 
			movies_actors.id_movies 
		FROM 
			movies_actors
		JOIN
			actors
		ON 
			actors.id = movies_actors.id_actors
		WHERE 
			(actors.name =  'Marcelo Silva' or actors.name = 'Miguel Silva')
	)
    