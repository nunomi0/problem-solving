select price max_price
from product
order by price desc
fetch first 1 rows only