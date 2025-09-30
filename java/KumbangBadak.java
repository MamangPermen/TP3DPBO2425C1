public class KumbangBadak extends Hewan {
    private String spesies;
    private int panjangTanduk;

    public KumbangBadak() {
        super();
    }

    public KumbangBadak(String famili, String habitat, String jenisMakanan, String caraBerkembangbiak, int harapanHidup, Makanan food, String spesies, int panjangTanduk) {
        super(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food);
        this.spesies = spesies;
        this.panjangTanduk = panjangTanduk;
    }

    // Setter
    public void setSpesies(String s) { spesies = s; }
    public void setPanjangTanduk(int p) { panjangTanduk = p; }

    // Getter
    public String getSpesies() { return spesies; }
    public int getPanjangTanduk() { return panjangTanduk; }

    @Override
    public void print() {
        super.print();
        System.out.println("Spesies            : " + getSpesies());
        System.out.println("Panjang Tanduk     : " + getPanjangTanduk() + " mm");
        System.out.println();
    }
}