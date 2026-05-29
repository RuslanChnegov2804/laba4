import pytest
from stack import Stack

def test_push_pop():
    s = Stack()
    s.push(10)
    s.push(20)
    assert s.size() == 2
    assert s.pop() == 20
    assert s.top() == 10

def test_empty_operations():
    s = Stack()
    assert s.is_empty()
    assert s.pop() is None
    assert s.top() is None
    assert s.size() == 0

def test_clear():
    s = Stack()
    s.push(5)
    s.clear()
    assert s.is_empty()
    assert s.size() == 0