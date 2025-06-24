

void registerCandidates() {
    setColor(14); // Yellow
    printf("\nEnter number of candidates (max %d): ", MAX_CANDIDATES);
    scanf("%d", &candidateCount);
    clearInputBuffer();

    if (candidateCount < 1 || candidateCount > MAX_CANDIDATES) {
        setColor(12);
        printf("Invalid number of candidates.\n");
        exit(1);
    }

    for (int i = 0; i < candidateCount; i++) {
        setColor(10); // Green
        printf("Enter name of candidate %d: ", i + 1);
        fgets(candidates[i].name, NAME_LEN, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = 0;
        candidates[i].votes = 0;
    }
    setColor(7);
}

void registerVoters() {
    setColor(14); // Yellow
    printf("\nEnter number of voters (max %d): ", MAX_VOTERS);
    scanf("%d", &voterCount);
    clearInputBuffer();
