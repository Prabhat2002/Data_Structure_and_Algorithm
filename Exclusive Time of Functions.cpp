class Solution 
{
 public:
    vector<int> exclusiveTime(int n, vector<string>& logs) 
    {
        vector<int>time_slots(n,0);
        stack<int>prev_id;
        int prev_ts=0;
        for(string cur: logs) 
        {
            int id, state, ts;
            parse_log(cur, id, state, ts);
            if (state == 0) 
            {
                if (!prev_id.empty()) 
                    time_slots[prev_id.top()] += ts - prev_ts;
                prev_id.push(id);
            } 
            else 
            {
                ts++;
                time_slots[id] += ts - prev_ts;
                prev_id.pop();
            }
            prev_ts = ts;
        }
        
        return time_slots;
    }
private:
    void parse_log(string &log, int &id, int &state, int &ts)
    {
        int id_size = log.find(":");
        int state_size = log.find(":", id_size + 1) - id_size - 1;
        id = stoi(log.substr(0, id_size));
        state = (state_size == 5) ? 0: 1;
        ts = stoi(log.substr(log.find(":", id_size + 1) + 1));
    }
};
