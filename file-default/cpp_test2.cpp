int main()
{
    int x = 1;
    int y = 1;
    int z = 0;
    
    z = x + y;
    
    if (z > 5)
    {
        console.writeln("This is huge wtf");
    }
    else
    {
        squared(z);
        console.writln(z);
    }
}

int square(int i)
{
    int squared = 0;
    
    squared = i * i;
    return squared;
}