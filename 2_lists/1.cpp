#include <iostream>
#include <cstring>

using namespace std;
//  1. Create
//  2. insert
//    2.1 insert_front O(1)
//    2.2 insert_after O(1)
//    2.3 insert_before O(N)
//  3. delete O(N)
//  4. find O(N)

struct list_data {
  const char *name;
  double dvalue;
};

struct double_list {
  list_data data;
  double_list *next;
  double_list *prev;
};

bool equal(list_data const &left, list_data const &right){
  return left.dvalue == right.dvalue && strcmp(left.name, right.name) == 0; //TODO: use strcmp for char*
}

void free_data(list_data &data){
  //
}

double_list *create_node(list_data data) {
  auto node = new double_list;
  node->data = data;
  node->next = nullptr;
  node->prev = nullptr;
  return node;
}

double_list *insert_front(double_list *head, double_list *node) {
  if (head == nullptr){
      node->prev = node;
      node->next = node;
  }
  else if (head->next == head){
      head->next = node;
      head->prev = node;
      node->prev = head;
      node->next = head;
  }
  else{
      node->next = head;
      node->prev = head->prev;
      head->prev->next = node;
      head->prev = node;
  }
  return node;
}

double_list *insert_after(double_list *after, double_list *node) {
  node->next = after->next;
  node->prev = after;
  after->next->prev = node;
  after->next = node;
  return node;
}

double_list *insert_before(double_list *before, double_list *node) {
  node->next = before;
  node->prev = before->prev;
  before->prev->next = node;
  before->prev = node;
  return node;
}

double_list* find(double_list* head, list_data data){
  auto it = head;
  while (it != nullptr && !equal(it->data, data)){
    it = it->next;
  }
  return it;
}

void print_list(double_list const *head) {
  auto it = head;
  cout << it->data.name << " " << it->data.dvalue << endl;
  it = it->next;
  while (it != head) {
    cout << it->data.name << " " << it->data.dvalue << endl;
    it = it->next;
  }
}

double_list* delete_node(double_list *head, double_list *node){
  if (head == node){
    auto next_head = head->next;
    free_data(node->data);
    delete node;
    return next_head;
  }

  auto it = head;
  while (it != nullptr && it->next != node){
    it = it->next;
  }
  if (it == nullptr){
    cerr << "Wrong node for delete!\n";
    exit(-10);
  }
  it->next = node->next;

  free_data(node->data);
  delete node;
  return head;
}

int main() {
  double_list *head = nullptr;

  double_list *nodes = new double_list [50];

  auto node_1 = create_node({"Pi", 3.14});
  auto node_2 = create_node({"E", 2.7});

  head = insert_front(head, node_2);
  head = insert_front(head, node_1);

  auto node_3 = create_node({"g", 9.8});
  insert_after(node_1, node_3);

  auto node_4 = create_node({"hbar", 6.63e-31});
  insert_before(node_3, node_4);

  cout << find(head, {"g", 9.8})->prev->data.name << endl;

  print_list(head);

  cout << "-------------------\n";
  print_list(head);

  return 0;
}


