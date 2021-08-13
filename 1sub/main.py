import copy as c



def selecting_move_target(selected) :
    global ban_list
    ban_list[selected] = 1
    print(selected,end=" ")
    selected_list = c.deepcopy(table[selected])
    for i in range(len(selected_list)) :
        if selected_list[i] == 1 :
            if ban_list[i] == 0 :
                res = selecting_move_target(i)
                if res == 999 :
                    break
        if i == len(selected_list)-1 :
            break
    return 999
        
def printing_else(selected_list) :
    global ban_list
    for i in range(len(ban_list)) :
        if ban_list[i] == 0 and selected_list[i] == 1 :
            print(i,end=" ")
            pass
        


table = [
[0,0,1,1,0,1],
[0,0,0,1,1,1],
[0,0,0,0,1,1],
[0,0,0,0,0,0],
[1,0,0,0,0,1],
[0,0,0,0,0,0]]
ban_list = []
for i in range(len(table)) :
    ban_list.append(0)

selected = int(input("입력 :"))

selecting_move_target(selected)
printing_else(table[selected])

    

