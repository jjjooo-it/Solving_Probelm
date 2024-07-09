-- 코드를 입력하세요
SELECT B.ingredient_type, sum(A.total_order) as total_order
from first_half A, icecream_info B 
where A.flavor = B.flavor
group by 1
order by A.total_order asc;