 //将堆根节点元素取出，并将堆元素重新排序
ElementType Delete(MinHeap H)
{
  int parent=0,child=0;
  ElementType item,temp;

  //判断堆是否已经空了
  if (IsEmpty(H))
  {
    printf("Heap is Empty\n");
    return H->Element[0];
  }

  /*
  堆没有空，将根节点返回，最后一个叶子节点放到根节点位置，然后比较它与它的左右子节点中最小
  节点的大小，如果它比较大，则将它和它的较小的子节点互换位置，重复此过程，直至他比两个子节点
  都小或者它不在有子节点
  */
  item = H->Element[1];
  temp = H->Element[H->Size];
  H->Size--;
  for (parent = 1; parent *2 <= H->Size; parent = child)
  {
    child = parent *2;
    //找出左右子节点最小的那个
    if (child != H->Size && (H->Element[child] > H->Element[child + 1]))
    {
      child++;
    }
    //比较它与最小的子节点的大小，如果它比较大，则两者互换位置，否则跳出循环
    if (temp > H->Element[child])
    {
      H->Element[parent] = H->Element[child];
    }
    else
    {
      break;
    }
  }
  H->Element[parent] = temp;
  return item;
}
