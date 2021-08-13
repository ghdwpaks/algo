import copy as c

def selecting_move_target(selected) :
    global ban_list
    ban_list[selected] = 1
    print(selected,end=" ")
    for i in range(len(table[selected])) :
        if table[selected][i] == 1 and ban_list[i] == 0 :
                selecting_move_target(i)
                break
        
def printing_else(selected_list) :
    global ban_list
    for i in range(len(ban_list)) :
        if ban_list[i] == 0 and selected_list[i] == 1 :
            print(i,end=" ")
            pass
        
while True :

    table = [
    [0,0,1,1,0,1],
    [0,0,0,1,1,1],
    [0,0,0,0,1,1],
    [0,0,0,0,0,0],
    [1,0,0,0,0,1],
    [0,0,0,0,0,0]]
    ban_list = [0,0,0,0,0,0]
    selected = int(input("입력 :"))

    selecting_move_target(selected)
    printing_else(table[selected])
    print("\n\n")

    

