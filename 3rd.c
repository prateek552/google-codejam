import java.util.Scanner;

public class q3 {
	public static void main(String[] args) {
		int N=0;
		Byte a[];
		int i=0,j=0,max=0,ls=0,rs=0;
		int k=1;
		int K=0;
		int left=0,right=0;
		int tt=1;
		int TT=0;
		 Scanner sc = new Scanner(System.in);
	     TT = sc.nextInt();
		while(tt<=TT){
			k=1;
			N = sc.nextInt();
			K = sc.nextInt();
		a=new Byte[N+2];
		a[0]=1;
		for(i=1;i<N+1;++i)
			a[i]=0;
		a[i]=1;

		while(k<=K){
			max=0;
			for(i=0;i<N+1;++i){
				if(a[i]==1){
					ls=i;
					for(j=i+1;j<N+2;++j)
						if(a[j]==1){
							rs=j;
						break;
						}
				}
				if((j-i)>max)
					max=j-i;
			}
			for(i=0;i<N+1;++i){
				if(a[i]==1)
					ls=i;
				for(j=i+1;j<N+2;++j){
					if(a[j]==1){
						rs=j;
						break;
					}
				}
				if(j-i==max)
					break;
			}

		a[(ls+rs)/2]=1;
		++k;
		}// while k times
		left = ((ls + rs)/2-ls)-1;
		right = (rs-(ls+rs)/2)-1;
		System.out.println("Case #"+tt+": "+Math.max(left,right)+" "+Math.min(left, right));
		++tt;
		}
	}
}
