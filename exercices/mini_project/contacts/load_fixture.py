from os import environ
from faker import Faker


DB_FILE = environ.get("DB_FILE")
fake = Faker('fr_FR')


with open(DB_FILE, "w") as f:
    pass


with open(DB_FILE, "w") as f:
    id = 1
    for _ in range(50):
        f.write(f"{id} ; {fake.first_name()} ; {fake.last_name()} ; {fake.date_of_birth()} ; {fake.phone_number()} ; {fake.email()}\n")
        id += 1

