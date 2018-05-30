#ifndef MANDELBROT_H
#define MANDELBROT_H

namespace caveofprogramming
{
    class Mandelbrot
    {
    public:
        static const int MAX_ITERATIONS = 5000;

    public:
        Mandelbrot();
        virtual ~Mandelbrot();
        static int getIteration(double x, double y);
    };
}
#endif // MANDELBROT_H
