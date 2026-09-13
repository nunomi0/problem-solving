select b.author_id, a.author_name, b.category, sum(b.price*bs.sales) total_sales
from book b join author a on b.author_id=a.author_id
    join book_sales bs on b.book_id=bs.book_id
where to_char(bs.sales_date,'YYYY-MM')='2022-01'
group by b.author_id, b.category, a.author_name
order by author_id, category desc