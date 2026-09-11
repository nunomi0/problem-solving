select substr(product_code,0,2) category, count(product_id)
from product
group by substr(product_code,0,2)
order by category