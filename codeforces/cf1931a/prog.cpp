#include <bits/stdc++.h>
using namespace std;
map<int,string> cb={{3,"aaa"},
{4,"aab"},
{5,"aac"},
{6,"aad"},
{7,"aae"},
{8,"aaf"},
{9,"aag"},
{10,"aah"},
{11,"aai"},
{12,"aaj"},
{13,"aak"},
{14,"aal"},
{15,"aam"},
{16,"aan"},
{17,"aao"},
{18,"aap"},
{19,"aaq"},
{20,"aar"},
{21,"aas"},
{22,"aat"},
{23,"aau"},
{24,"aav"},
{25,"aaw"},
{26,"aax"},
{27,"aay"},
{28,"aaz"},
{29,"abz"},
{30,"acz"},
{31,"adz"},
{32,"aez"},
{33,"afz"},
{34,"agz"},
{35,"ahz"},
{36,"aiz"},
{37,"ajz"},
{38,"akz"},
{39,"alz"},
{40,"amz"},
{41,"anz"},
{42,"aoz"},
{43,"apz"},
{44,"aqz"},
{45,"arz"},
{46,"asz"},
{47,"atz"},
{48,"auz"},
{49,"avz"},
{50,"awz"},
{51,"axz"},
{52,"ayz"},
{53,"azz"},
{54,"bzz"},
{55,"czz"},
{56,"dzz"},
{57,"ezz"},
{58,"fzz"},
{59,"gzz"},
{60,"hzz"},
{61,"izz"},
{62,"jzz"},
{63,"kzz"},
{64,"lzz"},
{65,"mzz"},
{66,"nzz"},
{67,"ozz"},
{68,"pzz"},
{69,"qzz"},
{70,"rzz"},
{71,"szz"},
{72,"tzz"},
{73,"uzz"},
{74,"vzz"},
{75,"wzz"},
{76,"xzz"},
{77,"yzz"},
{78,"zzz"}};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<cb[n]<<endl;
    }
    return 0;
}