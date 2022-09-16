struct locations
{
        char* tag;
        char* description;
};

struct locations windfang;
void initializeWindfang()
{
        windfang.tag = "windfang";
        windfang.description = "first room of the house";
};



char* getLocation()
{
        return windfang.description;
};
