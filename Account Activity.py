class Account:
    def __init__(self,bal,acc_no):
        self.balance=bal
        self.account_no=acc_no

    def debit(self,deb_amount):
        self.balance-=deb_amount
        print("Rs.",deb_amount,"debited.")
        print("Total balance =",self.get_balance())

    def credit(self,cred_amount):
        self.balance+=cred_amount
        print("Rs.",cred_amount,"credited.")
        print("Total balance =",self.get_balance())

    def get_balance(self):
        return self.balance


acc1=Account(10000,12345)
acc1.debit(1000)
acc1.credit(500)

print("Your salary has been credited!")
acc1.credit(1000000)

print("Amount spent on clothes this month:")
acc1.debit(234592)