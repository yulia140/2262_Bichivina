def sublist(lst, *args):
    res =[]

    for index in args:
        res.append(lst[index])

    return res
    lst = [ 'Anna', 'Barbara', 'Clara', 'Diana', 'Eva', 'Flora']
    print(sublist(lst, 0, 2, 5))
    print(sublist (lst))
    print (sublist(lst, 0, 1, 2, 3, 4, 5))
