class Stack:
    def __init__(self):
        self._data = []

    def push(self, val: int):
        self._data.append(val)

    def pop(self):
        return self._data.pop() if self._data else None

    def top(self):
        return self._data[-1] if self._data else None

    def size(self) -> int:
        return len(self._data)

    def is_empty(self) -> bool:
        return len(self._data) == 0

    def clear(self):
        self._data.clear()