public static void deleteDups(LinkedListNode n) {
  Hashtable table = new Hashtable();
  while ( n != null ) {
    if ( table.containsKey(n.data)) {
      previous.next = n.next;
    } else {
      table.put(n.data, true);
      previous = n;
    }
    n = n.next;
  }
}
