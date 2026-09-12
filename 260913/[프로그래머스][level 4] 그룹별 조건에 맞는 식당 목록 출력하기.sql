select m.member_name, r.review_text, to_char(r.review_date, 'YYYY-MM-DD')
from member_profile m join rest_review r
    on m.member_id=r.member_id
where m.member_id=(
                    select member_id
                    from rest_review 
                    group by member_id
                    order by count(member_id) desc
                    fetch first 1 rows only
                )
order by r.review_date, review_text