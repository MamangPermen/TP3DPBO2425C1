public class Hiu extends Hewan 
{
    private String spesies;
    private int jumlahGigi;

    // Constructor
    public Hiu() 
    {
        super();
    }

    public Hiu(String famili, String habitat, String jenisMakanan, String caraBerkembangbiak, int harapanHidup, Makanan food, String spesies, int jumlahGigi) 
    {
        super(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food);
        this.spesies = spesies;
        this.jumlahGigi = jumlahGigi;
    }

    // Setter
    public void setSpesies(String s) { spesies = s; }
    public void setJumlahGigi(int j) { jumlahGigi = j; }

    // Getter
    public String getSpesies() { return spesies; }
    public int getJumlahGigi() { return jumlahGigi; }

    // Method print
    @Override
    public void print() 
    {
        super.print();
        System.out.println("Spesies            : " + getSpesies());
        System.out.println("Jumlah Gigi        : " + getJumlahGigi());
        System.out.println();
    }
}