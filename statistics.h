#define __STATISTICS_H__

class Statistics
{
    private:
        double arithmeticAverage();
        double averageWeighted();

    public:
        Statistics(double = 0, double = 0);
        ~Statistics();
        Statistics(const Statistics & fStatistics);

        double getArithmeticAverage();
        void setArithmeticAverage(double);
        double getArithmeticWeighted();
        void setArithmeticWeighted(double);

        double calcArithmeticAverage();
        double calcArithmeticWeighted();
        double calcHarmonicSeries();
};
