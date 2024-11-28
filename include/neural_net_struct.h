#ifndef NN_STRUCT
#define NN_STRUCT

typedef struct {
    size_t hidden_layer_size; // neuron count
    float* hidden_layer_state;

    size_t weights_count;
    float* hidden_layer_weights;
    float* hidden_layer_biases;
} hidden_layer_struct

typedef struct {
    size_t input_layer_size; // number of neurons in the input layer
    float* input_layer_state; // state of input layer

    size_t hidden_layers_count; // number of neural net's hidden layers
    hidden_layer_struct* hidden_layers;
}



#endif
