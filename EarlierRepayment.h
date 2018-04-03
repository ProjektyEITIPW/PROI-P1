#ifndef EARLIERREPAYMENT_H
#define EARLIERREPAYMENT_H


class EarlierRepayment
{
  private:
    double baseCredit;
    double baseCreditRepaid;
    double recurringCharges;
    double recurringChargesRepaid;
    double initialCharges;
    double period;
    double currentMonth;

  public:
    void setBaseCredit ( double val )
    {
      baseCredit = val;
    };
    void setBaseCreditRepaid ( double val )
    {
      baseCreditRepaid = val;
    };

    void setRecurringCharges ( double val )
    {
      recurringCharges = val;
    }
    void setRecurringChargesRepaid ( double val )
    {
      recurringChargesRepaid = val;
    }

    void setInitialCharges ( double val )
    {
      initialCharges = val;
    }

    void setPeriod ( int val )
    {
      period = val;
    }
    void setCurrentMonth ( int val )
    {
      currentMonth = val;
    }

    double baseToRepay() const;
    double chargesToBeReturned() const;
};

#endif // EARLIERREPAYMENT_H
