class Timer {
    using clock_t = std::chrono::high_resolution_clock;
    using microseconds = std::chrono::microseconds;

public:
    Timer() : start(clock_t::now()) {}

    ~Timer() {
        const auto finish = clock_t::now();
        const auto res = std::chrono::duration_cast<microseconds>(finish - start).count();
        std::cout << res << " microsecond(s)" << std::endl;
    }

private:
    const clock_t::time_point start;
};
