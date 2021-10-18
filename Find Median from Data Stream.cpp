class MedianFinder 
{
  public:
    MedianFinder()
    {
       count = 0;
    }
    void addNum(int num) 
    {
        if (count%2==0)
        {
            if (minHeap.empty())
                 minHeap.push(num);
            else
            {
                if (num <= maxHeap.top())
                {
                    maxHeap.push(num);
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                }
                else 
                    minHeap.push(num);
            }
        }
        else
        {
            if (num>=minHeap.top())
            {
                minHeap.push(num);
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
            else
                maxHeap.push(num);
        }
        count ++;
    }
    double findMedian() 
    {
        return count%2==0?double(minHeap.top()+maxHeap.top())/2:minHeap.top();
    }
private:
    priority_queue<int>maxHeap;
    priority_queue<int, vector<int>,std::greater<int> >  minHeap;
    int count;
};
