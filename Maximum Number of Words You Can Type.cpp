class Solution {
public:
    int canBeTypedWords(string text, string broken) 
    { 
        text.push_back(' ');
		int ret = 0;
		int b = 1;
		for (int i = 0; i < text.size(); i++) 
        {
			if (text[i] == ' ') {
				ret += b;
				b = 1;
                continue;
			}
			if (b == 0)
                continue; 
			for (int j = 0;j<broken.size();j++) 
            {
				if (text[i] == broken[j]) 
                {
					b = 0; 
                    break;
				}
			}
		}
		return ret;
    }
};
