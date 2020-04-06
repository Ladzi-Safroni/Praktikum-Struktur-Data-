#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 500

struct queue{
	int plat[MAX];
	int front;
	int rear;
	int count;
};

struct stack{
	int plat[MAX];
	int count;
};

void InisialisasiQueue(struct queue *q)
{
	q->front = q->rear = 0;
	q->count = 0;
}

void InisialisasiStack(struct stack *s)
{
	s->count=0;
}

void normalisasi_queue(int x,struct queue *q, struct stack *s)
{
	do{
		q->plat[x]=q->plat[x+1];
		x++;
	} while(x<q->rear);

	q->rear--;
	q->count--;

	do{
		q->front--;
		q->plat[q->front];
		q->count++;
	} while(s->count!=0);
}

void push(int plt,struct stack *s)
{
	s->count++;
	s->plat[s->count]=plt;
}

int pop(struct stack *s)
{
	int plt;

	plt=s->plat[s->count];
	s->count--;
	return(plt);
}

int cek_mobil(int plt,struct queue *q)
{
	int i,hasil;

	for(i=q->front;i<=q->rear;i++){
		if(q->plat[i]==plt){
			hasil=i;
			break;
		}
		else if((q->plat[i]!=plt)&&(i==q->rear)){
			hasil=0;
		}
	}
	return(hasil);
}

void masuk(int plt, struct queue *q)
{
	if(q->rear==MAX){
		printf("\nAntrian Penuh !\n");
		return;
	}
	else if(q->count==0){
		q->rear++;
		q->plat[q->rear]=plt;
		q->count++;
		q->front++;
	}
	else{
		q->rear++;
		q->plat[q->rear]=plt;
		q->count++;
	}
}

void keluar(int plt, struct queue *q,struct stack *s)
{
	int i,x;

	i=q->front;
	if(q->count==0){
		printf("\nAntrian Kosong !\n");
		getch();
		return;
	}
	else if(cek_mobil(plt,q)==0){
		printf("\nPlat Mobil Yang Anda Masukkan Tidak Ada Dalam Antrian !\n");
		getch();
		return;
	}
	else if((cek_mobil(plt,q)==q->front)&&(q->count>1)){
		q->front++;
		q->count--;
		return;

	}
	else if((cek_mobil(plt,q)==q->front)&&(q->count==1))
		InisialisasiQueue(q);
	else{
		x=cek_mobil(plt,q);
		printf("\nMobil Yang Tersedia Sementara : \n");
		for(i=q->front;i<x;i++){
			printf("- Mobil Plat Nomor %d\n",q->plat[i]);
			push(q->plat[i],s);
			q->front++;
			q->count--;
		}
		normalisasi_queue(x,q,s);
		getch();
		return;
	}
}

void tampil(struct queue *q)
{
	int i,x;
	system("cls");
	x=q->front;
	printf("===========================================\n");
	printf("Data Antrian Mobil Yang Parkir : \n");
	printf("===========================================\n");
	if(q->count==0)
		printf("\nTidak Ada Mobil Yang Sedang Parkir\n");
	else {
		for(i=1;i<=q->count;i++){
			printf("%d. Mobil Plat Nomor %d\n",i,q->plat[x]);
			x++;
		}
		printf("\nJumlah Mobil Yang Parkir : %d\n",q->count);
	}
	printf("\n\n**Tekan Sembarang Tombol Untuk Kembali Ke Pilihan**");
	getch();
	return;
}

int main()
{
	struct queue q;
	struct stack s;
	int jawab;
	int plt;

	InisialisasiQueue(&q);
	InisialisasiStack(&s);

	do{
	system("cls");
	printf("===========================\n");
	printf("PROGRAM ANTRIAN MOBIL\n");
	printf("===========================\n\n");
	printf("1. Masukkan Mobil\n2. Keluarkan Mobil\n3. Tampilkan Antrian\n");
	printf("4. Keluar\n\n");
	printf("===========================\n\n");
	printf("Pilihan Anda : "); scanf("%d",&jawab);
	printf("\n===========================\n\n");

	if(jawab==1){
		printf("Masukkan Nomor Plat Mobil Masuk (Tanpa Huruf) : "); scanf("%d",&plt);
		masuk(plt,&q);
		tampil(&q);
	}

	else if(jawab==2){
		printf("Masukkan Plat Nomor Mobil Keluar (Tanpa Huruf):"); scanf("%d",&plt);
		keluar(plt,&q,&s);
		tampil(&q);
	}
	else if(jawab==3){
		tampil(&q);
	}
	else if(jawab==4)
		printf(".............");
	else{
		printf("\n\nPilihan Tidak Valid. Silahkan Ulangi!\n");
		getch();
	}
	}while(jawab!=4);
}
