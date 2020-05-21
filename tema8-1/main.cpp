#include <iostream>

using namespace std;

//void burbuja();void multmat();

void multmat(){
	int a[3][2];
	int b[2][3];
	int c[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j] = 0;
		}
	}

	a[0][0] = 1;a[1][0] = 0;a[2][0] = 1;a[0][1] = 0;a[1][1] = 1;a[2][1] = 2;
	b[0][0] = 3;b[1][0] = 5;b[0][1] = -1;b[1][1] = 0;b[0][2] = 2;b[1][2] = -1;

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<=2;k++){  // el error estaba aca k<2  debe ser k<=2
				c[j][i] += a[k][i] * b[j][k]; 
			}
		}
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"c["<<i<<"]["<<j<<"]:"<<c[i][j]<<endl;
		}
	}
}

void burbuja(){
	int num = 5;
	int a[] = {6,9,4,3,12};
    for (int i=0; i<num; i++)
        cout << a[i] << " , ";
    cout << endl; 
	for(int i=0;i<num-1;i++){
		for(int j=i+1;j<num;j++){
			cout<<i<<":"<<a[i]<<" - "<<j<<":"<<a[j]<<endl;	
			if(a[i]>a[j]){
				cout<<"cambio ";
				int tmp = a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<num;i++){
		cout<<i<<":"<<a[i]<<endl;
	}
}

int main(int argc, char** argv) {
	burbuja();
	multmat();
	return 0;
}

