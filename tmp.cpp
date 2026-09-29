#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
	struct LimitedStreambuf : std::streambuf {
		std::streambuf* orig; size_t limit,count;
		LimitedStreambuf(std::streambuf* o, size_t l):orig(o),limit(l),count(0){}        
		std::streambuf::int_type overflow(std::streambuf::int_type c)override{
			if(count++>=limit)return EOF;
			return orig->sputc(c);
		}    
		std::streamsize xsputn(const char* s,std::streamsize n)override{
			if(count>=limit)return 0;
			n=std::min(static_cast<std::streamsize>(limit-count),n),count+=n;
			return orig->sputn(s,n);
		}
	};
#endif
	
#define int                         long long
#define fastio                      ios::sync_with_stdio(false); cin.tie(nullptr)

typedef pair<int,int>               pint;
typedef long long                   ll;    typedef unsigned long long          ull;
typedef double                      db;    typedef long double                 ld;
typedef uint32_t                    u32;   typedef vector<long long>           vll;
typedef vector<int>                 vint;  typedef vector<unsigned long long>  vull;
typedef vector<double>              vdb;   typedef vector<long double>         vld;
typedef vector<vector<int>>         v2d;   typedef vector<pair<int,int>>       vpr;

#define pb                          push_back
#define vin(_v,_n)                  vint _v(_n);for(auto &_a:_v)cin>>_a;
#define vinr(_v,_l,_r)              for(int _a=_l;_a<=_r;_a++)cin>>_v[_a];
#define vout(_v)                    for(int _a=0;_a<_v.size();_a++)cout<<_v[_a]<<' ';cout<<'\n';
#define voutr(_v,_l,_r)             for(int _a=_l;_a<=_r;_a++)cout<<_v[_a]<<' ';cout<<'\n';
#define fr(_a,aval,_n)              for(int _a=aval;_a<_n;_a++)
#define frv(_a,aval,endval)         for(int _a=aval;_a>=endval;_a--)
#define all(_v)                     _v.begin(),_v.end()

int32_t main(){		
	#ifdef ONLINE_JUDGE 
		fastio;	
	#endif	
	#ifndef ONLINE_JUDGE		
		freopen("read.in", "r", stdin);
		freopen("read.out", "w", stdout);
		static LimitedStreambuf limiter(cout.rdbuf(),2*1024*1024);cout.rdbuf(&limiter);
	#endif						
	// int tcc;tcc=1;	
	int tcc;cin>>tcc;
	for(int ttt=1;ttt<=tcc;ttt++){
		#ifndef ONLINE_JUDGE
			cout<<"Testcase : "<<ttt<<'\n';			
		#endif
		//---------------------------------------------------------------------------------------//	
		
		//---------------------------------------------------------------------------------------//
		#ifndef ONLINE_JUDGE		
		//---------------------------------------------------------------------------------------//
		//---------------------------------------------------------------------------------------//
		cout<<'\n';
		#endif
	}
	return 0;
}