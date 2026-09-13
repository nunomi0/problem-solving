select f.category, f.price, f.product_name
from food_product f
where category in ('과자', '국', '김치', '식용유')
    and price = (select max(ff.price) from food_product ff where f.category=ff.category group by ff.category)
order by f.price desc