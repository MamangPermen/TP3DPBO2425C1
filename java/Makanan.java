public class Makanan {
    private String nama;
    private String jenis;

    public Makanan() {}

    public Makanan(String nama, String jenis) {
        this.nama = nama;
        this.jenis = jenis;
    }

    // Setter
    public void setNama(String nama) { this.nama = nama; }
    public void setJenis(String jenis) { this.jenis = jenis; }

    // Getter
    public String getNama() { return nama; }
    public String getJenis() { return jenis; }

    public void print() {
        System.out.println("Makanan            : " + getNama() + " (" + getJenis() + ")");
    }
}