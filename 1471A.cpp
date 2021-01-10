#include <bits/stdc++.h>
#include<cmath>
#include<vector>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define ll long long
#define ld long double
#define ft first
#define sd second
#define pie acos(-1)
using namespace std;
 
ll fact[100], MI[100];
ll max(ll a,ll b){ return (a>b)?a:b; }
ll min(ll a,ll b){ return (a>b)?b:a; }
ll lcm(ll a,ll b){ return (a*b)/__gcd(a,b); }
ll gid(ll a,ll b){ if(a<0) return (a-(b+ a%b)); return (a- (a%b)); } //greatest int div or HCF
ll lid(ll a,ll b){ if(a<0) return(a- (a%b)); if(a%b==0) return a; else return (a+ (b- a%b)); } //least int div
void EEA(ll a,ll m,ll &x,ll &y){ if(a==1){ x=1; y=0; return; } ll x1,y1; EEA(m%a,a,x1,y1); x=y1 - (m/a)*x1; y=x1; } //extend euclid theorum
ll mod_inverse(ll a,ll m){ if(__gcd(a,m)!=1) return -1; ll x,y; EEA(a,m,x,y); x=(x%m + m)%m; return x; }  // if m and a are coprime.
ll power(ll x,ll y,ll m){ if(y==0) return 1; ll p=power(x,y/2,m); if(y%2==0) return (p*p)%m; else return (((p*p)%m)*x)%m; } 
ll inverse(ll a,ll m){  return power(a,m-2,m); }  // if m is prime. 
ll ncr(ll n,ll r,ll m){ if((n<0) || (r<0) || (n<r)) return 0; return ((((fact[n] * MI[r]) % m ) * MI[n-r] ) % m); }
ll sum(ll n){ return (n*(n+1))/2; }
bool sec(pair<ll,ll> &a, pair<ll,ll> &b){ return a.sd < b.sd; }
bool great(pair<ll,ll> &a, pair<ll,ll> &b){ return (a.ft > b.ft); }
void swap(ll &a,ll &b){ ll c; c=a; a=b; b=c; return; }
ll checkprime(ll a){ ll i,b=0; for(i=2;i*i<=a;i++){ if(a%i==0) return 0; } return 1; }
ll sum_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a+=(i%10);} return a; }
ll num_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a++;} return a; }
void dec_digit(ll n,ll b[]){ ll a=0,i; for(i=n;i>0;i=i/10,a++) b[a]=i%10;  }
ll first_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a=i%10;} return a; }
ll mex(vector<ll> a,ll n){ ll i; set<ll> s; for(auto it : a)  s.insert(it); for(i=0;i<=n;i++){ if(s.find(i)==s.end()) return i; } }
void add(ll a[],ll n,ll i,ll x){ ll j; for(j=i;j<=n;j+=j&-j) a[j]+=x; }
ll get(ll a[],ll i){ ll x=0,j; for(j=i;j>0;j-=j&-j) x+=a[j]; return x; }
ll flip(ll k){ if(k==0) return 1; return 0; }
bool checksum(vector<ll> a,ll sum){ ll i,j,n=a.size(); bool b[n+1][sum+1];  for(i=0;i<=n;i++) b[i][0]=true;  for(i=1;i<=sum;i++) b[0][i]=false;  for(i=1;i<=n;i++){  for(j=1;j<=sum;j++){  if(j<a[i-1]) b[i][j]=b[i-1][j];  else b[i][j]=b[i-1][j] || b[i-1][j-a[i-1]]; } }  return b[n][sum]; } 
 
int main()
{
ll t;
cin>>t;
while(t--){
    ll n;double x;
    cin>>n>>x;
    vector<double> arr(n);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    double sum=0;
    ll sum1=0;
    ll sum2=0;
    for(double i:arr){
    sum2+=ceil(i/x);
    sum+=i;
    }
    sum1=ceil(sum/x);
    cout<<sum1<<" "<<sum2<<endl;
}
}
