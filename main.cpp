#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;


enum class PacketType {
    DATA,
    ACK
};

class Packet {
public:
    int seq_num;
    int ack_num;
    PacketType type;
    vector<char> data;


    Packet(int seq, int ack, PacketType t, const vector<char>& payload = {})
        : seq_num(seq), ack_num(ack), type(t), data(payload) {
    }

    void print_info() const {
        string type_str = (type == PacketType::DATA) ? "DATA" : "ACK";
        cout << "[PAKET] Tip: " << type_str
             << " | Seq: " << seq_num
             << " | Ack: " << ack_num
             << " | Boyut: " << data.size() << " bytes" << endl;
    }
};

int main() {
    cout << "=== DCS Projesi: Paket Testi Basliyor ===\n" << endl;


    vector<char> ornek_veri = {'M', 'e', 'r', 'h', 'a', 'b', 'a'};


    unique_ptr<Packet> p1 = make_unique<Packet>(100, 0, PacketType::DATA, ornek_veri);
    unique_ptr<Packet> p2 = make_unique<Packet>(0, 101, PacketType::ACK);

    p1->print_info();
    p2->print_info();

    cout << "\n=== Test Basarili! ===" << endl;

    return 0;
}