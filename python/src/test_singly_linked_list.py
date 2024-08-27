from singly_linked_list import SinglyLinkedList


def test_singyl_list(capfd):
    sll = SinglyLinkedList()
    assert len(sll) == 0

    sll.insert_head(2)
    sll.insert_head(3)

    assert len(sll) == 2

    sll.print()
    out, err = capfd.readouterr()
    assert out == "3 -> 2\n"
    assert err == ""
