select product_id, product_name, product_cd, category, price
from food_product
order by price desc
fetch first 1 rows only