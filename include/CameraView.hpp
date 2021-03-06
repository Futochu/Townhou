#ifndef CAMERA_HPP_INCLUDED
#define CAMERA_HPP_INCLUDED

#include <SFML/System/Vector2.hpp>

class CameraView {

    //The speed which the camera scrolls.  TODO: Should this be configurable?
    static const int SCROLL_SPEED = 12;

    //The screen resolution TODO
    sf::Vector2i m_window_dimensions;

    //The current level of zoom of the camera
    int m_zoom_level;
    float m_scale_level;

    //The camera's top left corner with respect to the standard map
    sf::Vector2i m_viewpoint;

public:

    //Constructors
    CameraView(int _xWindowDimension, int _yWindowDimension, int x = 0, int y = 0);

    //Functions to return the camera's position
    int getX() const {return m_viewpoint.x;}
    int getY() const {return m_viewpoint.y;}
    sf::Vector2i getPosition() const {return m_viewpoint;}

    //Function to return the camera's zoom
    int getZoom() const {return m_zoom_level;}
    float getScale() const {return m_scale_level;}

    //Functions to return the camera's resolution
    sf::Vector2i getResolution() const {return m_window_dimensions;}

    //A function to change the camera's position TODO:
    void changeView(bool up, bool down, bool left, bool right);

    //A function to set the camera's position
    void setView(int x, int y){m_viewpoint.x = x; m_viewpoint.y = y;}

    //A function to shift the camera's position
    void setDeltaView(int x, int y);

    //A function to set the zoom level of the camera
    void setZoomLevel(int _zoom_level);

    //A function to set the camera's dimensions
    void setWindowDimensions(int _xWindowDimension, int _yWindowDimension);
};

#endif // CAMERA_HPP_INCLUDED
