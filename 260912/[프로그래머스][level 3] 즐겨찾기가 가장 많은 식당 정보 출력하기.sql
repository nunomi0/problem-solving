select food_type, rest_id, rest_name, favorites
from rest_info A
where favorites = (
                    select max(favorites)
                    from rest_info B
                    where A.food_type=B.food_type
                  )   
order by food_type desc