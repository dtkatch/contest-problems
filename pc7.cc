// jie feng
#include <cmath>
#include <climits>
#include <queue>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>   
#include <iostream>  
#include <sstream>  // istringstream buffer(myString);
#include <stack>
#include <algorithm>
#include <cstring>
#include <cassert>
//#include <string>
using namespace std;
#define bit(x,i) (x&(1<<i))  //select the bit of position i of x
#define lowbit(x) ((x)&((x)^((x)-1))) //get the lowest bit of x
#define hBit(msb,n) asm("bsrl %1,%0" : "=r"(msb) : "r"(n)) //get the highest bit of x, maybe the fastest
#define max(a,b) (a<b?b:a)
#define abs(x) (x<0?(-x):x) // big bug here if "-x" is not surrounded by "()"
#define IN(i,l,r) (l<i&&i<r) //the next for are for checking bound
#define LINR(i,l,r) (l<=i&&i<=r)
#define LIN(i,l,r) (l<=i&&i<r)
#define INR(i,l,r) (l<i&&i<r)
#define F(i,L,R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)
#define getI(a) scanf("%d", &a) //next three are handy ways to get ints, it's also force you to use '&' sign
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define wez(n) int (n); scanf("%d",&(n)) //handy if the input is right after the definition of a variable
#define wez2(n,m) int (n),(m); scanf("%d %d",&(n),&(m))
#define wez3(n,m,k) int (n),(m),(k); scanf("%d %d %d",&(n),&(m),&(k))
#define TESTS wez(testow)while(testow--) //for multilple cases problems
#define whileZ int T; getI(T); while(T--) // the same as above
#define getS(x) scanf("%s", x) //get a char* string
#define clr(a,x) memset(a,x,sizeof(a)) //set elements of array to some value
#define char2Int(c) (c-'0')
#define lastEle(vec) vec[vec.size()-1] 
#define SZ(x) ((int)((x).size()))
#define REMAX(a,b) (a)=max((a),(b)) // set a to the maximum of a and b
#define REMIN(a,b) (a)=min((a),(b));
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++) // traverse an STL data structure
#define ALL(c) (c).begin(),(c).end() //handy for function like "sort()"
#define PRESENT(c,x) ((c).find(x) != (c).end()) 
#define CPRESENT(c,x) (find(ALL(c),x) != (c).end()) 
#define ll long long //data types used often, but you don't want to type them time by time
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define IOS ios_base::sync_with_stdio(0); //to synchronize the input of cin and scanf
//#define INF 1001001001
#define PI 3.1415926535897932384626
//for map, pair
#define mp make_pair
#define fi first
#define se second
// for debug
inline void pisz(int n) { printf("%d\n",n); }
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define printA(a,L,R) FE(i,L,R) cout << a[i] << (i==R?'\n':' ')
#define printV(a) printA(a,0,a.size()-1)
#define MAXN 10000
//for vectors
#define pb push_back
typedef int elem_t;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
//typedef pair<int,int> ii; 
// directions
const int fx[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
const int fxx[8][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};
template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){F(i,0,SZ(t))s<<t[i]<<" ";return s; }

// johnny ho
#define mp make_pair // useful for working with pairs
#define fi first
#define se second
//#define X real() // useful for working with #include <complex> for computational geometry
//#define Y imag()
// iteration macros: have advantage of auto-casting and not recomputing arguments
#define rep(i,n) for(int i=0, _##i=(n); i<_##i; ++i)
#define dwn(i,n) for(int i=(n); --i>=0; )
#define repr(i,l,r) for(int i=(l), _##i=(r); i<_##i; ++i)
#define dwnr(i,l,r) for(int i=(r), _##i=(l); --i>=_##i; )
#define repi(i,a) for(__typeof((a).begin()) i=(a).begin(), _##i=(a).end(); i!=_##i; ++i)
#define dwni(i,a) for(__typeof((a).rbegin()) i=(a).rbegin(), _##i=(a).rend(); i!=_##i; ++i)
// debug macro that prints out "expression: value" for clarity
#define debug(args...) do {cerr << #args << ": "; dbg,args; cerr << endl;} while(0)

// nikhil garg
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9
// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd
// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())

// dtkatch
#define ffz(i,n) for(ui i=0;i<=(n);i++)
#define ffo(i,n) for(ui i=1;i<=(n);i++)
#define fft(i,n) for(ui i=2;i<=(n);i++)
#define ffi(i,a,b) for(ui i=(a);i<=(b);i++)
#define max(a,b) (a<b?b:a)
#define min(a,b) (a>b?b:a)
#define dd double
#define ppn printf("\n");
inline void ppf(int n) { printf("%d\n",n); }
inline void pps(int n) { printf("%d ",n); }
inline void ppff(int a,int b,int c,int d) { printf("%d %d %d %d\n",a,b,c,d); }
int comp(const void *a, const void *b){ return *(int*)a - *(int*)b; }

// problem solution

// 8x8 +2 layer moat = **........** = 12x12
//                     012345678901
//                               11   

char b[10][10];
int ii,jj;

int main(){
    ffz(i,11)
        ffz(j,11)
            b[i][j]='*';
    ffo(d,-1){
        fft(i,9){
            fft(j,9){
                cin >> b[i][j];
                //cout << b[i][j];
            }
            //ppn;
        }
        fft(i,9)
            fft(j,9)
                if(b[i][j]!='.') goto analyze;
        return 0;
        analyze:
        cout << "Game #" << d << ": ";
        string s="no";
        fft(i,9)
            fft(j,9)
                switch(b[i][j]){
                    case 'Q': 
                        ii=i;
                        jj=j;
                        while(b[++ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        break;
                    case 'q': 
                        ii=i;
                        jj=j;
                        while(b[++ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        break;
                    case 'N': 
                        ii=i;
                        jj=j;
                        if(b[++++ii][++jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++++ii][--jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[----ii][++jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[----ii][--jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++ii][++++jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++ii][----jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[--ii][++++jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[--ii][----jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        break;
                    case 'n': 
                        ii=i;
                        jj=j;
                        if(b[++++ii][++jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++++ii][--jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[----ii][++jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[----ii][--jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++ii][++++jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++ii][----jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[--ii][++++jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[--ii][----jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        break;
                    case 'R': 
                        ii=i;
                        jj=j;
                        while(b[++ii][jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        break;
                    case 'r': 
                        ii=i;
                        jj=j;
                        while(b[++ii][jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        break;
                    case 'B': 
                        ii=i;
                        jj=j;
                        while(b[++ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][--jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][++jj]=='.');
                        if(b[ii][jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        break;
                    case 'b': 
                        ii=i;
                        jj=j;
                        while(b[++ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[++ii][--jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        while(b[--ii][++jj]=='.');
                        if(b[ii][jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        break;
                    case 'p': 
                        ii=i;
                        jj=j;
                        if(b[++ii][++jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[++ii][--jj]=='K'){
                            s="white";
                            goto finished;
                        }
                        break;
                    case 'P': 
                        ii=i;
                        jj=j;
                        if(b[--ii][++jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        ii=i;
                        jj=j;
                        if(b[--ii][--jj]=='k'){
                            s="black";
                            goto finished;
                        }
                        break;
                }
        finished:
        cout << s << " king is in check." << endl;
    }
}
