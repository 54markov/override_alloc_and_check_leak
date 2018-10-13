#pragma once

#include "event.h"
#include "observer.h"


enum class ViewType { source, line, leak, error };


// Pure abstract base class
class View : public Observer
{
    public:
        View() = default;
        virtual ~View() = default;

        virtual void update(const Event& event) = 0;
};
