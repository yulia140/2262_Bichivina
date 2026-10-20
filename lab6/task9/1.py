import string

current_value = 1

for letter in string.ascii_lowercase:
    for number in range(100):
        var_name = f"{letter}{number}"
        # Создаем реальную глобальную переменную
        globals()[var_name] = current_value 
        current_value += 1

# Теперь к ним можно обращаться напрямую по имени
print(a0)   # 1
print(a99)  # 100
print(b0)   # 101
print(z99)  # 2600