public class Kucing extends Hewan {
    private String ras;
    private String warnaBulu;

    public Kucing() {
        super();
    }

    public Kucing(String famili, String habitat, String jenisMakanan, String caraBerkembangbiak, int harapanHidup, Makanan food, String ras, String warnaBulu) {
        super(famili, habitat, jenisMakanan, caraBerkembangbiak, harapanHidup, food);
        this.ras = ras;
        this.warnaBulu = warnaBulu;
    }

    // Setter
    public void setRas(String r) { ras = r; }
    public void setWarnaBulu(String w) { warnaBulu = w; }

    // Getter
    public String getRas() { return ras; }
    public String getWarnaBulu() { return warnaBulu; }

    @Override
    public void print() {
        super.print();
        System.out.println("Ras                : " + getRas());
        System.out.println("Warna Bulu         : " + getWarnaBulu());
        System.out.println();
    }
}