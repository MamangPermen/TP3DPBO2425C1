class makanan:
    def __init__(self, nama="", jenis=""):
        self.nama = nama
        self.jenis = jenis

    def set_nama(self, nama):
        self.nama = nama

    def set_jenis(self, jenis):
        self.jenis = jenis

    def get_nama(self):
        return self.nama

    def get_jenis(self):
        return self.jenis

    def print(self):
        print(f"Makanan            : {self.get_nama()} ({self.get_jenis()})")