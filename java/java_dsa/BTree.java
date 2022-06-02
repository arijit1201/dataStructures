import java.util.*;
class Node {
    int data;
    Node left, right;
    public Node(int data)
    {
        this.data = data;
        left=right=null;
    }
}
class BinaryTree{
    Node root;
    BinaryTree(int key)
    {
        this.root = new Node(key);
    }
    BinaryTree()
    {
        this.root=null;
    }

    public void recursiveInorderTraversal(Node root)
    {
        if(Objects.isNull(root))
            return;
        recursiveInorderTraversal(root.left);
        System.out.print(root.data+" ");
        recursiveInorderTraversal(root.right);
        
    }
    public void recursivePreorderTraversal(Node root)
    {
        if(Objects.isNull(root))
            return;
        System.out.print(root.data+" ");
        recursivePreorderTraversal(root.left);
        recursivePreorderTraversal(root.right);
        
    }
    public void recursivePostorderTraversal(Node root)
    {
        if(Objects.isNull(root))
            return;
        recursivePostorderTraversal(root.left);
        recursivePostorderTraversal(root.right);
        System.out.print(root.data+" ");

        
    }
}


class BTree {

    public static void main(String...args)
    {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.recursiveInorderTraversal(tree.root);
        System.out.println("-------------In Order Traversal-------------");
        tree.recursivePreorderTraversal(tree.root);
        System.out.println("-------------Pre Order Traversal-------------");
        tree.recursivePostorderTraversal(tree.root);
        System.out.println("-------------Post Order Traversal-------------");
    }
}