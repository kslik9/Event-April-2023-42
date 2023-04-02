import requests

name = input("Enter the name of a Pokemon: ").lower()
res = requests.get(f"https://pokeapi.co/api/v2/pokemon/{name}")
if res.status_code == 200:
    data = res.json()
    print(f"Name: {name}")
    print("Abilities:")
    abilities = data['abilities']
    for ability in abilities:
      print(f"- {ability['ability']['name']}")
else:
  print("not a pokemon")