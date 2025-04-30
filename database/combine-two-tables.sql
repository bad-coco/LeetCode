Select firstName, lastName, city, state
from Person Left join Address
on Person.personID = Address.personId
