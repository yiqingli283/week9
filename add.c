//将元素item插入堆H
void Insert(int H,int item)
{
  int i = 0;

  //判断堆H是否已满
  if (IsFull(H))
  {
    printf("Heap is full\n");
    return;
  }

  /*
  如果H未满，将item放入堆最后一个元素，查看它的父节点，如果它的父节点比它大，将它和它的父节点互换位置，
  循环此过程，直至它的父节点小于它。可能它比所有它的父节点都要小，但是一定会比哨兵大（数组中下标为0的位置），
  所以一定最后它的下标一定大于哨兵的下标0。这就是哨兵的意义。
  */
  H->Size++;
  for (i = H->Size; H->Element[i / 2] > item; i = i / 2)
  {
    H->Element[i] = H->Element[i / 2];
  }
  H->Element[i] = item;
}