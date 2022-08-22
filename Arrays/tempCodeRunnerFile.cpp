int q = queries.size();
    int n = strings.size();
    vector<int> result(q);
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (strings[j] == queries[i])
                result[i]++;
        }
    }

    return result;