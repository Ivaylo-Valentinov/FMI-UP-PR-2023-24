#include <iostream>

const int N = 5;

void print_path(int path[][2], int path_size) {
    std::cout << "Found new path with size " << path_size << std::endl;

    for(int i = 0; i < path_size; i++) {
        std::cout << path[i][0] << " " << path[i][1] << std::endl;
    }
}

bool find_all_paths(int curr_x, int curr_y, int arr[N][N], int path_size, int path[][2], int& number_of_paths) {
    if(curr_x >= N || curr_y >= N || curr_x < 0 || curr_y < 0 || arr[curr_x][curr_y] == 0) {
        return false;
    }

    // add the current node to the current path
    path[path_size][0] = curr_x;
    path[path_size][1] = curr_y;
    
    //check if the goal has been reached
    if(arr[curr_x][curr_y] == 2) {
        print_path(path, path_size);
        number_of_paths++;
        return true;
    }

    // mark the current node as visited
    arr[curr_x][curr_y] = 0;
    
    // check the paths from the adjacent nodes
    if (find_all_paths(curr_x + 1, curr_y, arr, path_size + 1, path, number_of_paths)) {
        arr[curr_x][curr_y] = 1;
    }

    if (find_all_paths(curr_x - 1, curr_y, arr, path_size + 1, path, number_of_paths)) {
        arr[curr_x][curr_y] = 1;
    }
    
    if (find_all_paths(curr_x, curr_y + 1, arr, path_size + 1, path, number_of_paths)) {
        arr[curr_x][curr_y] = 1;
    }

    if (find_all_paths(curr_x, curr_y - 1, arr, path_size + 1, path, number_of_paths)) {
        arr[curr_x][curr_y] = 1;
    }

    //unmark the node as visited
    arr[curr_x][curr_y] = 1;

    return false;

}

int main() {
    int a[N][N] = {
        {1,1,0,1,2},
        {1,1,0,1,1},
        {0,1,1,1,1},
        {1,1,0,0,1},
        {1,1,0,0,1}
    };
    int path[N * N][2];
    int path_size = 0;
    int number_of_paths = 0;
    find_all_paths(0,0, a, path_size, path, number_of_paths);

    std::cout << number_of_paths;
    return 0;
}
