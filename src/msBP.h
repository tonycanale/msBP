struct bintree *computeprob(struct bintree * Stree, struct bintree * Rtree, double a, double b, int maxS, int trunc);
struct bintree *computeprob_shrink(struct bintree * Stree, struct bintree * Rtree, double a, double b, int maxS, double thresh);
void dmsBP(struct bintree *weights, double * out, double * grid, int * ngrid);
void pmsBP(struct bintree *weights, double * out, double * grid, int * ngrid, int *log_p);
void marginalBeta(double * out, double y, int maxscale);
struct bintree *rStree (double a, int maxS);
struct bintree *rRtree (double b, int maxS);
double rsample_msBP(struct bintree * Rtree, struct bintree * Stree, int a, int b);
struct bintree * path(struct bintree * tree, int si, int hi);
struct bintree * wentright(struct bintree * tree, int si, int hi);
struct bintree * whichnode(struct bintree * tree, int si, int hi);
void whichnode2(struct bintree * tree, int *s, int *h, int maxS, int N);
int sampleC(double *p, int k);
void sampleTree(struct bintree *p, int maxS, int *res);
void scaleProb(struct bintree *pi, double *save);
void allTrees(int *s, int *h, int maxS, int N, struct bintree * n, struct bintree * r, struct bintree * v);