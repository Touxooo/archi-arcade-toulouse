/*
** EPITECH PROJECT, 2022
** dev
** File description:
** The interface IComponent is used to create and manipulate all Game entities components.
** the interface allows the use of any components as an IComponent and then has no methods.
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

namespace arcade
{
    class IComponent
    {
    public:
        virtual ~IComponent() = default;

    protected:
    private:
    };
    /* There are several components inheriting from IComponent and used by game and graphical libraries. To create and use libraries you must handle all components. */
    /* > YOU CAN ADD NEW COMPONENTS ONLY IF YOU USE YOUR OWN LIBRARIES DUE TO THE NECESSITY FOR ALL LIBRARIES TO KNOW THE SAME COMPONENTS */
}

#endif /* !ICOMPONENT_HPP_ */
