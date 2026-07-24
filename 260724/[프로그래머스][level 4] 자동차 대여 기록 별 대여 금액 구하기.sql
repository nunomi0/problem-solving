/*select * from car_rental_company_rental_history*/

select
    history_id,
    daily_fee*duration*(1-(nvl(discount_rate,0)/100)) fee
from
    (
        select
            h.history_id history_id,
            h.end_date - h.start_date + 1 duration,
            h.end_date - h.start_date + 1 >= 7 duration_7,
            h.end_date - h.start_date + 1 >= 30 duration_30,
            h.end_date - h.start_date + 1 >= 90 duration_90,
            c.daily_fee daily_fee
        from 
            car_rental_company_rental_history h
            join car_rental_company_car c
                on h.car_id = c.car_id
        where c.car_type = '트럭'
    ) hc
    left join
    (
        select
            duration_type,
            discount_rate
        from
            car_rental_company_discount_plan
        where
            car_type = '트럭'
    ) p
    on
        (hc.duration_7=false and duration_type is null)
        or
        (hc.duration_7=true and hc.duration_30=false and duration_type='7일 이상')
        or
        (hc.duration_7=true and hc.duration_30=true and hc.duration_90=false and duration_type='30일 이상')
        or
        (hc.duration_7=true and hc.duration_30=true and hc.duration_90=true and duration_type='90일 이상')
 
order by
    fee desc,
    history_id desc