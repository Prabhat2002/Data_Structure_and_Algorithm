  long long toh(int n, int from, int to, int aux) 
    {
        long long int count=1;
        if (n == 1)
        {
           cout<<"move disk " <<n<<" from rod "<< from <<" to rod "<<to<< endl;     
           return 1;
        }
        count+=toh(n-1,from,aux,to);
        cout << "move disk " <<n<<" from rod "<< from <<" to rod "<<to<< endl;
        count+=toh(n-1,aux,to,from);
        return count;
    }
