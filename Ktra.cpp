//MSSV: 110124013
//Ho ten: Kiên Trung Chiêsn
//Lop: DA24TTA
#include<stdio.h>
#define thoi_gian_hoc_tap_trong_tuan 7
void thoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan]);
void inrathoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan]);
int tinhtongsogiohoctap(float hours[thoi_gian_hoc_tap_trong_tuan]);
void phantichthoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan]);
void phantichsongay(float hours[], float goal);
int main() {
    float studyHours[thoi_gian_hoc_tap_trong_tuan];
	float goal;
	
	thoigianhoctap(studyHours);
    printf("\nNhap x: ");
	scanf("%f",&goal);
	inrathoigianhoctap(studyHours);
    tinhtongsogiohoctap(studyHours);
	phantichthoigianhoctap(studyHours); 
	phantichsongay(studyHours,goal);
	
	return 0;
}

void thoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan])
{
	for(int i=0;i<thoi_gian_hoc_tap_trong_tuan;i++){
	
	printf("nhap thoi gian hoc tap (theo gio) cho ngay %d:",i+1);
	scanf("%f",&hours[i]);
	}
}
void inrathoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan])
{
	printf("\nThoi gian hoc tap cua ban trong tuan:\n");
	for(int i=0;i<thoi_gian_hoc_tap_trong_tuan;i++){
		printf("\nngay %d: %8f gio\n",i+1,hours[i]);	
	}
}
int tinhtongsogiohoctap(float hours[thoi_gian_hoc_tap_trong_tuan])
{
	int tong=0;
	for(int i=0;i<thoi_gian_hoc_tap_trong_tuan;i++){
	tong+=hours[i];
	printf("\nTong thoi gian hoc tap %d:",tong);
	}
	return tong;
}


void phantichthoigianhoctap(float hours[thoi_gian_hoc_tap_trong_tuan]) {
    float total = 0.0, min = hours[0], max = hours[0];
    
    
    for (int i = 0; i<thoi_gian_hoc_tap_trong_tuan; i++) {
        total += hours[i];
        if (hours[i] < min) min = hours[i];
        if (hours[i] > max) max = hours[i];
    }
    
    
    float average = total / thoi_gian_hoc_tap_trong_tuan;

    
    printf("\nKet qua phan tich thoi gian hoc tap trong tuan:\n");
    printf("So gio hoc trung binh moi ngay: %.2f gio\n", average);
    printf("Ngay hoc it nhat: %.2f gio\n", min);
    printf("Ngay hoc nhieu nhat: %.2f gio\n", max);
}
void phantichsongay(float hours[], float goal) {
    int dem1 = 0; //so ngay dat hoac vuot qua x
    int dem2 = 0; //so ngay khong dat hoac khong vuot qua x

    for (int i = 0; i < thoi_gian_hoc_tap_trong_tuan; i++) {
        if (hours[i] >= goal) {
            dem1++;
        } else {
    			dem2++;
        }
    }
	printf("\nso ngay vuot qua muc tieu %2f gio: %d ngay",goal,dem1);
	printf("\nso ngay khong vuot qua muc tieu %2f gio: %d ngay",goal,dem2);
	}
