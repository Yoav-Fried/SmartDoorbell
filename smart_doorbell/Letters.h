int A[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,1,1,1,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int B[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,0,0,0,
};

int C[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,1,0,0,
  0,1,0,0,0,0,1,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,1,0,
  0,0,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int D[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,0,1,0,
  0,1,0,0,0,0,1,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int E[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,1,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int F[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,1,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int G[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,1,0,0,
  0,1,0,0,0,0,1,0,
  0,1,0,0,0,0,0,0,
  0,1,0,1,1,1,0,0,
  0,1,0,0,0,0,1,0,
  0,0,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int H[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int I[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,1,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int J[64] = {
  0,0,0,0,0,0,0,0,
  0,0,0,0,1,1,1,0,
  0,0,0,0,0,1,0,0,
  0,0,0,0,0,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,1,0,0,1,0,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int K[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,0,0,1,0,0,
  0,0,1,0,1,0,0,0,
  0,0,1,1,0,0,0,0,
  0,0,1,1,0,0,0,0,
  0,0,1,0,1,0,0,0,
  0,0,1,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int L[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int M[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,0,1,1,0,0,
  0,1,0,1,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int N[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,0,0,1,0,0,
  0,1,0,1,0,1,0,0,
  0,1,0,0,1,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int O[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,1,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int P[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int Q[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,1,0,0,0,
  0,0,1,1,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int R[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,1,1,1,0,0,0,
  0,1,0,1,0,0,0,0,
  0,1,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int S[64] = {
  0,0,0,0,0,0,0,0,
  0,0,0,1,1,0,0,0,
  0,0,1,0,0,1,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,1,0,0,0,
  0,0,1,0,0,1,0,0,
  0,0,0,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int T[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int U[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,1,1,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

int V[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,1,0,1,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int W[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,0,0,1,0,0,
  0,1,0,1,0,1,0,0,
  0,1,1,0,1,1,0,0,
  0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
};

int X[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,0,1,0,1,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,1,0,1,0,0,0,
  0,1,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int Y[64] = {
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,0,
  0,0,1,0,1,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int Z[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,0,0,0,0,1,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,1,0,0,0,0,
  0,0,1,0,0,0,0,0,
  0,1,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int HI[64] = {
  0,0,0,0,0,0,0,0,
  1,0,0,1,0,1,1,1,
  1,0,0,1,0,0,1,0,
  1,1,1,1,0,0,1,0,
  1,0,0,1,0,0,1,0,
  1,0,0,1,0,1,1,1,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
};

int SMILEY[64] = {
  0,0,0,0,0,0,0,0,
  0,1,1,0,0,1,1,0,
  0,1,1,0,0,1,1,0,
  0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,1,0,
  0,1,0,0,0,0,1,0,
  0,0,1,1,1,1,0,0,
  0,0,0,0,0,0,0,0,
};

int HEART[64] = {
  0,0,0,0,0,0,0,0,
  0,0,1,1,0,1,1,0,
  0,1,1,1,1,1,1,1,
  0,1,1,1,1,1,1,1,
  0,0,1,1,1,1,1,0,
  0,0,0,1,1,1,0,0,
  0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,
};

std::map<char, int*> letter_mapping;
void populate_letter_mapping() {
  letter_mapping['A'] = A;
  letter_mapping['B'] = B;
  letter_mapping['C'] = C;
  letter_mapping['D'] = D;
  letter_mapping['E'] = E;
  letter_mapping['F'] = F;
  letter_mapping['G'] = G;
  letter_mapping['H'] = H;
  letter_mapping['I'] = I;
  letter_mapping['J'] = J;
  letter_mapping['K'] = K;
  letter_mapping['L'] = L;
  letter_mapping['M'] = M;
  letter_mapping['N'] = N;
  letter_mapping['O'] = O;
  letter_mapping['P'] = P;
  letter_mapping['Q'] = Q;
  letter_mapping['R'] = R;
  letter_mapping['S'] = S;
  letter_mapping['T'] = T;
  letter_mapping['U'] = U;
  letter_mapping['V'] = V;
  letter_mapping['W'] = W;
  letter_mapping['X'] = X;
  letter_mapping['Y'] = Y;
  letter_mapping['Z'] = Z;
}
