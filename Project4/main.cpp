/*
    4. �������� ���� ����� Node, ���� ������� ��� �����.
*/

//-------------------------------���������----------------------------------
//  ���� Node � ��� � ��������� (�������) ������, 
// ���� ������� ����������� � ��������� ���������, 
// ��� ������ ���������� ���� �����. 
// �� ������, �� Node ���������� �������� ��� ��� �����
class Node //���������� ������� ���
{
public:
	virtual ~Node() {}//³��������� ����������
	virtual Node* Insert(Data* theData) = 0;// ����� ��������� ������� ��� ������� �����
	virtual void Show() = 0;// ����� ��������� ������� ��� ����������� �����
};
//---------------------------------------------------------------------
