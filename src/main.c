#include "cube.h"

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        write(1, "Missing map argument!\n", 23);
        return (0);
    }

    t_cube cube;
    start_cube(&cube);

    cube.fd = open(argv[1], O_RDONLY);   
    if (read_lines(cube.lines, cube.fd) == 0)
        return (0);
    print_lines(cube.lines);
    t_line_clear(&cube.lines);

    free_cube(&cube);
    return (0);
}
