ll n, m;
    cin >> n >> m;
 
    char s[n][m];
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> s[i][j];
 
    string name = "vika";
    ll ind = 0, count = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char curr = s[j][i];
            if (curr == name[ind])
            {
                ind++;
                count++;
                break;
            }
        }
 
        if (count == 4)
            break;
    }
 
    if (count == 4)
        cout << "Yes\n";
    else
        cout << "No\n";