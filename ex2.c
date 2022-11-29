#define MAX 15

int fusion(int t1[],int t2[],int t3[MAX],int n1,int n2)
{
    int i=0;
    int j=0;
    int k=0;
    while(i < n1 && j < n2){
    if(t1[i] < t2[j]){
    t3[k++] = t1[i++];
    };
    else{
    t3[k++] = t2[j++];
    };
    };
    while(i<n1){
    t3[k++]=t1[i++];
    };
    while(j<n2){
    t3[k++]=t2[j++];
    };
return k;
};
