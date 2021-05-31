// implementing linked list - class (2 attributes - data, reference to other node)

class Node {
  constructor(data) {
    this.data = data;
    this.link = null;
  }

  getData() {
    return this.data;
  }

  getLink() {
    return this.link;
  }

  setLink(node) {
    this.link = node;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  getHead() {
    return this.head;
  }

  setHead(node) {
    this.head = node;
  }

  addNode(data) {
    const node = new Node(data);
    let curr = this.head;
    if (!curr) {
      this.setHead(node);
    } else {
      while (curr.getLink()) {
        curr = curr.getLink();
      }
      curr.setLink(node);
    }
  }

  printList() {
    let curr = this.head;
    let str = ``;
    if (!curr) {
      console.log("List is empty!");
    } else {
      while (curr.getLink()) {
        str += `${curr.getData()} --> `;
        curr = curr.getLink();
      }
      str += `${curr.getData()}`;
      console.log(str);
    }
  }
}

const list = new LinkedList();
list.addNode(1);
list.addNode(5);
list.addNode(11);
list.addNode(50);

console.log(list.getHead());

list.printList();
