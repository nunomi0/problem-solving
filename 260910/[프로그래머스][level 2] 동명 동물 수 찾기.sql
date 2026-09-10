select name, count(name)
from animal_ins
having count(name)>1
group by name
order by name