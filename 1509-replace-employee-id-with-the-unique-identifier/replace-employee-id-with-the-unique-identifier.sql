# Write your MySQL query statement below
SELECT eu.unique_id,e.name
from Employees e
left join EmployeeUNI eu
ON eu.id=e.id