bool isPerfectSquare(int num) {
        if (num<=0) return false;
        int count = 0;
        for (int i = 2; (long long) i*i<=num; i++){
            if (num%i == 0){
                count = 0;
                while (num %i == 0){
                    num /=i ;
                    count++;
                }
                if (count % 2) return false;
            }
        }
        if (num!=1) return false;
        return true;
    }