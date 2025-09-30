public class Hewan 
{
    // Attributes
    protected String famili;
    protected String habitat;
    protected String jenisMakanan;
    protected String caraBerkembangbiak;
    protected int harapanHidup;
    protected Makanan food;

    // Constructor
    public Hewan()
    {
        this.food = new Makanan();
    }

    public Hewan(String famili, String habitat, String jenisMakanan, String caraBerkembangbiak, int harapanHidup, Makanan food) 
    {
        this.famili = famili;
        this.habitat = habitat;
        this.jenisMakanan = jenisMakanan;
        this.caraBerkembangbiak = caraBerkembangbiak;
        this.harapanHidup = harapanHidup;
        this.food = food;
    }

    // Setter
    public void setFamili(String f) { famili = f; }
    public void setHabitat(String h) { habitat = h; }
    public void setJenisMakanan(String jm) { jenisMakanan = jm; }
    public void setCaraBerkembangbiak(String cb) { caraBerkembangbiak = cb; }
    public void setHarapanHidup(int hh) { harapanHidup = hh; }
    public void setMakanan(Makanan m) { food = m; }

    // Getter
    public String getFamili() { return famili; }
    public String getHabitat() { return habitat; }
    public String getJenisMakanan() { return jenisMakanan; }
    public String getCaraBerkembangbiak() { return caraBerkembangbiak; }
    public int getHarapanHidup() { return harapanHidup; }
    public Makanan getMakanan() { return food; }

    // Method print
    public void print() 
    {
        System.out.println("Famili             : " + getFamili());
        System.out.println("Habitat            : " + getHabitat());
        System.out.println("Jenis Makanan      : " + getJenisMakanan());
        System.out.println("Cara Berkembangbiak: " + getCaraBerkembangbiak());
        System.out.println("Harapan Hidup      : " + getHarapanHidup() + " tahun");
        getMakanan().print();
    }
}