public class MyLinkedList {
	static Node head = null;
	
	void addBeg(int data) {
		Node toAdd = new Node(data);
		if(head == null) {
			head = toAdd;
		} else {
			toAdd.next = head;
			head = toAdd;
		}
	}
	
	void print() {
		Node temp = head;
		if(temp == null) {
			System.out.println("Linked List is Empty");
		} else {
			while(temp != null) {
				System.out.print(temp.data + " ");
				temp = temp.next;
			}
		}
	}
	
	int removeBeg() throws Exception{
		int data;
		if(head == null) {
			throw new Exception("Can no remove from list");
		} else {
			data = head.data;
			head = head.next;
		}
		return data;
	}
	
	int removeLast() throws Exception {
		int data;
		if(head == null) {
			throw new Exception("List is Empty, Can not remove from last");
		} else {
			Node temp = head;
			while(temp.next.next != null) {
				temp = temp.next;
			}
			data = temp.data;
			temp.next = null;
		}
		return data;
	}
	
}


class Node {
	int data;
	Node next;
	Node(int data){
		this.data = data;
		next = null;
	}
}
