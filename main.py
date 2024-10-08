import requests

x = requests.get('https://www.ecs.soton.ac.uk/people/dem')  # Get whole html script

data = x.text
idx = data.find('"name"', data.find('"name')+1) + 9  # Find the second "name" in script
end_idx = data.find('"', idx)  # End of name

print(data[idx:end_idx])  # Output - no shit