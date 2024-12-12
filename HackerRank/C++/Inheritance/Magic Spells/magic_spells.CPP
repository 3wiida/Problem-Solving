void counterspell(Spell *spell) {
    if(dynamic_cast<Fireball*>(spell) != nullptr){
        Fireball* fb = dynamic_cast<Fireball*>(spell);
        fb->revealFirepower();
        delete fb;
    }else if(dynamic_cast<Frostbite*>(spell) != nullptr){
        Frostbite* fb = dynamic_cast<Frostbite*>(spell);
        fb->revealFrostpower();
        delete fb;
    }else if(dynamic_cast<Thunderstorm*>(spell) != nullptr){
        Thunderstorm* ts = dynamic_cast<Thunderstorm*>(spell);
        ts->revealThunderpower();
        delete ts;
    }else if(dynamic_cast<Waterbolt*>(spell) != nullptr){
        Waterbolt* wb = dynamic_cast<Waterbolt*>(spell);
        wb->revealWaterpower();
        delete wb;
    }else{
        string spellContent = spell->revealScrollName();
        string journal = SpellJournal::read();
        
        int n = spellContent.size(), m = journal.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (spellContent[i - 1] == journal[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        cout<<dp[n][m]<<endl;
    }
}