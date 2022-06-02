
class Node:

    def __init__(self, data):
        self.data = data
        self.next = None #initialise next as Null
    
class LinkedList:
    
    def __init__(self):
        self.head=None
    
    def printList(self):
        print("-----------------------------------")
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
    
    def insertAtFront(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
    def insertAfterGivenNode(self, previousNode, data):
        if previousNode is None :
            print("previous Node must exist")
            return
        new_node = Node(data)
        new_node.next = previousNode.next
        previousNode.next = new_node
    def insertAtEnd(self, data):
        new_node = Node(data)
        if self.head is None:      #self.head refers to the head Node
            self.head = new_node
            return
        temp = self.head
        while temp.next is not None :
            temp = temp.next
        temp.next = new_node

if __name__=='__main__':
    llist = LinkedList()
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second
    second.next = third

    llist.printList()

    llist.insertAtFront(45)
    llist.printList()

    #print(llist.head, llist.head.next, llist.head.next.next)
    llist.insertAfterGivenNode(llist.head.next.next, 69)
    llist.printList()

    llist.insertAtEnd(96)
    llist.insertAtEnd(969)
    llist.printList()
