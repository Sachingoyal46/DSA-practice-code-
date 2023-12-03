def solve(user_input, d):
    from collections import deque

    def process_operations(operations):
        result = []
        dq = deque()

        for operation in operations:
            op, *args = operation.split()

            if op == 'PUSH':
                dq.append(int(args[0]))
            elif op == 'POP':
                popped_element = dq.pop() if dq else 'Empty'
                if popped_element != 'Empty':
                    result.append(str(popped_element))
            elif op == 'INJECT':
                dq.appendleft(int(args[0]))
            elif op == 'EJECT':
                popped_element = dq.popleft() if dq else 'Empty'
                if popped_element != 'Empty':
                    result.append(str(popped_element))
            elif op == 'SHOW':
                break

        return result

    # Process operations and return the result
    return process_operations(user_input)

# Example usage:
user_input = ["PUSH 5", "PUSH 11", "SHOW"]
result = solve(user_input, d)
print(' '.join(result))
