def main():
    print("โปรดเลือกเมนู:")
    print("1. คำนวณพื้นที่ของสี่เหลี่ยมผืนผ้า")
    print("2. คำนวณปริมาตรของสี่เหลี่ยมผืนผ้า")
    print("3. คำนวณเงินเดือนของพนักงาน")
    choice = int(input("เลือก: "))

    if choice == 1:
        width = float(input("กรุณาใส่ค่าความกว้าง : "))
        length = float(input("กรุณาใส่ค่าความยาว : "))
        print(f"พื้นที่ของสี่เหลี่ยมผืนผ้าคือ : {width * length}")
    elif choice == 2:
        width = float(input("กรุณาใส่ค่าความกว้าง : "))
        length = float(input("กรุณาใส่ความยาว : "))
        high = float(input("กรุณาใส่ความสูง : "))
        volume = width * length * high
        print(f"ปริมาตร : {volume}")
    elif choice == 3:
        emp = int(input("กรุณาระบุรหัสพนักงาน : "))
        hoursworked = float(input("กรุณากรอกชั่วโมงการทำงาน : "))
        hourlyRate = float(input("กรุณากรอกค่าแรงต่อชั่วโมง : "))
        
        # กำหนดค่าเริ่มต้นให้กับตัวแปรก่อนใช้งาน
        OT = 0
        grossSalary = 0
        tax = 0
        netSalary = 0
        
        if hoursworked <= 30:
            grossSalary = hoursworked * hourlyRate
        else: 
            OT = (hoursworked - 30) * (hourlyRate + 50)
            grossSalary = (30 * hourlyRate) + OT
        
        tax = grossSalary * 7 / 100
        netSalary = grossSalary - tax
        
        print(f" ")
        print("รหัสพนักงาน : " + str(emp))
        print("ค่าจ้างก่อนหักภาษี : " + str(grossSalary))
        print("ภาษี : " + str(tax))
        print("ค่าจ้างสุทธิ : " + str(netSalary))
    else:
        print("เมนูไม่ถูกต้อง!")
main()