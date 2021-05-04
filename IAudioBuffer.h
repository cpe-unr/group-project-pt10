#ifndef IAUDIOBUFFER_H
#define IAUDIOBUFFER_H

class IAudioBuffer
{
    /**
     * @brief virtual function to be overidden by processor classes
     * 
     */
    public:
    virtual void processBuffer() = 0;
};

#endif
