import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    trump = input_data[0]
    n = int(input_data[1])
    
    # Задаем старшинство карт от младшей к старшей
    ranks = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]
    
    results = []
    
    idx = 2
    for _ in range(n):
        attack_rank = input_data[idx]
        attack_suit = input_data[idx+1]
        defend_rank = input_data[idx+2]
        defend_suit = input_data[idx+3]
        idx += 4
        
        is_beat = False
        
        # Получаем индексы (силу) карт
        attack_power = ranks.index(attack_rank)
        defend_power = ranks.index(defend_rank)
        
        if attack_suit == defend_suit:
            # Если масти одинаковые, отбивающая должна быть строго старше
            if defend_power > attack_power:
                is_beat = True
        else:
            # Если масти разные, отбить можно только козырем
            if defend_suit == trump:
                is_beat = True
                
        results.append("1" if is_beat else "0")
            
    print(" ".join(results))

if __name__ == '__main__':
    solve()