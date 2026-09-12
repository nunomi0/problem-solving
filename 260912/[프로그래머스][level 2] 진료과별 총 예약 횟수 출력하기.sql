select mcdp_cd, count(apnt_no)
from appointment
where to_char(apnt_ymd,'YYYY-MM')='2022-05'
group by mcdp_cd
order by count(apnt_no), mcdp_cd