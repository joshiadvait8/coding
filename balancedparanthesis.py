def is_matched(expression):
    stack = []
    for b in expression:
        if b in ['{', '[', '(']:
            stack.append(b)
        if b in ['}', ']', ')']:
            if len(stack) == 0:
                return False
            bp = stack.pop(-1);
            if bp == '[' and b != ']':
                return False
            if bp == '(' and b != ')':
                return False
            if bp == '{' and b != '}':
                return False
    if len(stack) > 0:
        return False
    return True

t = int(input().strip())
for a0 in range(t):
    expression = input().strip()
    if is_matched(expression) == True:
        print("YES")
    else:
        print("NO")
