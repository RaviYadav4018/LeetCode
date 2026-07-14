class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        string sh=startTime.substr(0,2);
        string sm=startTime.substr(3,2);
        string ss=startTime.substr(6,2);
        string  eh=endTime.substr(0,2);
        string  em=endTime.substr(3,2);
        string  es=endTime.substr(6,2);
        int totalsec=0;
        int hd=stoi(eh)-stoi(sh);
        int md=stoi(em)-stoi(sm);
        int sd=stoi(es)-stoi(ss);
        totalsec=hd*60*60+md*60+sd;
        return totalsec;
    }
};