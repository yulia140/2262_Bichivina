from string import ascii_lowercase

s = input().strip()

most_frequent_char = max(ascii_lowercase, key=s.count)

result = s.replace(most_frequent_char, '')

print(result)