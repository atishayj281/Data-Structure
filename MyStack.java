public class MyStack extends MyLinkedList {
	int top = -1;
	MyLinkedList ll = new MyLinkedList();
	void push(int data) {
		
		ll.addBeg(data);
		top++;
	}
	
	int pop() throws Exception {
		int data = ll.removeBeg();
		top--;
		return data;
	}
	
	void peek() {
		int temp = 0;
		if(top == -1) {
			System.out.println("Stack is Empty");
			return;
		}
		Node n = head;
		while(temp != top) {
			n = n.next;
			temp++;
		}
		System.out.println(n.data);
	}
}
