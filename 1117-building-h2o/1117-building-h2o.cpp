class H2O {
    std::mutex m;
    std::condition_variable cv;
    int turn;
public:
    H2O() {
        turn =0;
    }

    void hydrogen(function<void()> releaseHydrogen) {
        std::unique_lock<std::mutex> lock(m);
        while(turn==2){
            cv.wait(lock);
        }
        // releaseHydrogen() outputs "H". Do not change or remove this line.
        releaseHydrogen();
        ++turn;
        cv.notify_all();
    }

    void oxygen(function<void()> releaseOxygen) {
        std::unique_lock<std::mutex> lock(m);
        while(turn<2){
            cv.wait(lock);
        }
      
        
        
        // releaseOxygen() outputs "O". Do not change or remove this line.
        releaseOxygen();
        turn=0;
        cv.notify_all();
    }
};